#include <iostream>
#include <cstring>

class StringUtil {
public:
    static int func(const char* str) {
        int length = 0;
        while (*str != '\0') {
            if (*str != ' ') {
                length++;
            }
            str++;
        }
        return length;
    }
};

int main() {
    const char* str = "My name is x.";

    // Using built-in strlen function
    int builtInLength = strlen(str);
    std::cout << "Built-in function output: " << builtInLength << std::endl;

    // Using own function
    int customLength = StringUtil::func(str);
    std::cout << "Custom function output: " << customLength << std::endl;

    return 0;
}

