#include "Beer.h"

Beer::Beer(const std::string &beverage_name, double beverage_volume, double alcohol_percentage, beer_type beer_type) : AlcoholicDrinks(beverage_name, beverage_volume, alcohol_percentage) {
    beer_type_ = beer_type;
}

std::string Beer::GetBeerType() const {
    std::string beer_type;

    switch (beer_type_) {
        case ale:
            beer_type = "ale";
            break;
        case lager:
            beer_type = "lager";
            break;
        case porter:
            beer_type = "porter";
            break;
        case stout:
            beer_type = "stout";
            break;
        case wheat:
            beer_type = "wheat";
            break;
        case pilsner:
            beer_type = "pilsner";
            break;
    }

    return beer_type;
}

std::ostream &operator<<(std::ostream &otp, const Beer &beer) {
    std::string volume = std::to_string(beer.GetBottleVolume());
    std::string percentage = std::to_string(beer.GetAlcoholPercentage());

    volume.erase(3, volume.length() - 3);
    percentage.erase(3, percentage.length() - 3);

    std::string otp_info_1 = "Classification: alcohol\n";
    std::string otp_info_2 = "Percentage: " + percentage + "%\n";
    std::string otp_info_3 = "Type: beer\n";
    std::string otp_info_4 = "Name: " + beer.GetBeverageName() + '\n';
    std::string otp_info_5 = "Volume : " + volume + "L\n";
    std::string otp_info_6 = "Beer type: " + beer.GetBeerType() + '\n';

    return otp << otp_info_1 + otp_info_2 + otp_info_3 + otp_info_4 + otp_info_5 + otp_info_6;
}

