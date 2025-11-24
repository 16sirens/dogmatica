#include <iostream>
#include <vector>
#include "Wizard.h"

int GenerateRandStartvalue(int minimumVal, int MaxRand) {
    return rand() % MaxRand + minimumVal;
}

int main()
{
    std::cout << "Start Game";
    srand(time(0));
    Wizard Wizard1;
    Wizard1.setHealth(Wizard1, GenerateRandStartvalue(10, 20));
    Wizard1.setSpeed(Wizard1, GenerateRandStartvalue(10, 20));

    Wizard Wizard2;
    Wizard2.setHealth(Wizard2, GenerateRandStartvalue(10, 20));
    Wizard2.setSpeed(Wizard2, GenerateRandStartvalue(10, 20));

    std::vector<Wizard>battlingWizards;



    while  (Wizard1.getHealth() > 0 && Wizard2.getHealth() > 0) {
        
        // If wizard 1 should go first 
        if (Wizard1.getSpeed(Wizard1) > Wizard2.getSpeed(Wizard2)) {

            Wizard1.CastSpell(Wizard2);
            Wizard2.CastSpell(Wizard1);

        }
        else {

            Wizard2.CastSpell(Wizard1);
            Wizard1.CastSpell(Wizard2);  
        }

        std::cout << "\nWizard 1 Health: " << Wizard1.getHealth();
        std::cout << "\nWizard 2 Health: " << Wizard2.getHealth();
    }

    std::cout << "\nGame Finished!";

    return 0;
}
