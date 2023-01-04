/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/21 11:16:17 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Convertor

//define{
#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

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
# include <limits>
# include <cstdlib>
# include <iomanip>
//define - END}

class	Convertor
{

	public:
		//pub_constructor{
		Convertor( std::string valor );
		Convertor( Convertor const & src );
		~Convertor( void );
		//pub_constructor - END}

		//pub_operator{
		Convertor &	operator=( Convertor const & rhs );
		//pub_operator - END}

		//pub_debug{
		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		//pub_debug - END}

		//pub_static{
		//pub_static - END}

		//pub_getter{
		std::string	get_to_conv( void ) const;
		float		get_value( void ) const;
		//pub_getter - END}

		//pub_setter{
		//pub_setter - END}

		//pub_exception{
		class IncorectFormatException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class NonDisplayableException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class ImpossibleException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		//pub_exception - END}

		//pub_fct{
		char	to_char( void );
		int		to_int( void );
		float	to_float( void );
		double	to_double( void );
		void	print_conv( void );
		//pub_fct - END}

		//pub_var{
		//pub_var - END}

	private:
		//priv_debug{
		static bool	_verbose;
		//priv_debug - END}

		//priv_constructor{
		Convertor( void );
		//priv_constructor - END}

		//priv_static{
		static std::string	_pseudo_literals[6];
		//priv_static - END}

		//priv_va
		std::string	_to_conv;
		int			_literal;
		double		_value;
		bool		_impossible;
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
