/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 12:55:33 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Intern

#include "Intern.hpp"

//debug{
//priv_debug{
bool	Intern::_verbose = true;
//priv_debug - END}

//pub_debug{
void	Intern::set_verbose( bool status ) {
	if (Intern::_verbose) std::cout << COL_YELLOW << "[Intern] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	Intern::_verbose = status;
}

bool	Intern::get_verbose( void ) {
	if (Intern::_verbose) std::cout << COL_YELLOW << "[Intern] - Get _verbose" << COL_NORMAL <<std::endl;
	return (Intern::_verbose);
}
//pub_debug - END}
//debug - END}


//pub_constructor{

Intern::~Intern( void ) {
	if (Intern::_verbose) std::cout << COL_YELLOW << "[Intern] - Destructor called" << COL_NORMAL <<std::endl;
}

Intern::Intern( Intern const & src ) {
	if (Intern::_verbose)std::cout << COL_YELLOW << "[Intern] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}
//pub_constructor - END}


//pub_operator{
Intern &	Intern::operator=( Intern const & rhs ) {
	if (Intern::_verbose) std::cout << COL_YELLOW << "[Intern] - Assignation operator called" << COL_NORMAL <<std::endl;
	(void)rhs;
	return *this;
}
//pub_operator - END}


//pub_static{

//pub_static - END}


//pub_getter{

//pub_getter - END}


//pub_setter{

//pub_setter - END}


//pub_exception{
const char *	Intern::UnknownFormException::what() const throw() {
	return ("Can't create form : Form Unknown");
}

//pub_exception - END}


//pub_fct{
AForm *	Intern::makeForm(std::string FormName, std::string target) const {

	std::string FormNames[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	AForm * (*fct[3])(std::string target) = {
		ShrubberyCreationForm::create,
		RobotomyRequestForm::create,
		PresidentialPardonForm::create
	};

	AForm *ret = NULL;
	int i = 0;
	while (i < 3)
	{
		if (!FormName.compare(FormNames[i]))
		{
			ret = fct[i](target);
			std::cout << "Intern create form : " << FormNames[i] << std::endl;
			break;
		}
		i++;
	}
	if (i >= 3)
		throw(Intern::UnknownFormException());
	return (ret);
}

//pub_fct - END}


//pub_var{

//pub_var - END}


//priv_constructor{
Intern::Intern( void ) {
	if (Intern::_verbose) std::cout << COL_YELLOW << "[Intern] - Default constructor called" << COL_NORMAL <<std::endl;
}

//priv_constructor - END}


//priv_static{

//priv_static - END}


//priv_var{

//priv_var - END}
