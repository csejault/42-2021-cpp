/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/27 19:21:18 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Span

//define{
#ifndef SPAN_HPP
# define SPAN_HPP

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
# include <vector>
# include <utility>
# include <cstdlib>
#include <limits>
//define - END}
using std::vector;

class	Span {

	public:
		//pub_constructor{
		Span(unsigned int n_max);
		Span( Span const & src );
		~Span( void );
		//pub_constructor - END}

		//pub_operator{
		Span &	operator=( Span const & rhs );
		//pub_operator - END}

		//pub_debug{
		static bool	get_verbose( void );
		static void	set_verbose( bool status );
		//pub_debug - END}

		//pub_static{
		static int 	generate_random( void );
		//pub_static - END}

		//pub_getter{
		//pub_getter - END}

		//pub_setter{
		//pub_setter - END}
		
		//pub_exception{
		class OverSizedException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class PqFullException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class NotEnoughNbException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		//pub_exception - END}

		//pub_fct{
		void	addNumber(int to_add);
		void	FillSpan(const vector<int>::iterator &it1, const vector<int>::iterator &it2 );
		long	shortestSpan(void);
		long	longestSpan(void);
		void	printPQ(void) const;
		//pub_fct - END}

		//pub_var{
		//pub_var - END}

	private:
		//priv_debug{
		static bool	_verbose;
		//priv_debug - END}
		
		//priv_constructor{
		Span( void );
		//priv_constructor - END}

		//priv_static{
		//priv_static - END}

		//priv_var{
		unsigned int	_n_max;
		//priority_queue<int> _pq;
		vector<int> _v;
		//priv_var - END}
};

//out_class{
	//std::ostream &	operator<<(std::ostream &os, Span &to_print);
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
