#include "Milk.h"

Milk::Milk(const std::string &beverage_name, double beverage_volume, double carbonation_degree, milk_type milk_type) : NonAlcoholicDrinks(beverage_name, beverage_volume, carbonation_degree) {
    milk_type_ = milk_type;
}

std::string Milk::GetMilkType() const {
    std::string milk_type;

    switch (milk_type_) {
        case raw:
            milk_type = "raw";
            break;
        case flavoured:
            milk_type = "flavoured";
            break;
        case lactose_free:
            milk_type = "lactose-free";
            break;
        case organic:
            milk_type = "organic";
            break;
    }

    return milk_type;
}

std::ostream &operator<<(std::ostream &otp, const Milk &milk) {
    std::string volume = std::to_string(milk.GetBottleVolume());
    std::string carbonation = std::to_string(milk.GetCarbonationDegree());

    volume.erase(3, volume.length() - 3);
    carbonation.erase(3, carbonation.length() - 3);

    std::string otp_info_1 = "Classification: non-alcohol\n";
    std::string otp_info_2 = "Carbonation: " + carbonation + "%\n";
    std::string otp_info_3 = "Type: milk\n";
    std::string otp_info_4 = "Name: " + milk.GetBeverageName() + '\n';
    std::string otp_info_5 = "Volume : " + volume + "L\n";
    std::string otp_info_6 = "Milk type: " + milk.GetMilkType() + '\n';

    return otp << otp_info_1 + otp_info_2 + otp_info_3 + otp_info_4 + otp_info_5 + otp_info_6;
}

