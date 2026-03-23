
#include "Battle.h"
#include "StoneGolem.h"
#include "Slime.h"
#include "Mage.h"
#include <iostream>
#include <string>
#include "Vampire Bat.h"
int main()
{
    std::cout << "Enter your name: ";
    std::string name{};
    std::getline(std::cin, name);
    if (name.empty())
        name = "Hero";

    Player     player{ name };
    VampireBat vampireBat{ "Vampire Bat", 100, 40 };
	Battle     battle{ player, vampireBat };
    //StoneGolem stonegolem{ "Stone Golem", 200, 100 };
    //Battle     battle{ player, stonegolem };
    //Mage mage{ "Mage" };
    //Slime slime{ "Slime", 150, 50 };
    //Battle     battle{ mage, slime };
   // Battle     battle{ player, slime };
    battle.run();

    return 0;
}
