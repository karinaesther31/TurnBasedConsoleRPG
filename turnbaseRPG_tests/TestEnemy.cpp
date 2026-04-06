#include "doctest.h"
#include "Enemy.h"
#include "Drop.h"

TEST_CASE("Enemy with a drop reports it correctly"); 
{
	Drop d{ "Iron Shard", 10 };
	Enemy e{ "Golem", 200,100,d };
	SUBCASE("hasDrop return true") {
		CHECK(e.hasDrop());
	}
	SUBCASE("getDrop returns correct name") {
		CHECK(e.getDrop()name == "Iron Shard");

	}
}