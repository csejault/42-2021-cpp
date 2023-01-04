/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/21 12:32:42 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Data

#include "Data.hpp"

//debug{
//priv_debug{
bool	Data::_verbose = true;
//priv_debug - END}

//pub_debug{
void	Data::set_verbose( bool status ) {
	if (Data::_verbose) std::cout << COL_YELLOW << "[Data] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	Data::_verbose = status;
}
bool	Data::get_verbose( void ) {
	if (Data::_verbose) std::cout << COL_YELLOW << "[Data] - Get _verbose" << COL_NORMAL <<std::endl;
	return (Data::_verbose);
}
//pub_debug - END}
//debug - END}

//pub_constructor{

Data::Data( std::string message ) : _message(message) {
	if (Data::_verbose)std::cout << COL_YELLOW << "[Data] - constructor called" << COL_NORMAL <<std::endl;

}

Data::~Data( void ) {
	if (Data::_verbose) std::cout << COL_YELLOW << "[Data] - Destructor called" << COL_NORMAL <<std::endl;
}

Data::Data( Data const & src ) {
	if (Data::_verbose)std::cout << COL_YELLOW << "[Data] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}
//pub_constructor - END}

//pub_operator{
Data &	Data::operator=( Data const & rhs ) {
	if (Data::_verbose) std::cout << COL_YELLOW << "[Data] - Assignation operator called" << COL_NORMAL <<std::endl;
	if ( this != &rhs )
	{
		this->_message = rhs.get_message();
	}
	return *this;
}
//pub_operator - END}

//pub_static{
//pub_static - END}

//pub_getter{
std::string Data::get_message( void ) const {
	return (_message);
}
//pub_getter - END}

//pub_setter{
//pub_setter - END}

//pub_exception{
//pub_exception - END}

//pub_fct{
//pub_fct - END}

//pub_var{
//pub_var - END}

//priv_constructor{
Data::Data( void ) {
}
//priv_constructor - END}

//priv_static{
//priv_static - END}

//priv_var{
//priv_var - END}

//out_class{
//out_class - END}
