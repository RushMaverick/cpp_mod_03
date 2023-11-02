#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void) {
	ScavTrap STrap("Kegan");
	ClapTrap CTrap("Jack");

	STrap.setDamage(2);
	STrap.attack(CTrap.getName());
	CTrap.takeDamage(STrap.getDamage());
	STrap.guardGate();
	return (0);
}
