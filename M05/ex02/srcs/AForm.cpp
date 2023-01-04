/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/12 15:19:54 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//Class_Name = AForm

//debug{
//priv_debug{
bool	AForm::_verbose = true;
//priv_debug - END}

//pub_debug{
void	AForm::set_verbose( bool status ) {
	if (AForm::_verbose) std::cout << COL_YELLOW << "[AForm] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	AForm::_verbose = status;
}

bool	AForm::get_verbose( void ) {
	if (AForm::_verbose) std::cout << COL_YELLOW << "[AForm] - Get _verbose" << COL_NORMAL <<std::endl;
	return (AForm::_verbose);
}
//pub_debug - END}
//debug - END}


//pub_constructor{
AForm::AForm( void ) {
}

AForm::AForm(std::string name, std::string target, int signGrade, int execGrad) : _name(name), _target(target), _sign(false), _reqForSign(signGrade) ,_reqForExec(execGrad) {
	if (AForm::_verbose) std::cout << COL_YELLOW << "[AForm] - Default constructor called" << COL_NORMAL <<std::endl;
	if (_reqForSign > 150 || _reqForExec > 150)
		throw(AForm::GradeTooLowException());
	if (_reqForSign < 1 || _reqForExec < 1)
		throw(AForm::GradeTooHighException());
}

AForm::~AForm( void ) {
	if (AForm::_verbose) std::cout << COL_YELLOW << "[AForm] - Destructor called" << COL_NORMAL <<std::endl;
}

AForm::AForm( AForm const & src ) {
	if (AForm::_verbose)std::cout << COL_YELLOW << "[AForm] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

AForm &	AForm::operator=( AForm const & rhs ) {
	if (AForm::_verbose) std::cout << COL_YELLOW << "[AForm] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
	{
		_name = rhs.get_name();
		_target = rhs.get_target();
		_sign = rhs.get_sign();
		//_executed = rhs.get_executed();
		_reqForSign = rhs.get_reqForSign();
		_reqForExec = rhs.get_reqForExec();
	}
	return *this;
}
//pub_constructor - END}


//pub_getter{
std::string	AForm::get_name( void ) const {
	return (_name);
}

bool		AForm::get_sign( void ) const {
	return (_sign);
}

//bool		AForm::get_executed( void ) const {
//	return (_executed);
//}

int			AForm::get_reqForExec( void ) const {
	return(_reqForExec);
}

int			AForm::get_reqForSign( void ) const {
	return(_reqForSign);
}

std::string	AForm::get_target( void ) const {
	return(_target);
}

//pub_getter - END}


//pub_setter{

//pub_setter - END}


//priv_constructor{
//priv_constructor - END}


//pub_operator{

//pub_operator - END}


//pub_exception{
const char * AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too High");
}

const char * AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too Low");
}

const char * AForm::FormAlreadySignedException::what() const throw() {
	return ("Form is already signed");
}

const char * AForm::FormNotSignedException::what() const throw() {
	return ("Form is not signed");
}

const char * AForm::FormAlreadyExecutedException::what() const throw() {
	return ("Form is already executed");
}
//pub_exception - END}


//pub_fct{
void		AForm::checkGradeToLow( int to_check, int gradeMin ) const {
	if (to_check > gradeMin)
		throw(AForm::GradeTooLowException());
}

void		AForm::checkAlreadySign( void ) const {
	if (_sign)
		throw(AForm::FormAlreadySignedException());
}

void		AForm::checkNotSign( void ) const {
	if (!_sign)
		throw(AForm::FormNotSignedException());
}

//void		AForm::checkAlreadyExecuted( void ) const {
//	if (_executed)
//		throw(AForm::FormAlreadyExecutedException());
//}

void		AForm::beSigned(Bureaucrat & b) {
	checkAlreadySign();
	checkGradeToLow(b.getGrade(), _reqForSign);
	_sign = true;
}

void		AForm::execute(Bureaucrat const & executor) const {
	checkNotSign();
	checkGradeToLow(executor.getGrade(), _reqForExec);
	job();

}
//pub_fct - END}


//out_class{
std::ostream & operator<<(std::ostream &os, const AForm & to_print){
	os <<	"Form : " << to_print.get_name() <<
		", grade request for sign : " << to_print.get_reqForSign() <<
		", Grade request for exec : " << to_print.get_reqForExec();
	if	(to_print.get_sign())
		os << ", " << COL_GREEN << "Signed!" << COL_NORMAL;
	else
		os << ", " << COL_RED << "Unsigned!" << COL_NORMAL;
	return (os);
}
//out_class - END}
