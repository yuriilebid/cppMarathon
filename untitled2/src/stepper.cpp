#include "stepper.hpp"
#include <iostream>
#include <nlohmann/json.hpp>
#include <malloc.h>
#include <memory.h>

Step::Step(const std::string &scenario_json) {
	auto parsed_scenario = nlohmann::json::parse(scenario_json);

	switch(parsed_scenario.type()) {
		case nlohmann::json::value_t::object: // конечный step
			for(auto item : parsed_scenario.items()) {
				if (item.key() == "timeout") {
					timeout = item.value();
				}
				if (item.key() == "message") {
					for(auto msg: item.value().items()) { // TODO: // check if it has items
						messages.insert(std::make_pair(msg.key(), msg.value()));
					}
				}
				if (item.key() == "params") {
					params = item.value();
				}
				if (item.key() == "action") {
					for(auto action: item.value().items()) {
						future_step.insert(Step(action));
					}
				}
			}
			break;
		case nlohmann::json::value_t::array:
			break;
		default:
			break;
	}
//	screens = new Screens("{}");
//	devices = new Devices("{}");
//	logic = new Logic("{}");
//	encashment = new Encashment("{}");
//	promo = new Promo("{}");
//	tests = new Tests("{}");
}

void Step::parse(const std::string &scenario_json) {
	int somedata = 0; // FIXME: to make a logic og this variable

	for(auto scenario_obj : nlohmann::json::parse(scenario_json).items())
	screens->parse(scenario_json, somedata);
	devices->parse(scenario_json, somedata);
	logic->parse(scenario_json, somedata);
	encashment->parse(scenario_json, somedata);
	promo->parse(scenario_json, somedata);
	tests->parse(scenario_json, somedata);
}

void Step::parse(const std::string &scenario_json, int some_data) {
	auto parsed_obj = nlohmann::json::parse(scenario_json);

	if(parsed_obj.contains("action")) {

	}
	if(parsed_obj.contains("param_name")) {
		scenario_list->params = parsed_obj.at("function_action");
	}
	if(parsed_obj.contains("function_action")) {
		scenario_list->function = static_cast<void *>(&(parsed_obj.at("function_action")));
	}
	if(nlohmann::json::parse(scenario_json).contains("action")) {

	}
}