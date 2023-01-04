/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/27 19:25:57 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = Span

#include "Span.hpp"

using	std::cout;
using	std::endl;

//debug{
//priv_debug{
bool	Span::_verbose = true;
//priv_debug - END}

//pub_debug{
void	Span::set_verbose( bool status ) {
	if (Span::_verbose) std::cout << COL_YELLOW << "[Span] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	Span::_verbose = status;
}
bool	Span::get_verbose( void ) {
	if (Span::_verbose) std::cout << COL_YELLOW << "[Span] - Get _verbose" << COL_NORMAL <<std::endl;
	return (Span::_verbose);
}
//pub_debug - END}
//debug - END}

//pub_constructor{
Span::Span( unsigned int n_max ) : _n_max(n_max), _v(0,0) {
	if (Span::_verbose) std::cout << COL_YELLOW << "[Span] - Uint constructor called" << COL_NORMAL <<std::endl;
}

Span::~Span( void ) {
	if (Span::_verbose) std::cout << COL_YELLOW << "[Span] - Destructor called" << COL_NORMAL <<std::endl;
}

Span::Span( Span const & src ) {
	if (Span::_verbose)std::cout << COL_YELLOW << "[Span] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}
//pub_constructor - END}

//pub_operator{
Span &	Span::operator=( Span const & rhs ) {
	if (Span::_verbose) std::cout << COL_YELLOW << "[Span] - Assignation operator called" << COL_NORMAL <<std::endl;
	if ( this != &rhs )
	{
		this->_n_max = rhs._n_max;
		this->_v = rhs._v;
	}
	return *this;
}
//pub_operator - END}

//pub_static{
int Span::generate_random( void )
{
	int ret = 0;
	ret = rand() % std::numeric_limits<int>::max();
	if (rand() % 2)
		ret = -ret;
	return (ret);
}
//pub_static - END}

//pub_getter{
//pub_getter - END}

//pub_setter{
//pub_setter - END}

//pub_exception{
const char * Span::PqFullException::what() const throw(){
	return ("Max Number added reached : Can't add more.");
}

const char * Span::OverSizedException::what() const throw(){
	return ("Impossible to fill, not enough space");
}

const char * Span::NotEnoughNbException::what() const throw(){
	return ("Can't find span : Not enough numbers");
}
//pub_exception - END}

//pub_fct{
void	Span::addNumber(int to_add) {
	if (Span::_verbose) std::cout << COL_YELLOW << "[Span] - Add " << _v.size() << " Number : " << to_add << COL_NORMAL <<std::endl;

	if (_v.size() >= _n_max)
		throw (Span::PqFullException());
	_v.push_back(to_add);
}

void	Span::FillSpan(const vector<int>::iterator &it1, const vector<int>::iterator &it2 ) {
	if (Span::_verbose) std::cout << COL_YELLOW << "[Span] - FillSpan" << " Number" << COL_NORMAL <<std::endl;
	int dist = std::distance(it1, it2);
	if (dist + _v.size() > _n_max)
		throw (Span::OverSizedException());
	_v.insert(_v.end(), dist, Span::generate_random());
}

void	Span::printPQ(void) const {
	int i = 0;
	vector<int>::const_iterator it = _v.begin();

	while (it != _v.end())
	{
		cout << "pos : " << i << " = " << *it << endl;
		i++;
		it++;
	}
}

long	Span::longestSpan(void) {
	long long_span = 0;
	if (_v.size() < 2)
		throw(Span::NotEnoughNbException());
	vector<int>::iterator it = _v.begin();
	long first = static_cast<long>(*it);
	it++;
	long second = static_cast<long>(*it);
	it++;
	long_span = labs(first - second);
	while (it != _v.end())
	{
		first = second;
		second = *it;
		if (long_span < labs(first - second))
			long_span = labs(first - second);
		it++;
	}
	return (long_span);
}

long	Span::shortestSpan(void) {
	long short_span = 0;
	if (_v.size() < 2)
		throw(Span::NotEnoughNbException());
	vector<int>::iterator it = _v.begin();
	long first = static_cast<long>(*it);
	it++;
	long second = static_cast<long>(*it);
	it++;
	short_span = labs(first - second);
	while (it != _v.end())
	{
		first = second;
		second = *it;
		if (short_span > labs(first - second))
			short_span = labs(first - second);
		it++;
	}
	return (short_span);
}
//pub_fct - END}

//pub_var{
//pub_var - END}

//priv_constructor{
Span::Span( void ) {
}
//priv_constructor - END}

//priv_static{
//priv_static - END}

//priv_var{
//priv_var - END}

//out_class{
//out_class - END}
