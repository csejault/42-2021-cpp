/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/04 17:56:54 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

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
# include "ICharacter.hpp"

class ICharacter;

class	AMateria {

	public:
		AMateria( void );
		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		AMateria &	operator=( AMateria const & rhs );
		virtual ~AMateria( void );

		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		std::string const &	getType() const;

		virtual AMateria* clone() const = 0;

		virtual void		use(ICharacter& target);

	protected:
		std::string	_type;

	private:
		static bool _verbose;


};

#endif

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
