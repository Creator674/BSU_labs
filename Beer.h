#ifndef DRINKS_BEER_H
#define DRINKS_BEER_H

#include "AlcoholicDrinks.h"

enum beer_type {ale, lager, porter, stout, wheat, pilsner};

class Beer : public AlcoholicDrinks{
public:
    Beer(const std::string& beverage_name, double beverage_volume, double alcohol_percentage, beer_type beer_type);

    [[nodiscard]] std::string GetBeerType() const;
    friend std::ostream& operator<<(std::ostream& otp, const Beer& beer);

    ~Beer() override = default;
private:
    beer_type beer_type_;
};

#endif
