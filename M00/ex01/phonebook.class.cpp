/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:11:51 by csejault          #+#    #+#             */
/*   Updated: 2021/11/04 18:44:33 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.class.hpp"

int	phonebook::_nb_added = 0;

phonebook::phonebook(void)
{
	return;
}

phonebook::~phonebook(void)
{
	return;
}

int		phonebook::read_data(void)
{
	std::cout << "First name: ";
	getline(std::cin, this->tmp_f_name);
	if (!std::cin.good())
		return (-1);
	std::cout << "Last name: ";
	getline(std::cin, this->tmp_l_name);
	if (!std::cin.good())
		return (-1);
	std::cout << "Nickname: ";
	getline(std::cin, this->tmp_n_name);
	if (!std::cin.good())
		return (-1);
	std::cout << "Phone number: ";
	getline(std::cin, this->tmp_phone);
	if (!std::cin.good())
		return (-1);
	std::cout << "Darkest secret: ";
	getline(std::cin, this->_tmp_secret);
	if (!std::cin.good())
		return (-1);
	return (0);
}

int		phonebook::check_data(void) const
{
	int i;


	if (this->tmp_phone[0] == '+')
		i = 1;
	else
		i = 0;
	while(this->tmp_phone[i])
	{
		if (!isdigit(tmp_phone[i]))
			return (-1);
		i++;
	}
	return (0);
}

void	phonebook::print_test(void) const
{
	int i;

	i = 0;
	while (i < phonebook::_nb_added)
	{
		std::cout << this->contacts[i].f_name << " is present" << std::endl;
		i++;
	}
}

int		phonebook::add(void)
{
	if (phonebook::_nb_added >= INST_MAX)
	{
		std::cout << "Sorry, can't do this, phonebook is full" << std::endl;
		return (0);
	}
	if (phonebook::read_data() < 0)
	{
		std::cout << "Error while reading input" << std::endl;
		return (-1);
	}
	if (phonebook::check_data() < 0)
	{
		std::cout << "Error wrong data in the input" << std::endl;
		return (0);
	}
	contacts[phonebook::_nb_added].new_contact(phonebook::_nb_added, this->tmp_f_name, this->tmp_l_name, this->tmp_n_name, this->tmp_phone, this->_tmp_secret);
	std::cout << contacts[phonebook::_nb_added].f_name << " successdully added to the Phonebook!" << std::endl;
	phonebook::_nb_added++;
	return (0);
}
