#include "Fixed.hpp"

bool		Fixed::_verbose = true;
const int	Fixed::_shift = 8;

Fixed::Fixed( void ) : _RawBits(0) {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "[Fixed] - Default constructor called" << COL_NORMAL <<std::endl;

	return;
}

Fixed::Fixed( const int to_convert ) {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "[Fixed] - Int constructor called" << COL_NORMAL <<std::endl;

	this->_RawBits = (to_convert << _shift);
	return;
}

Fixed::Fixed( const float to_convert ) {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "[Fixed] - Float constructor called" << COL_NORMAL <<std::endl;

	this->_RawBits = (int)roundf(to_convert * (1 << this->_shift));
	return;
}

Fixed::Fixed( Fixed const & src ) {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "[Fixed] - Copy constructor called" << COL_NORMAL <<std::endl;

	*this = src;
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "[Fixed] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		this->_RawBits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "[Fixed] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

void	Fixed::set_verbose( bool status ) {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "[Fixed] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	Fixed::_verbose = status;
	return;
}

bool	Fixed::get_verbose( void ) {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "[Fixed] - Get _verbose" << COL_NORMAL <<std::endl;

	return (Fixed::_verbose);
}

int 	Fixed::getRawBits(void) const {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "[Fixed] - getRawBits member function called" << COL_NORMAL <<std::endl;

	return (this->_RawBits);
}

void 	Fixed::setRawBits(int const raw) {
	if (Fixed::_verbose)
		std::cout << COL_YELLOW << "getRawBits member function called" << COL_NORMAL <<std::endl;

	this->_RawBits = raw;
	return;
}


float	Fixed::toFloat(void) const {
//	if (Fixed::_verbose)
//		std::cout << COL_YELLOW << "toFloat member function called" << COL_NORMAL <<std::endl;

	return (float)this->_RawBits / (1 << this->_shift);
}

int		Fixed::toInt(void) const {
//	if (Fixed::_verbose)
//		std::cout << COL_YELLOW << "toInt member function called" << COL_NORMAL <<std::endl;

	return (this->_RawBits >> _shift);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs) {

	o << rhs.toFloat();
	return o;
}
