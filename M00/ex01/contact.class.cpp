/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:51:14 by csejault          #+#    #+#             */
/*   Updated: 2021/11/09 14:22:35 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

int	contact::new_contact(int idx, std::string fn, std::string ln, std::string nn, std::string p, std::string _s)
{
	this->_index = idx;
	this->_f_name = fn;
   	this->_l_name = ln;
   	this->_n_name = nn;
   	this->_phone = p;
   	this->_secret = _s;

	return (0);
}

void	contact::print_full(void) const
{
	std::cout << "first name : " << this->_f_name << std::endl;
	std::cout << "last name : " << this->_l_name << std::endl;
	std::cout << "nickname : " << this->_n_name << std::endl;
	std::cout << "phone number : " << this->_phone << std::endl;
	std::cout << "Darkest secret : " << this->_secret << std::endl;
	return;
}

void	contact::print_short(void) const
{
	std::string to_print;

	std::cout << std::setw(10) << this->_index << "|";
	to_print = this->_f_name;
	if (this->_f_name.length() > 10)
	{
		to_print = this->_f_name.substr(0,10);
		to_print[9] = '.';
	}
	std::cout << std::setw(10) << to_print << "|";
	to_print = this->_l_name;
	if (this->_l_name.length() > 10)
	{
		to_print = this->_l_name.substr(0,10);
		to_print[9] = '.';
	}
	std::cout << std::setw(10) << to_print << "|";
	to_print = this->_n_name;
	if (this->_n_name.length() > 10)
	{
		to_print = this->_n_name.substr(0,10);
		to_print[9] = '.';
	}
	std::cout << std::setw(10) << to_print << std::endl;
	return;
}

	contact::contact(void)
{
	return;
}

	contact::~contact(void)
{
	return;
}
