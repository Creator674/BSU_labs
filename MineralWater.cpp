#include "MineralWater.h"

MineralWater::MineralWater(const std::string &beverage_name, double beverage_volume, double carbonation_degree, mineral_classification mineral_classification) : NonAlcoholicDrinks(beverage_name, beverage_volume, carbonation_degree) {
    mineral_classification_ = mineral_classification;
}

std::string MineralWater::GetMineralClassification() const {
    std::string mineral_classification;
    switch (mineral_classification_) {
        case chloride:
            mineral_classification = "chloride";
            break;
        case sulphate:
            mineral_classification = "sulphate";
            break;
        case sodium:
            mineral_classification = "sodium";
            break;
        case magnesium:
            mineral_classification = "magnesium";
            break;
    }

    return mineral_classification;
}

std::ostream &operator<<(std::ostream &otp, const MineralWater &mineral_water) {
    std::string volume = std::to_string(mineral_water.GetBottleVolume());
    std::string carbonation = std::to_string(mineral_water.GetCarbonationDegree());

    volume.erase(3, volume.length() - 3);
    carbonation.erase(3, carbonation.length() - 3);

    std::string otp_info_1 = "Classification: non-alcohol\n";
    std::string otp_info_2 = "Carbonation: " + carbonation + "%\n";
    std::string otp_info_3 = "Type: mineral water\n";
    std::string otp_info_4 = "Name: " + mineral_water.GetBeverageName() + '\n';
    std::string otp_info_5 = "Volume : " + volume + "L\n";
    std::string otp_info_6 = "Mineral classification: " + mineral_water.GetMineralClassification() + '\n';

    return otp << otp_info_1 + otp_info_2 + otp_info_3 + otp_info_4 + otp_info_5 + otp_info_6;
}
