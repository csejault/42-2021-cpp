
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

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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

class	ClapTrap {

	public:
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		ClapTrap &	operator=( ClapTrap const & rhs );
		~ClapTrap( void );
		static bool	get_verbose( void );
		static void	set_verbose( bool status );

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	get_Name( void ) const;
		void		set_Name( std::string name );
		int			get_HitPt( void ) const;
		void		set_HitPt( int hit );
		int			get_NrjPt( void ) const;
		void		set_NrjPt( int nrj );
		int			get_AttackPt( void ) const;
		void		set_AttackPt( int attack );

	private:
		ClapTrap( void );

		static bool _verbose;

		std::string	_Name;
		int			_HitPt;
		int			_NrjPt;
		int			_AttackPt;

};

#endif
