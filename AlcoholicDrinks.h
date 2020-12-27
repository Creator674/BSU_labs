#ifndef DRINKS_ALCOHOLICDRINKS_H
#define DRINKS_ALCOHOLICDRINKS_H

#include "BottledDrinks.h"

class AlcoholicDrinks : public BottledDrinks {
public:
    [[nodiscard]] double GetAlcoholPercentage() const;
    ~AlcoholicDrinks() override = default;

protected:
    AlcoholicDrinks(const std::string& beverage_name, double beverage_volume, double alcohol_percentage);
    double alcohol_percentage_;
};

#endif
