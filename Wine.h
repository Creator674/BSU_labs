#ifndef DRINKS_WINE_H
#define DRINKS_WINE_H

#include "AlcoholicDrinks.h"

enum wine_type {red, rose, white, dessert, sparkling};

class Wine : public AlcoholicDrinks{
public:
    Wine(const std::string& beverage_name, double beverage_volume, double alcohol_percentage, wine_type wine_type);

    [[nodiscard]] std::string GetWineType() const;
    friend std::ostream& operator<<(std::ostream& otp, const Wine& wine);

    ~Wine() override = default;
private:
    wine_type wine_type_;
};

#endif
