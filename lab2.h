#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;

class carry_truck {
private:
	string car_id;
	uint16_t galons_use;
	uint16_t power;
	uint16_t max_weight;
    uint32_t miles_history;
public:
	carry_truck();

	carry_truck(string car_id_input, uint16_t galons_use_input, uint16_t power_input,
		        uint16_t max_weight_input, uint32_t miles_history_input);

    string get_id();

    uint16_t get_galons_use();

    uint16_t get_power();

    uint32_t get_miles_history();

    uint16_t get_max_weight();

    void set_galons_use(uint16_t input);

    void set_power(uint16_t input);

    void set_miles_history(uint32_t input);

    void set_max_weight(uint16_t input);

    void increase_power(int value_to_increase);

    void show_car_details();
};

