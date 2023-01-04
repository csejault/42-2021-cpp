/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/21 11:49:23 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Convertor

#include "Convertor.hpp"

//debug{
//priv_debug{
bool	Convertor::_verbose = true;
//priv_debug - END}

//pub_debug{
void	Convertor::set_verbose( bool status ) {
	if (Convertor::_verbose) std::cout << COL_YELLOW << "[Convertor] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	Convertor::_verbose = status;
}

bool	Convertor::get_verbose( void ) {
	if (Convertor::_verbose) std::cout << COL_YELLOW << "[Convertor] - Get _verbose" << COL_NORMAL <<std::endl;
	return (Convertor::_verbose);
}
//pub_debug - END}
//debug - END}


//pub_constructor{
Convertor::Convertor(std::string valor ) : _to_conv(valor), _value(0.0) {
	if (Convertor::_verbose) 
		std::cout << COL_YELLOW << "[Convertor] - Default constructor called" << COL_NORMAL <<std::endl;

	int i = -1;
	while (++i < 6)
		if (_to_conv == _pseudo_literals[i])
			break;
	if (_to_conv.find_first_of("f") + 1 == _to_conv.size() && _to_conv.find_first_not_of("+-.0123456789") + 1 == _to_conv.size())
		_impossible = false;
	else if (i == 6 && _to_conv.find_first_not_of("+-.0123456789") != std::string::npos)
		_impossible = true;
	else
		_impossible = false;

	_value = atof(_to_conv.c_str());
	_literal = i;
}

Convertor::~Convertor( void ) {
	if (Convertor::_verbose) std::cout << COL_YELLOW << "[Convertor] - Destructor called" << COL_NORMAL <<std::endl;
}

Convertor::Convertor( Convertor const & src ) {
	if (Convertor::_verbose)std::cout << COL_YELLOW << "[Convertor] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}
//pub_constructor - END}


//pub_operator{
Convertor &	Convertor::operator=( Convertor const & rhs ) {
	if (Convertor::_verbose) std::cout << COL_YELLOW << "[Convertor] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
	{
		_value = rhs.get_value();
		_to_conv = rhs.get_to_conv();
	}
	return *this;
}
//pub_operator - END}


//pub_static{

//pub_static - END}


//pub_getter{
float		Convertor::get_value( void ) const {
	return (_value);
}
std::string	Convertor::get_to_conv( void ) const {
	return (_to_conv);
}

//pub_getter - END}


//pub_setter{

//pub_setter - END}


//pub_exception{
const char * Convertor::IncorectFormatException::what() const throw() {
	return ("Incorect Format");
}
const char * Convertor::NonDisplayableException::what() const throw() {
	return("Non displayable");
}
const char * Convertor::ImpossibleException::what() const throw() {
	return ("Impossible");
}

//pub_exception - END}


//pub_fct{
char	Convertor::to_char( void ) {
	if (_impossible ||
			_literal != 6 ||
			_value < std::numeric_limits<char>::min() ||
			_value > std::numeric_limits<char>::max())
		throw (Convertor::ImpossibleException());
	if (_value < 32 || _value > 255)
		throw (Convertor::NonDisplayableException());
	return (static_cast<char>(_value));
}
int		Convertor::to_int( void ) {
	if (_impossible ||
			_literal != 6 ||
			_value < std::numeric_limits<int>::min() ||
			_value > std::numeric_limits<int>::max())
		throw (Convertor::ImpossibleException());
	return (static_cast<int>(_value));
}
float	Convertor::to_float( void ) {
	if (_literal == 6 &&
			(_impossible ||
			_value < -std::numeric_limits<float>::max() ||
			_value > std::numeric_limits<float>::max()))
		throw (Convertor::ImpossibleException());
	return (static_cast<float>(_value));
}

double	Convertor::to_double( void ) {
	if (_literal == 6 &&
			(_impossible ||
			_value < -std::numeric_limits<double>::max() ||
			_value > std::numeric_limits<double>::max()))
		throw (Convertor::ImpossibleException());
	return (static_cast<double>(_value));
}

void	Convertor::print_conv( void ) {
	char tmp;
	try{
		std::cout << "char: ";
		tmp = to_char();
		std::cout << "'" << tmp << "'" << std::endl;}
	catch (std::exception &e){std::cout << e.what() << std::endl;}

	try{std::cout << "int: " << to_int() << std::endl;}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

	try{std::cout << "float : " << std::fixed << std::setprecision(1) << to_float() << "f" << std::endl;}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

	try{std::cout << "double : " << std::fixed << std::setprecision(1) << to_double() << std::endl;}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
}

//pub_fct - END}


//pub_var{

//pub_var - END}


//priv_constructor{
Convertor::Convertor( void ) {
	if (Convertor::_verbose) std::cout << COL_YELLOW << "[Convertor] - Default constructor called" << COL_NORMAL <<std::endl;
}

//priv_constructor - END}


//priv_static{
	std::string	Convertor::_pseudo_literals[6] = {
		"-inff",
		"+inff",
		"nanf",
		"-inf",
		"+inf",
		"nan"
	};
//priv_static - END}


//priv_var{

//priv_var - END}
//
