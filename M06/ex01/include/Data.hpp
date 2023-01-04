/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/21 12:32:34 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Data

//define{
#ifndef DATA_HPP
# define DATA_HPP

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
//define - END}

class	Data {

	public:
		//pub_constructor{
		Data( std::string message);
		Data( Data const & src );
		~Data( void );
		//pub_constructor - END}

		//pub_operator{
		Data &	operator=( Data const & rhs );
		//pub_operator - END}

		//pub_debug{
		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		//pub_debug - END}

		//pub_static{
		//pub_static - END}

		//pub_getter{
		std::string get_message( void ) const;
		//pub_getter - END}

		//pub_setter{
		//pub_setter - END}

		//pub_exception{
		//pub_exception - END}

		//pub_fct{
		//pub_fct - END}

		//pub_var{
		//pub_var - END}

	private:
		//priv_debug{
		static bool	_verbose;
		//priv_debug - END}

		//priv_constructor{
		Data( void );
		//priv_constructor - END}

		//priv_static{
		//priv_static - END}

		//priv_var{
		std::string _message;
		//priv_var - END}
};

//out_class{
//std::ostream &	operator<<(std::ostream &os, Data &to_print);
//out_class - END}

#endif

//Color{
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
//Color - END}

