/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 10:01:53 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = PresidentialPardonForm

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

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
# include <sstream>
# include <fstream>
# include "AForm.hpp"

class	PresidentialPardonForm : public AForm{

	public:
		//pub_constructor{
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm( void );
		//pub_constructor - END}


		//pub_operator{
		PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );
		//pub_operator - END}


		//pub_debug{
		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		//pub_debug - END}


		//pub_static{

		//pub_static - END}


		//pub_getter{

		//pub_getter - END}


		//pub_setter{

		//pub_setter - END}


		//pub_fct{
		void job( void ) const;

		//pub_fct - END}

	private:
		//priv_debug{
		static bool	_verbose;
		//priv_debug - END}


		//priv_constructor{
		PresidentialPardonForm( void );

		//priv_constructor - END}


		//priv_static{

		//priv_static - END}

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
