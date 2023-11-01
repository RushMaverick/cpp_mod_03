#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called." << std::endl;
	this->_Hp = 10;
	this->_Ep = 10;
	this->_Damage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
	std::cout << "Name constructor called." << std::endl;
	this->_Hp = 10;
	this->_Ep = 10;
	this->_Damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called." << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Assignment operator called." << std::endl;

	if (this == &other)
		return(*this);

	this->_name = other._name;
	this->_Hp = other._Hp;
	this->_Ep = other._Ep;
	this->_Damage = other._Damage;

	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	std::cout << this->_name << " attacks " << target \
		<< ", causing " << this->_Damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_Hp -= amount;
	std::cout << this->_name << " has " << this->_Hp << " hit points left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_Hp += amount;
	std::cout << this->_name << " heals for " << this->_Hp << " hit points." << std::endl;
}

std::string ClapTrap::getName() {
	return (this->_name);
}

void ClapTrap::setDamage(unsigned int amount) {
	this->_Damage = amount;
}

int ClapTrap::getDamage() {
	return (this->_Damage);
}
