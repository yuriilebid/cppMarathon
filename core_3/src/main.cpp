#include "stepper.hpp"

int main(int argc, char** argv) {
    std::string json_example = "{\"1\":[{\"messages\":{\"UA\":\"Купити\",\"RU\":\"Купить\",\"EN\":\"Buy\"},\"timeout\":10,\"action\":\"test_func_one\",\"params\":\"hello test msg\"},{\"messages\":{\"UA\":\"Купити\",\"RU\":\"Купить\",\"EN\":\"Buy\"},\"timeout\":5,\"action\":\"2\",\"params\":\"Continue for the first scenatio\"}],\"2\":[{\"messages\":{\"UA\":\"Купити\",\"RU\":\"Купить\",\"EN\":\"Buy\"},\"timeout\":5,\"action\":\"test_func_two\",\"params\":\"Continue for the first scenatio\"}]}";
    Stepper step(json_example);

    printf("Hello vova from Space!\n");
    return 0;
}