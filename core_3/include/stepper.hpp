#ifndef UNTITLED2_SRC_STEPPER_H_
#define UNTITLED2_SRC_STEPPER_H_

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <functional>
#include "step.h"

typedef int (*FnPtr)(std::string);

/// Contains all scenarios in vector and parse them
class Stepper {
 public:
  Stepper();
  Stepper(const std::string &scenario_json, int scenario_step = 0);
//  Stepper(const std::string &scenario_json, const std::string &action_step);
  void parse(const std::string &scenario_json);
  virtual void parse(const std::string &scenario_json, int some_data); // TODO: to make a logic og this variable
 private:
    int steps_count;
    std::vector<Step> step_list;
//  Screens* screen = new Screens();

  std::vector<Stepper *> future_step;

  void fill_function_map();
  // TODO: CTRL + S
//  std::map<std::string, std::string> function;
//  std::string scenarios;
//  Scenario_node *scenario_list;
//  Stepper *screens;
//  Stepper *devices;
//  Stepper *logic;
//  Stepper *encashment;
//  Stepper *promo;
//  Stepper *tests;
};
//
//class Devices: public Stepper {
// public:
//  Devices(std::string): Stepper("{}"){};
//  virtual void parse(const std::string &scenario_json, int scenario_id) {
//
//  }
//
// private:
//};
//
//class Logic: public Stepper {
// public:
//  Logic(std::string): Stepper("{}"){};
//  virtual void parse(const std::string &scenario_json, int scenario_id) {
//
//  }
// private:
//};
//
//class Encashment: public Stepper {
// public:
//  Encashment(std::string): Stepper("{}"){};
//  virtual void parse(const std::string &scenario_json, int scenario_id) {
//
//  }
//  private:
//};
//
//class Promo: public Stepper {
// public:
//  Promo(std::string): Stepper("{}"){};
//  virtual void parse(const std::string &scenario_json, int some_data) {
//
//  }
// private:
//};
//
//class Tests: public Stepper {
// public:
//  Tests(std::string): Stepper("{}"){};
//  virtual void parse(const std::string &scenario_json, int some_data) {
//
//  }
// private:
//};

#endif //UNTITLED2_SRC_STEPPER_H_
