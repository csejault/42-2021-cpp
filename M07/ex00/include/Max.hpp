/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Max.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/21 12:19:08 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Max

//define{
#ifndef MAX_HPP
# define MAX_HPP

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

class	Max {

	public:
		//pub_constructor{
		Max( void );
		Max( Max const & src );
		~Max( void );
		//pub_constructor - END}

		//pub_operator{
		Max &	operator=( Max const & rhs );
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
		//priv_constructor - END}

		//priv_static{
		//priv_static - END}

		//priv_var{
		//priv_var - END}
};

//out_class{
	//std::ostream &	operator<<(std::ostream &os, Max &to_print);
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
