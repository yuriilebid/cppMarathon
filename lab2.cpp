#include "lab2.h"

carry_truck car1("AA1234BB", 6, 249, 4000, 35000);

carry_truck::carry_truck() {
    car_id = "AA0000AA";
    galons_use = 0;
    power = 0;
    max_weight = 0;
    miles_history = 0;
}


/*
 * @Function : 
 *            carry_truck
 *
 * @Parameters : 
 *              car_id_input                - identification number of the car
 *              galons_use_input            - amount of galons used each 100 km
 *              power_input                 - horse power of the car
 *              max_weight_input            - max carry weight
 *              miles_history_input         - amount of miles
 *
 * @Description : 
 *               Sets private variables in class
 */

carry_truck::carry_truck(string car_id_input, uint16_t galons_use_input, uint16_t power_input,
		    uint16_t max_weight_input, uint32_t miles_history_input) {
    car_id = car_id_input;
    galons_use = galons_use_input;
    power = power_input;
    max_weight = max_weight_input;
    miles_history = miles_history_input;
}

string carry_truck::get_id() {
    return car_id;
}

uint16_t carry_truck::get_galons_use() {
    return galons_use;
}

uint16_t carry_truck::get_power() {
    return power;
}

uint32_t carry_truck::get_miles_history() {
    return miles_history;
}

uint16_t carry_truck::get_max_weight() {
    return max_weight;
}

void carry_truck::set_galons_use(uint16_t input) {
    if(input < 0 || input > 255) {
        cout << "galons should be in range of 0 ... 255" << endl;
        exit(1);
    }
    galons_use = input;
}

void carry_truck::set_power(uint16_t input) {
    if(input < 0 || input > 65535) {
        cout << "power should be in range of 0 ... 65,535" << endl;
        exit(1);
    }
    power = input;
}

void carry_truck::set_miles_history(uint32_t input) {
    if(input < 0 || input > 2147483647) {
        cout << "miles should be in range of 0 ... 2,147,483,647" << endl;
        exit(1);
    }
    miles_history = input;
}

void carry_truck::set_max_weight(uint16_t input) {
    if(input < 0 || input > 65535) {
        cout << "weight should be in range of 0 ... 65,535" << endl;
        exit(1);
    }
    max_weight = input;
}

void carry_truck::increase_power(int value_to_increase) {
    if(value_to_increase < 0) {
        cout << "Value to increase couldnt be less than 0" << endl;
        exit(1);
    }
    power += value_to_increase;
}

int show_menu() {
    int input = 0;

    cout << " Menu" << endl;
    cout << "1. Show objects" << endl;
    cout << "2. Increase power" << endl;
    cout << "3. Set value" << endl;
    cout << "4. Exit" << endl; 

    cin >> input;
    return input;
}

void show_objects() {
    cout << "   ID   |    Usage    |    Power   |    Max weight   |   Mileage  " << endl;
    cout << car1.get_id() << "       " 
    << car1.get_galons_use() << "            " 
    << car1.get_power() << "           " 
    << car1.get_max_weight() << "           " 
    << car1.get_miles_history() << endl; 
}

void set_handler(int input) {
    switch(input) {
        case 1: {
            int usage = 0;

            cout << "Enter usage: ";
            cin >> usage;
            car1.set_galons_use(usage);
        }
        case 2: {
            int power = 0;

            cout << "Enter power: ";
            cin >> power;
            car1.set_power(power);
        }
        case 3: {
            int weight = 0;

            cout << "Enter weight: ";
            cin >> weight;
            car1.set_max_weight(weight);
        }
        case 4: {
            int mileage = 0;

            cout << "Enter mileage: ";
            cin >> mileage;
            car1.set_miles_history(mileage);
        }
    }
}

void command_handler(int cmd) {
    if(cmd == 1) {
        show_objects();
    }
    else if(cmd == 2) {
        car1.increase_power(10);
    }
    else if(cmd == 3) {
        int input = 0;

        cout << "Which value?" << endl 
             << "1. Usage" << endl
             << "2. Power" << endl
             << "3. Max weight" << endl
             << "4. Mileage" << endl;
        cin >> input;
        set_handler(input);
    }
    else if(cmd == 4) {
        exit(0);
    }
}

int main() {
    while(true) {
        int cmd = show_menu();

        command_handler(cmd);
    }
}