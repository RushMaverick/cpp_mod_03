
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	FragTrap FTrap("Steve");
	ScavTrap STrap("George");
	ClapTrap CTrap("Frank");

	FTrap.highFivesGuys();
	STrap.guardGate();
	STrap.attack(FTrap.getName());
	STrap.attack(FTrap.getName());
	FTrap.attack(STrap.getName());
	STrap.takeDamage(FTrap.getDamage());
	FTrap.attack(STrap.getName());
	STrap.takeDamage(FTrap.getDamage());
	FTrap.attack(STrap.getName());
	STrap.takeDamage(FTrap.getDamage());
	FTrap.attack(STrap.getName());
	STrap.takeDamage(FTrap.getDamage());
	FTrap.attack(STrap.getName());
	STrap.takeDamage(FTrap.getDamage());
	CTrap.attack(FTrap.getName());
	CTrap.attack(FTrap.getName());
	return 0;
}