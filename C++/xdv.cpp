#include <iostream>
#include <string>

std::string& return_string(std::string& str) {
    return str;
}

int main() {
    std::string input_string = "Hello, World!";
    std::string& output_string = return_string(input_string);
    std::cout << output_string << std::endl;
    return 0;
}

