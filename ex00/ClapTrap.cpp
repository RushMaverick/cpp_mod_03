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
	if (this->_Hp <= 0){
		std::cout << "\033[35m" << this->_name << " is DEAD. DEAD I TELL YOU!!" << "\033[0m" << std::endl;
		return;
	}
	if (this->_Ep > 0){
		std::cout << this->_name << " attacks " << target \
			<< ", causing " << this->_Damage << " points of damage!" << std::endl;
		this->_Ep--;
	}
	else
		std::cout << this->_name << " is out of energy." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_Hp <= 0) {
		std::cout << "\033[35mStop beating a dead ClapTrap.\033[0m" << std::endl;
		return;
	}
	this->_Hp -= amount;
	std::cout << this->_name << " has " << this->_Hp << " hit points left." << std::endl;
	if (this->_Hp > 0)
		std::cout << "\033[33m" << this->_name << ": " << "\033[0m" << "\033[32m\"Ha ha ha! I LIVE! Hahaha!\"\033[0m" << std::endl;
	else
		std::cout << "\033[33m" << this->_name << ": " << "\033[0m" << "\033[31m\"I'll die the way I lived: annoying!\"\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_Hp <= 0){
		std::cout << "\033[35m" << this->_name << " is DEAD. DEAD I TELL YOU!!" << "\033[0m" << std::endl;
		return;
	}
	if (this->_Ep > 0) {
		this->_Hp += amount;
		this->_Ep--;
		std::cout << "\033[33m" << this->_name << ": " << "\033[0m" << "\033[33m" << " heals for " << this->_Hp << " hit points." << "\033[0m" << std::endl;
	}
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
