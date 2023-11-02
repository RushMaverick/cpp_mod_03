
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	FragTrap FTrap("Steve");
	ScavTrap STrap("George");
	ClapTrap CTrap("Frank");

	FTrap.highFivesGuys();
	STrap.guardGate();
	return 0;
}