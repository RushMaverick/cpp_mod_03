#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default Scav constructor called." << std::endl;
	this->_Hp = 100;
	this->_Ep = 50;
	this->_Damage = 20;
	this->_name = "Default";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Name Scav constructor called." << std::endl;
	this->_Hp = 100;
	this->_Ep = 50;
	this->_Damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "Scav destructor called." << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Copy Scav constructor called." << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "Assignment Scav operator called." << std::endl;

	if (this == &other)
		return(*this);

	this->_name = other._name;
	this->_Hp = other._Hp;
	this->_Ep = other._Ep;
	this->_Damage = other._Damage;

	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	if (this->_Hp <= 0){
		std::cout << "\033[33m" << "ScavTrap " << this->_name << "\033[0m" << "\033[35m" <<" is DEAD. DEAD I TELL YOU!!" << "\033[0m" << std::endl;
		return;
	}
	if (this->_Ep > 0){
		std::cout << "\033[33m" << "ScavTrap " << this->_name << "\033[0m" << " attacks " << "\033[33m" << target << "\033[0m" \
			<< ", causing " << this->_Damage << " points of damage!" << std::endl;
		this->_Ep--;
	}
	else
		std::cout << "ScavTrap " << "\033[33m" << this->_name << "\033[0m" << " is out of energy." << std::endl;
}

void ScavTrap::guardGate() {
	if (this->_Hp <= 0) {
		std::cout << "\033[33m" << this->_name << "\033[0m" \
			<< "\033[35m" <<" is DEAD. DEAD I TELL YOU!!" << "\033[0m" << std::endl;
		return;
	}
	if (this->_Ep <= 0) {
		std::cout << "\033[33m" << this->_name << "\033[0m"
			<< " is out of energy." << std::endl;
		return;
	}
	else {
		std::cout << "\033[33m" << this->_name << "\033[0m" << "\033[34m" << " is guarding." << "\033[0m" << std::endl;
		std::cout << "\033[33m" << this->_name << ": " << "\033[0m" << "\033[32m\"Zing! Bullet reflection!\"\033[0m" << std::endl;
	}
}