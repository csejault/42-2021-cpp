/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 10:01:43 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = PresidentialPardonForm

#include "PresidentialPardonForm.hpp"

//debug{
//priv_debug{
bool	PresidentialPardonForm::_verbose = true;
//priv_debug - END}

//pub_debug{
void	PresidentialPardonForm::set_verbose( bool status ) {
	if (PresidentialPardonForm::_verbose) std::cout << COL_YELLOW << "[PresidentialPardonForm] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	PresidentialPardonForm::_verbose = status;
}

bool	PresidentialPardonForm::get_verbose( void ) {
	if (PresidentialPardonForm::_verbose) std::cout << COL_YELLOW << "[PresidentialPardonForm] - Get _verbose" << COL_NORMAL <<std::endl;
	return (PresidentialPardonForm::_verbose);
}
//pub_debug - END}
//debug - END}


//pub_constructor{
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", target, 145, 137) {
	if (PresidentialPardonForm::_verbose) std::cout << COL_YELLOW << "[PresidentialPardonForm] - Default constructor called" << COL_NORMAL <<std::endl;

}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	if (PresidentialPardonForm::_verbose) std::cout << COL_YELLOW << "[PresidentialPardonForm] - Destructor called" << COL_NORMAL <<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : AForm(src) {
	if (PresidentialPardonForm::_verbose)std::cout << COL_YELLOW << "[PresidentialPardonForm] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

//pub_constructor - END}


//pub_operator{
PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	if (PresidentialPardonForm::_verbose) std::cout << COL_YELLOW << "[PresidentialPardonForm] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		AForm::operator=(rhs);
	return *this;
}
//pub_operator - END}


//pub_getter{

//pub_getter - END}


//pub_setter{

//pub_setter - END}


//priv_constructor{
PresidentialPardonForm::PresidentialPardonForm( void ) {
}
//priv_constructor - END}


//pub_fct{

void PresidentialPardonForm::job( void ) const {
	std::cout << get_target() << "  a été pardonnée par Zafod Beeblebrox." << std::endl;
}
//pub_fct - END}
