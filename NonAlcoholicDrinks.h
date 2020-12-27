#ifndef DRINKS_NONALCOHOLICDRINKS_H
#define DRINKS_NONALCOHOLICDRINKS_H

#include "BottledDrinks.h"

class NonAlcoholicDrinks: public BottledDrinks {
public:
    [[nodiscard]] double GetCarbonationDegree() const;
    ~NonAlcoholicDrinks() override = default;

protected:
    NonAlcoholicDrinks(const std::string& beverage_name, double beverage_volume, double carbonation_percentage);
    double carbonation_percentage_;
};


#endif
