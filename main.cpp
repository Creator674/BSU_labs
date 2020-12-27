#include <iostream>
#include "Person.h"

int main() {
    Person Adam("Adam", Person::male);
    Person Eva("Eva", Person::female);
    Person CJ("CJ", Person::female, &Eva, &Adam);

    std::cout << Adam << '\n';
    std::cout << Eva << '\n';
    std::cout << CJ << '\n';

    try {
        Person Tofu("Tofu", Person::male);
        std::cout << Tofu << '\n';
    } catch(const std::exception &e) {
        std::cerr << "For Tofu: " << e.what() << '\n';
    }
    
    try {
        Person Rome = Eva.GiveBirth("Rome", Person::male);
        std::cout << Rome << '\n';
    } catch(const std::exception &e) {
        std::cerr << "For Rome: " << e.what() << '\n';
    }

    try {
        Person Chloe = Eva.GiveBirth("Chloe", Person::female, &Adam);
        std::cout << Chloe << '\n';
    } catch(const std::exception &e) {
        std::cerr << "For Chloe: " << e.what() << '\n';
    }

    try {
        Person Silvia = Adam.GiveBirth("Silvia", Person::female);
        std::cout << Silvia << '\n';
    } catch(const std::exception &e) {
        std::cerr << "For Silvia: " << e.what() << '\n';
    }

    return 0;
}
