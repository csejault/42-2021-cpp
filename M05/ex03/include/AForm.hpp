/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 12:36:12 by csejault         ###   ########.fr       */
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
class	AForm {

	public:
		//pub_constructor{
		AForm( void );
		AForm(std::string name, std::string target, int signGrade, int execGrad);
		AForm( AForm const & src );
		virtual ~AForm( void );
		//pub_constructor - END}


		//pub_operator{
		AForm &	operator=( AForm const & rhs );
		//pub_operator - END}


		//pub_debug{
		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		//pub_debug - END}

		
		//pub_static{
		
		//pub_static - END}

		
		//pub_getter{
		std::string	get_target( void ) const;
		std::string	get_name( void ) const;
		bool		get_executed( void ) const;
		bool		get_sign( void ) const;
		int			get_reqForExec( void ) const;
		int			get_reqForSign( void ) const;
		//pub_getter - END}


		//pub_setter{
		
		//pub_setter - END}


		//pub_fct{
		void			checkGradeToLow( int to_check, int gradeMin ) const;
		void			checkAlreadySign( void ) const;
		void			checkNotSign( void ) const;
		void			checkAlreadyExecuted( void ) const;
		void			beSigned(Bureaucrat & b);
		void			execute(Bureaucrat const & executor) const;
		virtual void	job( void ) const = 0;
		//pub_fct - END}


		//pub_exception{
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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class FormAlreadyExecutedException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		//pub_exception - END}

	private:
		//priv_debug{
		static bool	_verbose;
		//priv_debug - END}

		
		//priv_constructor{
		//priv_constructor - END}


		//priv_static{
		
		//priv_static - END}

		
		//priv_var{
		std::string	_name;
		std::string	_target;
		bool		_sign;
		//bool		_executed;
		int			_reqForSign;
		int			_reqForExec;
		//priv_var - END}

};

//out_class{
std::ostream &operator<<(std::ostream &os, const AForm & to_print);
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
