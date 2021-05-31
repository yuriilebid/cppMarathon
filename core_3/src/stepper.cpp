#include "stepper.hpp"
#include <iostream>
#include <nlohmann/json.hpp>
#include <mm_malloc.h>
#include <memory.h>
#include <functional>

Stepper::Stepper() {

}

bool is_number(const std::string& s) {
    return !s.empty() && std::find_if(s.begin(),
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}

Stepper::Stepper(const std::string &scenario_json, int scenario_step) {
    printf("Scenario: %s\n", scenario_json.c_str());
	auto parsed_scenario = nlohmann::json::parse(scenario_json);
	std::string unique_scenario_text;

	std::cout << "Object count: " << parsed_scenario.size() << std::endl;
//	step_list = std::vector<Step*>(parsed_scenario.size());
	// FIXME: make more adequate filling
//	for(int i = 0; i < parsed_scenario.size(); i++) {
//	    Step new_step;
//	    step_list.insert(step_list.end(), new_step);
//	}

//	switch(parsed_scenario.type()) {
//		case nlohmann::json::value_t::object: // конечный step
    for (auto item : parsed_scenario.items()) {
        Step step_tmp;
        for (auto arr : parsed_scenario.at(item.key())) {
            for (auto unique_item : arr.items()) {
                if (unique_item.key() == "timeout") {
//                    step_list[steps_count]->set_timeout(unique_item.value());
                    step_tmp.set_timeout(unique_item.value());
                } else if (unique_item.key() == "messages") {
                    for (auto msg: unique_item.value().items()) { // TODO: // check if it has items
//                         step_list[steps_count]->add_messages(std::make_pair(msg.key(), msg.value()));
//                        step_tmp.
                    }
                } else if (unique_item.key() == "params") {
                    step_list[steps_count].set_param(unique_item.value());
                } else if (unique_item.key() == "action") {
                    step_list[steps_count].set_action_to_go(unique_item.value());
                    /// Case to go for another object of scenario (mostly in input params)
                    std::cout << "Action to go: " << unique_item.value() << std::endl;
                    if (is_number(unique_item.value())) {
                        for (auto action: unique_item.value().items()) {
                            std::string num = unique_item.value();
//                            step_list[steps_count].sequence_step = step_list[std::stoi(num)]; /// Should be pointer
                            Stepper additional_step;
                        }
                    }
                    /// Case to run specific function
                    else {
                        std::string f_name = unique_item.value();
                        std::cout << "Function name: " << unique_item.value() << std::endl;
                        step_list[steps_count].set_function_name(f_name);
//                      function_map[unique_item.value()](params);
                    }
                }
            }
            /// "1"[{},{}], "2"[{}], "3"[{},[{}]] JSONs objects counter
            steps_count++;
        }
    }


//    else {
//        for (auto arr : parsed_scenario.at(std::to_string(scenario_step))) {
//            for (auto unique_item : arr.items()) {
//                if (unique_item.key() == "timeout") {
//                    timeout = unique_item.value();
//                } else if (unique_item.key() == "messages") {
//                    for (auto msg: unique_item.value().items()) { // TODO: // check if it has items
//                        messages.insert(messages.end(), std::make_pair(msg.key(), msg.value()));
//                    }
//                } else if (unique_item.key() == "params") {
//                    params = unique_item.value();
//                } else if (unique_item.key() == "action") {
//                    if (is_number(unique_item.value())) {
//                        for (auto action: unique_item.value().items()) {
//                            Stepper *additional_step = new Stepper(action.value().dump());
//                            future_step.insert(future_step.end(), additional_step);
//                        }
//                    }
//                }
//            }
//        }
//    }
//			break;
//		case nlohmann::json::value_t::array:
//			break;
//		default:
//			break;
//	}
//	screens = new Screens("{}");
//	devices = new Devices("{}");
//	logic = new Logic("{}");
//	encashment = new Encashment("{}");
//	promo = new Promo("{}");
//	tests = new Tests("{}");
}

void Stepper::fill_function_map() {
    std::function<void(std::string)> f;
//    (std::bind(&Screens::print_console, this, 1);
//    function_map["print_console"] = print_console;
}

void Stepper::parse(const std::string &scenario_json) {
	int somedata = 0; // FIXME: to make a logic og this variable

	for(auto scenario_obj : nlohmann::json::parse(scenario_json).items()) {}
//	screens->parse(scenario_json, somedata);
//	devices->parse(scenario_json, somedata);
//	logic->parse(scenario_json, somedata);
//	encashment->parse(scenario_json, somedata);
//	promo->parse(scenario_json, somedata);
//	tests->parse(scenario_json, somedata);
}

void Stepper::parse(const std::string &scenario_json, int some_data) {
	auto parsed_obj = nlohmann::json::parse(scenario_json);

	if(parsed_obj.contains("action")) {

	}
	if(parsed_obj.contains("param_name")) {
//		scenario_list->params = parsed_obj.at("function_action");
	}
	if(parsed_obj.contains("function_action")) {
//		scenario_list->function = static_cast<void *>(&(parsed_obj.at("function_action")));
	}
	if(nlohmann::json::parse(scenario_json).contains("action")) {

	}
}