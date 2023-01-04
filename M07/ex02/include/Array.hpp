/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:50:03 by csejault          #+#    #+#             */
/*   Updated: 2022/01/25 14:33:25 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Array

//define{
#ifndef ARRAY_HPP
# define ARRAY_HPP

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


template<typename T>
class	Array {

	private:
		//priv_debug{
		//priv_debug - END}

		//priv_constructor{
		//priv_constructor - END}

		//priv_static{
		//priv_static - END}

		//priv_var{
		int _lenght;
		T *	_array;
		//priv_var - END}

	public:

		//pub_operator{
		T & operator[]( int i) {
			if (!this->_array || i + 1 > _lenght || i < 0)
				throw (Array<T>::OutOfBoundsException());
			return (_array[i]);
		}

		Array<T> &	operator=( Array<T> const & rhs ) {
			if ( this != &rhs )
			{
				_lenght = rhs.get_lenght();
				int i = 0;
				if (this->_array)
				{
					delete []_array;
					this->_array = NULL;
				}
				this->_array = new T[_lenght];
				while ( i < _lenght)
				{
					this->_array[i] = rhs.get_array_id(i);
					i++;
				}
			}
			return *this;
		}
		//pub_operator - END}
		//
		//pub_constructor{
		Array( void ) {
			_array = NULL;
			_array = new T[1];
			_array[0] = 0;
			_lenght = 0;
		}

		Array( unsigned int n ) {
			_array = NULL;
			if (n)
				_array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				_array[i] = 0;
			_lenght = n;
		}

		Array( Array<T> const & src ) {
			_array = NULL;
			*this = src;
		}

		~Array( void ) {
			delete []_array;
		}
		//pub_constructor - END}

		//pub_debug{
		//pub_debug - END}

		//pub_static{
		//pub_static - END}

		//pub_getter{
		size_t	get_lenght( void ) const {
			return (_lenght);
		}

		T get_array_id( int id ) const {
			if (!this->_array || id + 1 > _lenght || id < 0)
				throw (Array<T>::OutOfBoundsException());
			return (_array[id]);
		}
		//pub_getter - END}

		//pub_setter{
		//pub_setter - END}

		//pub_exception{
		class OutOfBoundsException : public std::exception{
			public:
				virtual const char * what() const throw() {
					return ("Index out of bound");
				}
		};
		//pub_exception - END}

		//pub_fct{

		//pub_fct - END}

		//pub_var{
		//pub_var - END}
};

//out_class{
//std::ostream &	operator<<(std::ostream &os, Array &to_print);
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
