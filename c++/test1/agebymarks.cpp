#include <iostream>

int main() {
    int age = 0;
    float mark = 0;
    float product = 0;

    std::cout << "Welcome to Computer Science 1";
    std::cout << "What's your age? ";
    std::cin >> age;
    std::cout << "What's your mark? ";
    std::cin >> mark;

    product = age * mark;
    std::cout << "The product is " << product << std::endl;

    return 0;
}
