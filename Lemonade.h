#ifndef DRINKS_LEMONADE_H
#define DRINKS_LEMONADE_H

#include "NonAlcoholicDrinks.h"

enum lemonade_taste {cherry, watermelon, blackberry, grapefruit, pomegranate};

class Lemonade : public NonAlcoholicDrinks {
public:
    Lemonade(const std::string& beverage_name, double beverage_volume, double carbonation_degree, lemonade_taste lemonade_taste);

    [[nodiscard]] std::string GetLemonadeTaste() const;
    friend std::ostream& operator<<(std::ostream& otp, const Lemonade& lemonade);

    ~Lemonade() override = default;
private:
    lemonade_taste lemonade_taste_;
};

#endif
