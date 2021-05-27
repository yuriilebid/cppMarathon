#ifndef UNTITLED2_SRC_STEPPER_H_
#define UNTITLED2_SRC_STEPPER_H_

#include <string>
struct Scenario_node {
  std::string params;
  void *function;
};

class Step {
 public:
  Step(const std::string &scenario_json);
  void parse(const std::string &scenario_json);
  virtual void parse(const std::string &scenario_json, int some_data); // TODO: to make a logic og this variable
 private:
  std::vector<Step> future_step;
  int timeout;
  std::string params;
  std::vector<std::pair<std::string, std::string>> messages;
  // TODO: CTRL + S
//  std::map<std::string, std::string> function;
//  std::string scenarios;
//  Scenario_node *scenario_list;
//  Step *screens;
//  Step *devices;
//  Step *logic;
//  Step *encashment;
//  Step *promo;
//  Step *tests;
};

class Devices: public Step {
 public:
  Devices(std::string): Step("{}"){};
  virtual void parse(const std::string &scenario_json, int scenario_id) {

  }

 private:
};

class Screens: public Step {
 public:
  Screens(std::string): Step("{}"){};
  virtual void parse(const std::string &scenario_json, int scenario_id) {

  }
 private:
};

class Logic: public Step {
 public:
  Logic(std::string): Step("{}"){};
  virtual void parse(const std::string &scenario_json, int scenario_id) {

  }
 private:
};

class Encashment: public Step {
 public:
  Encashment(std::string): Step("{}"){};
  virtual void parse(const std::string &scenario_json, int scenario_id) {

  }
  private:
};

class Promo: public Step {
 public:
  Promo(std::string): Step("{}"){};
  virtual void parse(const std::string &scenario_json, int some_data) {

  }
 private:
};

class Tests: public Step {
 public:
  Tests(std::string): Step("{}"){};
  virtual void parse(const std::string &scenario_json, int some_data) {

  }
 private:
};

#endif //UNTITLED2_SRC_STEPPER_H_
