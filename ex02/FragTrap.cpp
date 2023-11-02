#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Default Frag constructor called." << std::endl;
	this->_Hp = 100;
	this->_Ep = 50;
	this->_Damage = 20;
	this->_name = "Default";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Name Frag constructor called." << std::endl;
	this->_Hp = 100;
	this->_Ep = 50;
	this->_Damage = 20;
}

FragTrap::~FragTrap() {
	std::cout << "Frag destructor called." << std::endl;

}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "Copy Frag constructor called." << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "Assignment Frag operator called." << std::endl;

	if (this == &other)
		return(*this);

	this->_name = other._name;
	this->_Hp = other._Hp;
	this->_Ep = other._Ep;
	this->_Damage = other._Damage;

	return (*this);
}

void FragTrap::attack(const std::string& target) {
	if (this->_Hp <= 0){
		std::cout << "\033[33m" << "FragTrap " << this->_name << "\033[0m" << "\033[35m" <<" is DEAD. DEAD I TELL YOU!!" << "\033[0m" << std::endl;
		return;
	}
	if (this->_Ep > 0){
		std::cout << "\033[33m" << "FragTrap " << this->_name << "\033[0m" << " attacks " << "\033[33m" << target << "\033[0m" \
			<< ", causing " << this->_Damage << " points of damage!" << std::endl;
		this->_Ep--;
	}
	else
		std::cout << "FragTrap " << "\033[33m" << this->_name << "\033[0m" << " is out of energy." << std::endl;
}

void FragTrap::highFivesGuys(void) {
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
		std::cout << "\033[33m" << this->_name << "\033[0m" << "\033[34m" << " requests a high five." << "\033[0m" << std::endl;
		std::cout << "\033[33m" << this->_name << ": " << "\033[0m" << "\033[32m\"Secret handshake!\"\033[0m" << std::endl;
	}
}
