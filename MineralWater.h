#ifndef DRINKS_MINERALWATER_H
#define DRINKS_MINERALWATER_H

#include "NonAlcoholicDrinks.h"

enum mineral_classification {chloride, sulphate, sodium, magnesium};

class MineralWater : public NonAlcoholicDrinks {
public:
    MineralWater(const std::string& beverage_name, double beverage_volume, double carbonation_degree, mineral_classification mineral_classification);

    [[nodiscard]] std::string GetMineralClassification() const;
    friend std::ostream& operator<<(std::ostream& otp, const MineralWater& mineral_water);

    ~MineralWater() override = default;
private:
    mineral_classification mineral_classification_;
};

#endif
