/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_line.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:29:30 by csejault          #+#    #+#             */
/*   Updated: 2021/11/05 13:37:16 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_line.class.hpp"

display_line::display_line(void)
{
	return ;
}

display_line::~display_line(void)
{
	return ;
}

std::string	display_line::trunk(std::string to_trunk)
{

	to_trunk.resize(10);
	to_trunk.shrink_to_fit();
	to_trunk[9] = '.';
	return (to_trunk);
}

void	display_line::print(contact contact)
{
	this->c1 = contact.index + '0';
	if (contact.f_name.length() > 10)
		this->c2 = this->trunk(contact.f_name);
	else
		this->c2 = contact.f_name;
	if (contact.l_name.length() > 10)
		this->c3 = this->trunk(contact.l_name);
	else
		this->c3 = contact.l_name;
	if (contact.n_name.length() > 10)
		this->c4 = this->trunk(contact.n_name);
	else
		this->c4 = contact.n_name;
	std::cout << std::setw(10) << this->c1 << "|" << std::setw(10) << this->c2 << "|" << std::setw(10) << this->c3 << "|" << std::setw(10) << this->c4 << std::endl;
	return;
}
