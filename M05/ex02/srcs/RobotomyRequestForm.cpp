/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 10:24:18 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = RobotomyRequestForm

#include "RobotomyRequestForm.hpp"

//debug{
//priv_debug{
bool	RobotomyRequestForm::_verbose = true;
//priv_debug - END}

//pub_debug{
void	RobotomyRequestForm::set_verbose( bool status ) {
	if (RobotomyRequestForm::_verbose) std::cout << COL_YELLOW << "[RobotomyRequestForm] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	RobotomyRequestForm::_verbose = status;
}

bool	RobotomyRequestForm::get_verbose( void ) {
	if (RobotomyRequestForm::_verbose) std::cout << COL_YELLOW << "[RobotomyRequestForm] - Get _verbose" << COL_NORMAL <<std::endl;
	return (RobotomyRequestForm::_verbose);
}
//pub_debug - END}
//debug - END}


//pub_constructor{
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", target, 72, 45) {
	if (RobotomyRequestForm::_verbose) std::cout << COL_YELLOW << "[RobotomyRequestForm] - Default constructor called" << COL_NORMAL <<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	if (RobotomyRequestForm::_verbose) std::cout << COL_YELLOW << "[RobotomyRequestForm] - Destructor called" << COL_NORMAL <<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : AForm(src) {
	if (RobotomyRequestForm::_verbose)std::cout << COL_YELLOW << "[RobotomyRequestForm] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

//pub_constructor - END}


//pub_operator{
RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	if (RobotomyRequestForm::_verbose) std::cout << COL_YELLOW << "[RobotomyRequestForm] - Assignation operator called" << COL_NORMAL <<std::endl;

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
RobotomyRequestForm::RobotomyRequestForm( void ) {
}
//priv_constructor - END}


//pub_fct{

void RobotomyRequestForm::job( void ) const {
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << "Bzzzz...Bzzzzz.BBZZZZZZZZZZZZZZZZZ...SHRRRKIKKIIRRRRRRKKKKK " << std::endl;
		std::cout << get_target() << " has been robotomised!"<< std::endl;
	}
	else
		std::cout << get_target() << " has NOT been robotomised!"<< std::endl;

}
//pub_fct - END}
