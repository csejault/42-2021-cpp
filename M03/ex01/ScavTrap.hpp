
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

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		ScavTrap &	operator=( ScavTrap const & rhs );
		~ScavTrap( void );
		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		void		attack(std::string const & target);
		void		guardGate(void);
		bool		get_GuardKeeperMode( void ) const;

	private:
		static bool _verbose;
		bool		_GuardKeeperMode;

};

#endif
