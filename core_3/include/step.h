//
// Created by Yurii Lebid on 28.05.2021.
//

#ifndef UNTITLED2_STEP_H
#define UNTITLED2_STEP_H

#include <string>
#include <vector>
#include "Service_handle.h"
#include "device_handle.h"

// FIXME: Наследование это плохо тут
class Step {
public:
    Step();
    void set_action_to_go(const std::string& function_name);
    void set_action_to_go(int step_num);
    void set_timeout(int new_value);
    void add_messages(std::pair<std::string, std::string> msg);
    void set_param(const std::string &prm);
    void set_function_name(const std::string &func_name);
//    Step *sequence_step;
private:
    std::string func_name;
    int scenario_step;
    int timeout;
    std::string params;
    std::vector<std::pair<std::string, std::string>> messages;
};


#endif //UNTITLED2_STEP_H
