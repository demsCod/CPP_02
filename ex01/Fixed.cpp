#include "Fixed.hpp"


Fixed::Fixed() : _num(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {

	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

Fixed :: Fixed(const int inTnum) {
	std::cout << "Int constructor called" << std::endl;
	_num = inTnum * (1 << bits);
}


Fixed::Fixed(const float floatnum){
	std::cout << "float constructor called" << std::endl;
	 _num =  roundf(floatnum * (1 << bits));
}


int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _num;
}


void Fixed::setRawBits(int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_num = raw;
}

Fixed& Fixed :: operator=(const Fixed& src)
{
	if (this != &src){
		std::cout << "Copy assignment operator called" << std::endl;
		_num = src.getRawBits();
	}
	return *this;
}


 float Fixed::toFloat( void ) const
 {
	 return static_cast<float> (_num)  / (1 << bits);
 }

 int Fixed::toInt( void ) const
 {
	return _num >> bits;
 }