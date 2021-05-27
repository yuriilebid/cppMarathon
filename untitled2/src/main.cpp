#include "stepper.hpp"

int main(int argc, char** argv) {
	if(argc >= 2) {
		std::string json_str = argv[1];

		Step step(json_str);
	}
	return 0;
}
