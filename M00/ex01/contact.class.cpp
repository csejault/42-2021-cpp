/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:51:14 by csejault          #+#    #+#             */
/*   Updated: 2021/11/05 16:14:46 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

int	contact::new_contact(int idx, std::string fn, std::string ln, std::string nn, std::string p, std::string _s)
{
	this->index = idx;
	this->f_name = fn;
   	this->l_name = ln;
   	this->n_name = nn;
   	this->phone = p;
   	this->_secret = _s;

	return (0);
}

void	contact::print(void)
{
	std::cout << "first name : " << this->f_name << std::endl;
	std::cout << "last name : " << this->l_name << std::endl;
	std::cout << "nickname : " << this->n_name << std::endl;
	std::cout << "phone number : " << this->phone << std::endl;
	std::cout << "Darkest secret : " << this->_secret << std::endl;

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
//std::string	contact::get_secret(void) const
//{
//	return (this->_secret);
//}
//
//int			contact::set_secret(std::string new_value)
//{
//	this->_secret = new_value;
//	return (0);
//}
