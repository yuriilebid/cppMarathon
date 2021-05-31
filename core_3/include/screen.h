#ifndef UNTITLED2_SCREEN_H
#define UNTITLED2_SCREEN_H

#include <iostream>


class Screen {
 public:
//  Screen(std::string): Stepper("{}"){};
  virtual void parse(const std::string &scenario_json, int scenario_id) {

  }
  /// temporary for tests
  void print_console(const std::string msg) {
      std::cout << msg << std::endl;
  }
 private:
};


#endif //UNTITLED2_SCREEN_H
