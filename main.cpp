#include <iostream>
#include <iomanip>

#include "Beer.h"
#include "Wine.h"
#include "Cognac.h"

#include "Milk.h"
#include "MineralWater.h"
#include "Lemonade.h"



int main() {
    //alcoholic drinks
    Beer Pilsner_light("Pilsner light", 1.5, 3, pilsner);
    std::cout << Pilsner_light << '\n';

    Wine Merlot("Merlot", 0.75, 13, red);
    std::cout << Merlot << '\n';

    Cognac Hennessy("Hennessy X.O", 0.7, 40, ash);
    std::cout << Hennessy << '\n';

    //non-alcoholic drinks
    MineralWater Borjomi("Borjomi", 1, 20, magnesium);
    std::cout << Pilsner_light << '\n';

    Milk Lyahovichok("Lyahovichok", 0.9, 0, raw);
    std::cout << Lyahovichok << '\n';

    Lemonade Jivchik("Jivchik", 1.5, 15, blackberry);
    std::cout << Jivchik << '\n';

    //warning-handling
    Beer Heineken("Heineken", -2.3, 1013, porter);
    std::cout << Heineken << "\n";

    Lemonade Snappl("Snapple", 20123.0, -120, cherry);
    std::cout << Snappl;

    return 0;
}
