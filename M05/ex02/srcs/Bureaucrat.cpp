/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 10:23:11 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

bool	Bureaucrat::_verbose = true;
//Class_Name = Bureaucrat

Bureaucrat::Bureaucrat( void ) {
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {
	if (Bureaucrat::_verbose) std::cout << COL_YELLOW << "[Bureaucrat] - Int constructor called" << COL_NORMAL <<std::endl;
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat( void ) {
	if (Bureaucrat::_verbose) std::cout << COL_YELLOW << "[Bureaucrat] - Destructor called" << COL_NORMAL <<std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src.getName()) {
	if (Bureaucrat::_verbose)std::cout << COL_YELLOW << "[Bureaucrat] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {
	if (Bureaucrat::_verbose) std::cout << COL_YELLOW << "[Bureaucrat] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		_grade = rhs.getGrade();
	return *this;
}

void	Bureaucrat::set_verbose( bool status ) {
	if (Bureaucrat::_verbose) std::cout << COL_YELLOW << "[Bureaucrat] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	Bureaucrat::_verbose = status;
}

bool	Bureaucrat::get_verbose( void ) {
	if (Bureaucrat::_verbose) std::cout << COL_YELLOW << "[Bureaucrat] - Get _verbose" << COL_NORMAL <<std::endl;
	return (Bureaucrat::_verbose);
}

std::string	Bureaucrat::getName( void ) const{
	return (_name);
}

int			Bureaucrat::getGrade( void ) const{
	return (_grade);
}

int &	Bureaucrat::operator++( void ) {

	if (_grade - 1 < 1)
		throw(Bureaucrat::GradeTooHighException());

	std::cout << COL_YELLOW << "[Bureaucrat] - Increase " << _name << " from " << _grade << " to " << _grade - 1 << COL_NORMAL <<std::endl;
	_grade = _grade - 1;
	return (_grade);
}

int &	Bureaucrat::operator--( void ) {

	if (_grade + 1 > 150)
		throw(Bureaucrat::GradeTooLowException());

	std::cout << COL_YELLOW << "[Bureaucrat] - Decrease " << _name << " from " << _grade << " to " << _grade + 1 << COL_NORMAL <<std::endl;
	_grade = _grade + 1;
	return (_grade);
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too High");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too Low");
}

void	Bureaucrat::signForm(AForm &form) {
	try
	{
		form.beSigned(*this);
		std::cout << _name << " " << COL_GREEN << "signed" << COL_NORMAL << " form: " << form.get_name() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " Cannot sign form: " << form.get_name() <<
			" because : " << COL_RED << e.what() << COL_NORMAL << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) {
	try
	{
		form.execute(*this);
		std::cout << _name << COL_GREEN << " executs " << COL_NORMAL << form.get_name() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " Cannot execut form: " << form.get_name() <<
			" because : " << COL_RED << e.what() << COL_NORMAL << std::endl;
	}
}

std::ostream &	operator<<(std::ostream &os, Bureaucrat const &to_print) {
	os << to_print.getName() << ", bureaucrat grade " << to_print.getGrade() << ".";
	return (os);
}
