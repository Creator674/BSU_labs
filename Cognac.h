#ifndef DRINKS_COGNAC_H
#define DRINKS_COGNAC_H

#include "AlcoholicDrinks.h"

enum barrel_type {banyan, ash, oak, pine, birch, elm};

class Cognac : public AlcoholicDrinks{
public:
    Cognac(const std::string& beverage_name, double beverage_volume, double alcohol_percentage, barrel_type barrel_type);

    [[nodiscard]] std::string GetCognacBarrelType() const;
    friend std::ostream& operator<<(std::ostream& otp, const Cognac& cognac);

    ~Cognac() override = default;
private:
    barrel_type barrel_type_;
};


#endif
