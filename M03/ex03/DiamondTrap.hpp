
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

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

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
# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class	DiamondTrap : public FlagTrap, public ScavTrap {

	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap &	operator=( DiamondTrap const & rhs );
		~DiamondTrap( void );
		static bool	get_verbose( void );
		static void	set_verbose( bool status );

		std::string	getName( void ) const;
		int			getHitPt( void ) const;
		int			getNrjPt( void ) const;
		int			getAttackPt( void ) const;
		void		set_Name( std::string name );
		void		set_HitPt( int hit );
		void		set_NrjPt( int nrj );
		void		set_AttackPt( int attack );

		void		attack(std::string const & target);
		void		whoAmI( void );

	private:
		static bool _verbose;

		std::string	Name;
};

#endif
