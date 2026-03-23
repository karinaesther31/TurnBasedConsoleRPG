#include <iostream>
#include <string>
#include "Vampire Bat.h"
#include "Character.h"
VampireBat::VampireBat(std::string name, int maxHp, int maxToughness)
    : Enemy{ std::move(name), maxHp, maxToughness }
{
}
ActionResult VampireBat::performAttack()
{
    ++m_turnCount;
    if (m_turnCount % 3 == 0)
    {
		heal(12);
        std::cout << "  >> " << m_name
            << " swoops down and bites you -- LIFE DRAIN! <<\n";
        return ActionResult{ ActionResult::Type::Damage, 8 };
		//ActionResult{ ActionResult::Type::Heal, Character };
    }
	return ActionResult{ ActionResult::Type::Damage, 14 };
}   