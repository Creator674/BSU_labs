#include "AlcoholicDrinks.h"

AlcoholicDrinks::AlcoholicDrinks(const std::string &beverage_name, double beverage_volume, double alcohol_percentage) : BottledDrinks(beverage_name, beverage_volume) {
    if(alcohol_percentage > 50.0){
        std::cerr << beverage_name + " Warning: alcohol percentage can not be greater than 95% [converted to 95%]\n";
        alcohol_percentage_ = 95.0;
    } else if(alcohol_percentage < 0.0){
        std::cerr << beverage_name + " Warning: alcohol percentage can not be less than 0% [converted to 0%]\n";
        alcohol_percentage_ = 0.0;
    } else {
        alcohol_percentage_ = alcohol_percentage;
    }
}

double AlcoholicDrinks::GetAlcoholPercentage() const {
    return alcohol_percentage_;
}
