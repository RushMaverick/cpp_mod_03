#ifndef CLAPTRAPHPP
#define CLAPTRAPHPP

#include <iostream>
#include <string>

class ClapTrap {
	protected:
		std::string _name;
		int	_Hp;
		int	_Ep;
		int	_Damage;
	public:
		ClapTrap();
		ClapTrap(const std::string _name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		void setDamage(unsigned int amount);
		int getDamage();

};


#endif