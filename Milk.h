#ifndef DRINKS_MILK_H
#define DRINKS_MILK_H

#include "NonAlcoholicDrinks.h"

enum milk_type {raw, flavoured, lactose_free, organic};

class Milk : public NonAlcoholicDrinks {
public:
    Milk(const std::string& beverage_name, double beverage_volume, double carbonation_degree, milk_type milk_type);

    [[nodiscard]] std::string GetMilkType() const;
    friend std::ostream& operator<<(std::ostream& otp, const Milk& milk);

    ~Milk() override = default;
private:
    milk_type milk_type_;
};

#endif
