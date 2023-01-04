/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 13:41:40 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

bool	Form::_verbose = true;
//Class_Name = Form


Form::Form(std::string name, int signGrade, int execGrad) : _name(name), _sign(false), _reqForSign(signGrade) ,_reqForExec(execGrad) {
	if (Form::_verbose) std::cout << COL_YELLOW << "[Form] - Default constructor called" << COL_NORMAL <<std::endl;
	if (_reqForSign > 150 || _reqForExec > 150)
		throw(Form::GradeTooLowException());
	if (_reqForSign < 1 || _reqForExec < 1)
		throw(Form::GradeTooHighException());
}

Form::~Form( void ) {
	if (Form::_verbose) std::cout << COL_YELLOW << "[Form] - Destructor called" << COL_NORMAL <<std::endl;
}

Form::Form( Form const & src ) {
	if (Form::_verbose)std::cout << COL_YELLOW << "[Form] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

Form &	Form::operator=( Form const & rhs ) {
	if (Form::_verbose) std::cout << COL_YELLOW << "[Form] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
	{
		_sign = rhs.get_sign();
		_reqForSign = rhs.get_reqForSign();
		_reqForExec = rhs.get_reqForExec();
	}
	return *this;
}

void	Form::set_verbose( bool status ) {
	if (Form::_verbose) std::cout << COL_YELLOW << "[Form] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	Form::_verbose = status;
}

bool	Form::get_verbose( void ) {
	if (Form::_verbose) std::cout << COL_YELLOW << "[Form] - Get _verbose" << COL_NORMAL <<std::endl;
	return (Form::_verbose);
}

Form::Form( void ) {
}

std::ostream & operator<<(std::ostream &os, const Form & to_print){
	os <<	"Form : " << to_print.get_name() <<
		", grade request for sign : " << to_print.get_reqForSign() <<
		", Grade request for exec : " << to_print.get_reqForExec();
	if	(to_print.get_sign())
		os << ", " << COL_GREEN << "Signed!" << COL_NORMAL;
	else
		os << ", " << COL_RED << "Unsigned!" << COL_NORMAL;
	return (os);
}

std::string	Form::get_name( void ) const {
	return (_name);
}

bool		Form::get_sign( void ) const {
	return (_sign);
}

int			Form::get_reqForExec( void ) const {
	return(_reqForExec);
}

int			Form::get_reqForSign( void ) const {
	return(_reqForSign);
}

const char * Form::GradeTooHighException::what() const throw() {
	return ("Grade is too High");
}

const char * Form::GradeTooLowException::what() const throw() {
	return ("Grade is too Low");
}

const char * Form::FormAlreadySignedException::what() const throw() {
	return ("Form is already signed");
}

void		Form::beSigned(Bureaucrat & b) {
	if (_sign)
		throw(Form::FormAlreadySignedException());
	else if (b.getGrade() >_reqForSign)
		throw(Form::GradeTooLowException());
	else
		_sign = true;
}
