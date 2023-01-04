/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 11:56:55 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Intern

#ifndef INTERN_HPP
# define INTERN_HPP

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
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


class	Intern {

	public:
		//pub_constructor{
		Intern( void );
		Intern( Intern const & src );
		~Intern( void );
		//pub_constructor - END}


		//pub_operator{
		Intern &	operator=( Intern const & rhs );
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


		//pub_exception{
		class UnknownFormException : public std::exception
	{
		public:
			const char *what() const throw();
	};

		//pub_exception - END}


		//pub_fct{
		AForm *	makeForm(std::string FormName, std::string target) const;
		//pub_fct - END}


		//pub_var{

		//pub_var - END}

	private:
		//priv_debug{
		static bool	_verbose;
		//priv_debug - END}


		//priv_constructor{

		//priv_constructor - END}


		//priv_static{

		//priv_static - END}


		//priv_var{

		//priv_var - END}

};

//out_class{

//out_class - END}

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
