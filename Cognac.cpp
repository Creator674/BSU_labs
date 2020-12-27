#include "Cognac.h"

Cognac::Cognac(const std::string &beverage_name, double beverage_volume, double alcohol_percentage, barrel_type barrel_type) : AlcoholicDrinks(beverage_name, beverage_volume, alcohol_percentage) {
    barrel_type_ = barrel_type;
}

std::string Cognac::GetCognacBarrelType() const {
   std::string barrel_type;

    switch (barrel_type_) {
        case banyan:
            barrel_type = "banyan";
            break;
        case ash:
            barrel_type = "ash";
            break;
        case oak:
            barrel_type = "oak";
            break;
        case pine:
            barrel_type = "pine";
            break;
        case birch:
            barrel_type = "birch";
            break;
        case elm:
            barrel_type = "elm";
            break;
    }

    return barrel_type;
}

std::ostream &operator<<(std::ostream &otp, const Cognac &cognac) {
    std::string volume = std::to_string(cognac.GetBottleVolume());
    std::string percentage = std::to_string(cognac.GetAlcoholPercentage());

    volume.erase(3, volume.length() - 3);
    percentage.erase(3, percentage.length() - 3);

    std::string otp_info_1 = "Classification: alcohol\n";
    std::string otp_info_2 = "Percentage: " + percentage + "%\n";
    std::string otp_info_3 = "Type: cognac\n";
    std::string otp_info_4 = "Name: " + cognac.GetBeverageName() + '\n';
    std::string otp_info_5 = "Volume : " + volume + "L\n";
    std::string otp_info_6 = "Barrel type: " + cognac.GetCognacBarrelType() + '\n';

    return otp << otp_info_1 + otp_info_2 + otp_info_3 + otp_info_4 + otp_info_5 + otp_info_6;
}
