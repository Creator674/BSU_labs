#include "Lemonade.h"

Lemonade::Lemonade(const std::string &beverage_name, double beverage_volume, double carbonation_degree, lemonade_taste lemonade_taste) : NonAlcoholicDrinks(beverage_name, beverage_volume, carbonation_degree) {
    lemonade_taste_ = lemonade_taste;
}

std::string Lemonade::GetLemonadeTaste() const {
    std::string lemonade_taste;

    switch (lemonade_taste_) {
        case cherry:
            lemonade_taste = "cherry";
            break;
        case watermelon:
            lemonade_taste = "watermelon";
            break;
        case blackberry:
            lemonade_taste = "blackberry";
            break;
        case grapefruit:
            lemonade_taste = "grapefruit";
            break;
        case pomegranate:
            lemonade_taste = "pomegranate";
            break;
    }

    return lemonade_taste;
}

std::ostream &operator<<(std::ostream &otp, const Lemonade &lemonade) {
    std::string volume = std::to_string(lemonade.GetBottleVolume());
    std::string carbonation = std::to_string(lemonade.GetCarbonationDegree());

    volume.erase(3, volume.length() - 3);
    carbonation.erase(3, carbonation.length() - 3);

    std::string otp_info_1 = "Classification: non-alcohol\n";
    std::string otp_info_2 = "Carbonation: " + carbonation + "%\n";
    std::string otp_info_3 = "Type: lemonade\n";
    std::string otp_info_4 = "Name: " + lemonade.GetBeverageName() + '\n';
    std::string otp_info_5 = "Volume : " + volume + "L\n";
    std::string otp_info_6 = "Lemonade taste: " + lemonade.GetLemonadeTaste() + '\n';

    return otp << otp_info_1 + otp_info_2 + otp_info_3 + otp_info_4 + otp_info_5 + otp_info_6;
}
