#include "step.h"

Step::Step() {
    timeout = 0;
    scenario_step = 0;
    params = {};
    messages = {};
    func_name = {};
}

void Step::set_action_to_go(int step_num) {
    scenario_step = step_num;
}

void Step::set_action_to_go(const std::string& function_name) {
    func_name = function_name;
}

void Step::set_timeout(int new_value) {
    timeout = new_value;
}

void Step::add_messages(std::pair<std::string, std::string> msg) {
    messages.insert(messages.end(), msg);
}

void Step::set_param(const std::string &prm) {
    params = prm;
}

//void Step::set_function_name(const std::string &f_name) {
//    function_name = f_name;
//}