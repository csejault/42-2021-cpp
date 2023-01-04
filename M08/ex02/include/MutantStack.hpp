/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/02/02 15:09:24 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = MutantStack

//define{
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
# include <stack>

//define - END}

template <typename T>
class	MutantStack : public std::stack<T> {

	public:
		//pub_constructor{
		MutantStack( void ) : MutantStack<T>::stack() {}
		MutantStack( MutantStack const & src ) : MutantStack<T>::stack(src) {}
		~MutantStack( void ) {}
		//pub_constructor - END}

		//pub_operator{
		MutantStack<T> &	operator=( MutantStack<T> const & rhs )	{if (this != &rhs)MutantStack<T>::stack::operator=(rhs);}
		//pub_operator - END}

		//pub_debug{
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
		typename MutantStack<T>::stack::container_type::iterator begin()			{return this->stack::c.begin();}
		typename MutantStack<T>::stack::container_type::iterator end()				{return this->stack::c.end();}
		typename MutantStack<T>::stack::container_type::reverse_iterator rbegin()	{return this->stack::c.rbegin();}
		typename MutantStack<T>::stack::container_type::reverse_iterator rend()		{return this->stack::c.rend();}
		//pub_var - END}

		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
};

//out_class{
//std::ostream &	operator<<(std::ostream &os, MutantStack &to_print);
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
