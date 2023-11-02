#include "ClapTrap.hpp"

int main (void) {
	ClapTrap* CTrap1 = new ClapTrap("Mordecai");
	ClapTrap* CTrap2 = new ClapTrap("Brick");
	ClapTrap CTrap3(*CTrap1);
	
	// CTrap1->setDamage(5);
	CTrap1->attack(CTrap2->getName());
	CTrap2->takeDamage(CTrap1->getDamage());
	CTrap1->beRepaired(2);

	delete CTrap1;
	delete CTrap2;

	return (0);
}