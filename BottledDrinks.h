#ifndef DRINKS_BOTTLEDDRINKS_H
#define DRINKS_BOTTLEDDRINKS_H
#include <string>
#include <iostream>
#include <cmath>

class BottledDrinks {
public:
    [[nodiscard]] std::string GetBeverageName() const;
    [[nodiscard]] double GetBottleVolume() const;

    virtual ~BottledDrinks() = default;

protected:
    BottledDrinks(const std::string& beverage_name, double beverage_volume);

    std::string beverage_name_;
    double beverage_volume_;
};

#endif
