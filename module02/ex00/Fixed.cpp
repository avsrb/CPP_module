#include "Fixed.hpp"

const int	Fixed::m_eight = 8;

Fixed::Fixed() : m_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	m_value = fixed.getRawBits();
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (m_value);
}
void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	m_value = raw;
}

Fixed&	Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	m_value = fixed.getRawBits();
	return (*this);
}

