/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 14:58:20 by csejault          #+#    #+#             */
/*   Updated: 2022/01/03 10:31:13 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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
# include "Brain.hpp"

class	Animal {

	public:
		Animal( void );
		Animal( Animal const & src );
		Animal &	operator=( Animal const & rhs );
		virtual ~Animal( void );

		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		std::string	getType( void ) const;
		void	getType( std::string NewType);

		virtual void	makeSound( void ) const;

	protected:
		std::string	type;

	private:
		static bool _verbose;

};

#endif
