#include <iostream>
#include <string>
#include <sstream>

void convertLiteral(const std::string& literal) {
    std::istringstream iss(literal);
    double d;
    if (iss >> d) {
        // The literal is a floating-point value
        std::cout << "The original value is a float: " << d << '\n';
        std::cout << "Explicitly converted to int: " << static_cast<int>(d) << '\n';
        std::cout << "Explicitly converted to char: " << static_cast<char>(d) << '\n';
        std::cout << "Explicitly converted to bool: " << static_cast<bool>(d) << '\n';
    } else {
        // The literal is not a floating-point value, so try parsing it as an integer
        iss.clear();
        iss.str(literal);
        long long ll;
        if (iss >> ll) {
            // The literal is an integer
            std::cout << "The original value is an int: " << ll << '\n';
            std::cout << "Explicitly converted to float: " << static_cast<float>(ll) << '\n';
            std::cout << "Explicitly converted to char: " << static_cast<char>(ll) << '\n';
            std::cout << "Explicitly converted to bool: " << static_cast<bool>(ll) << '\n';
        } else {
            // The literal is not an integer, so try parsing it as a boolean
            if (literal == "true") {
                // The literal is a boolean "true"
                std::cout << "The original value is a bool: true\n";
                std::cout << "Explicitly converted to int: " << static_cast<int>(true) << '\n';
                std::cout << "Explicitly converted to float: " << static_cast<float>(true) << '\n';
                std::cout << "Explicitly converted to char: " << static_cast<char>(true) << '\n';
            } else if (literal == "false") {
                // The literal is a boolean "false"
                std::cout << "The original value is a bool: false\n";
                std::cout << "Explicitly converted to int: " << static_cast<int>(false) << '\n';
                std::cout << "Explicitly converted to float: " << static_cast<float>(false) << '\n';
                std::cout << "Explicitly converted to char: " << static_cast<char>(false) << '\n';
            } else {
                // The literal is not a boolean, so try parsing it as a character
                if (literal.length() == 1) {
                    // The literal is a character
                    char c = literal[0];
                    std::cout << "The original value is a char: " << c << '\n';
                }
            }
        }
    }
}