#include "ClapTrap.hpp"

int main (void) {
	ClapTrap* CTrap1 = new ClapTrap("Mordecai");
	ClapTrap* CTrap2 = new ClapTrap("Brick");
	ClapTrap CTrap3(*CTrap1);
	
	// CTrap1->setDamage(5);
	CTrap1->attack(CTrap2->getName());
	CTrap2->takeDamage(CTrap1->getDamage());
	CTrap1->beRepaired(2);

	return (0);
}

/*When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
or energy points left.
In all of these member functions, you have to print a message to describe what hap-
pens. For example, the attack() function may display something like (of course, without
the angle brackets):
ClapTrap <name> attacks <target>, causing <damage> points of damage!
The constructors and destructor must also display a message, so your peer-evaluators
can easily see they have been called.
Implement and turn in your own tests to ensure your code works as expected.
6
*/