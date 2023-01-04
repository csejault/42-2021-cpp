/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/11 12:19:56 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

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
# include <ostream>
# include <exception>

class	Bureaucrat {

	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat &	operator=( Bureaucrat const & rhs );
		~Bureaucrat( void );
		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		std::string	getName( void ) const;
		int			getGrade( void ) const;
		int &		operator++( void );
		int &		operator--( void );
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

	private:
		Bureaucrat( void );

		static bool			_verbose;
		const std::string	_name;
		int					_grade;

};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & to_print);

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
