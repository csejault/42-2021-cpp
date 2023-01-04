
//The codes for foreground and background colours are:
//
//         foreground background
//black        30         40
//red          31         41
//green        32         42
//yellow       33         43
//blue         34         44
//magenta      35         45
//cyan         36         46
//white        37         47

#ifndef FIXED_HPP
# define FIXED_HPP

# ifndef COL_GREEN
#  define COL_GREEN 		"\033[0;32m"
# endif
# ifndef COL_RED
#  define COL_RED			"\033[0;31m"
# endif
# ifndef COL_YELLOW
#  define COL_YELLOW		"\033[0;33m"
# endif
# ifndef COL_NORMAL
#  define COL_NORMAL		"\033[0m"
# endif

# include <iostream>
# include <cmath>

class	Fixed {

	public:
		Fixed( void );
		Fixed( const int to_convert );
		Fixed( const float to_convert );
		Fixed( Fixed const & src );
		~Fixed( void );

		//Class speach level
		static bool				get_verbose( void );
		static void				set_verbose( bool status );
		
		// Return min or max ref
		static Fixed &			min(Fixed & val1, Fixed & val2);
		static const Fixed &	min(const Fixed & val1, const Fixed & val2);
		static Fixed &			max(Fixed & val1, Fixed & val2);
		static const Fixed &	max(const Fixed & val1, const Fixed & val2);

		//assign
		Fixed &					operator=( Fixed const & rhs );

		//Compare
		bool					operator>( Fixed const & rhs ) const;
		bool					operator<( Fixed const & rhs ) const;
		bool					operator>=( Fixed const & rhs ) const;
		bool					operator<=( Fixed const & rhs ) const;
		bool					operator==( Fixed const & rhs ) const;
		bool					operator!=( Fixed const & rhs ) const;

		//arithmetics
		Fixed					operator+( Fixed const & rhs ) const;
		Fixed 					operator-( Fixed const & rhs ) const;
		Fixed 					operator*( Fixed const & rhs ) const;
		Fixed 					operator/( Fixed const & rhs ) const;

		//increment
		Fixed 					&operator--( void );
		Fixed 					&operator++( void );
		Fixed 					operator--( int );
		Fixed 					operator++( int );

		//member fct
		int 					getRawBits( void ) const;
		void					setRawBits( int const raw );
		float					toFloat(void) const;
		int						toInt(void) const;

	private:
		static bool				_verbose;

		static const int		_shift;
		int						_RawBits;
};
 
std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
//grande valeur.
