
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
	private :
		int _num;
		static const int bits = 8;

	public :
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int inTnum);
		Fixed(const float floatnum);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed& operator=(const Fixed& src);
		float toFloat( void ) const;
		 int toInt( void ) const;
		~Fixed();
};
std::ostream& operator<<(std::ostream& os, const Fixed& dt);

#endif