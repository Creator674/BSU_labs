#include "NonAlcoholicDrinks.h"

NonAlcoholicDrinks::NonAlcoholicDrinks(const std::string& beverage_name, double beverage_volume, double carbonation_percentage):BottledDrinks(beverage_name, beverage_volume) {
    if(carbonation_percentage > 50.0){
        std::cerr << beverage_name + " Warning: carbonation percentage can not be greater than 50% [converted to 50%]\n";
        carbonation_percentage_ = 50.0;
    } else if(carbonation_percentage < 0.0){
        std::cerr << beverage_name + " Warning: carbonation percentage can not be less than 0% [converted to 0%]\n";
        carbonation_percentage_ = 0.0;
    } else{
        carbonation_percentage_ = carbonation_percentage;
    }
}

double NonAlcoholicDrinks::GetCarbonationDegree() const {
    return carbonation_percentage_;
}
