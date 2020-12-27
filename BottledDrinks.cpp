#include "BottledDrinks.h"

BottledDrinks::BottledDrinks(const std::string &beverage_name, double beverage_volume) {
    beverage_name_ = beverage_name;

    if(beverage_volume < 0.5) {
        beverage_volume_ = 0.5;
        std::cerr << beverage_name + " Warning: the minimum volume is 0.5 [converted to 0.5]\n";
    } else if (beverage_volume > 1000){
        std::cerr << beverage_name + " Warning: the maximum volume is 1000 [converted to 1000]\n";
        beverage_volume_ = 1000;
    } else {
        beverage_volume_ = beverage_volume;
    }
}

std::string BottledDrinks::GetBeverageName() const {
    return beverage_name_;
}

double BottledDrinks::GetBottleVolume() const {
    return beverage_volume_;
}
