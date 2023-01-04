/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 13:40:02 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

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
# include "Bureaucrat.hpp"

class	Bureaucrat;
class	Form {

	public:
		//Class
		Form(std::string name, int signGrade, int execGrad);
		Form( Form const & src );
		Form &	operator=( Form const & rhs );
		~Form( void );
		static bool	get_verbose( void );
		static void	set_verbose( bool status );

		//Getter
		std::string	get_name( void ) const;
		bool		get_sign( void ) const;
		int			get_reqForExec( void ) const;
		int			get_reqForSign( void ) const;

		//Fct
		void		beSigned(Bureaucrat & b);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class FormAlreadySignedException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

	private:
		//Class
		Form( void );
		static bool _verbose;

		//Var
		const std::string	_name;
		bool		_sign;
		int			_reqForSign;
		int			_reqForExec;

};

std::ostream &operator<<(std::ostream &os, const Form & to_print);

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
