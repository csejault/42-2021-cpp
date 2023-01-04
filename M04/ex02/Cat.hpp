
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

#ifndef CAT_HPP
# define CAT_HPP

# ifndef COL_GREEN
#  define COL_GREEN 		"\033[0;32m"
# endif
# ifndef COL_RED
#  define COL_RED		"\033[0;31m"
# endif
# ifndef COL_YELLOW
#  define COL_YELLOW		"\033[0;33m"
# endif
# ifndef COL_NORMAL
#  define COL_NORMAL		"\033[0m"
# endif

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal {

	public:
		Cat( void );
		Cat( Cat const & src );
		Cat &	operator=( Cat const & rhs );
		~Cat( void );
		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		virtual void	makeSound( void ) const;
		Brain *	GetBrain( void ) const;

	private:
		static bool _verbose;

		class Brain		*Brain;

};

#endif
