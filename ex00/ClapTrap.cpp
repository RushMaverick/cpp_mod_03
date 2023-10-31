#include <ClapTrap.hpp>

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
	std::cout << "Name constructor called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called." << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor called." << std::endl;

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