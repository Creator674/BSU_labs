#include "Wine.h"

Wine::Wine(const std::string &beverage_name, double beverage_volume, double alcohol_percentage, wine_type wine_type) : AlcoholicDrinks(beverage_name, beverage_volume, alcohol_percentage){
    wine_type_ = wine_type;
}

std::string Wine::GetWineType() const {
    std::string wine_type;

    switch (wine_type_) {
        case red:
            wine_type = "red";
            break;
        case rose:
            wine_type = "rose";
            break;
        case white:
            wine_type = "white";
            break;
        case dessert:
            wine_type = "dessert";
            break;
        case sparkling:
            wine_type = "sparkling";
            break;
    }

    return wine_type;
}

std::ostream &operator<<(std::ostream &otp, const Wine &wine) {
    std::string volume = std::to_string(wine.GetBottleVolume());
    std::string percentage = std::to_string(wine.GetAlcoholPercentage());

    volume.erase(3, volume.length() - 3);
    percentage.erase(3, percentage.length() - 3);

    std::string otp_info_1 = "Classification: alcohol\n";
    std::string otp_info_2 = "Percentage: " + percentage + "%\n";
    std::string otp_info_3 = "Type: wine\n";
    std::string otp_info_4 = "Name: " + wine.GetBeverageName() + '\n';
    std::string otp_info_5 = "Volume : " + volume + "L\n";
    std::string otp_info_6 = "Wine type: " + wine.GetWineType() + '\n';

    return otp << otp_info_1 + otp_info_2 + otp_info_3 + otp_info_4 + otp_info_5 + otp_info_6;
}
