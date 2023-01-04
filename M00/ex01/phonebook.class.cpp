/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:11:51 by csejault          #+#    #+#             */
/*   Updated: 2021/11/09 14:23:43 by csejault         ###   ########.fr       */
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

int		phonebook::check_searched_data(std::string instruction) const
{
	int i;

	i = 0;
	while(instruction[i])
	{
		if (!isdigit(instruction[i]))
		{
			std::cout << "Error, Wrong format." << std::endl;
			return (-1);
		}
		i++;
	}
	if (instruction.length() > 1 || instruction[0] - '0' >= this->_nb_added)
	{
		std::cout << "Error, index is missing." << std::endl;
		return (-1);
	}

	return (0);
}

int		phonebook::search(void) const
{
	std::string		instruction;

	int i = 0;
	std::cout << std::setw(11) << "index|" << std::setw(11) <<"first name|" << std::setw(11) << "last name|" << std::setw(10) << "nickname" << std::endl;
	while (i < phonebook::_nb_added)
	{
		this->_contacts[i].print_short();
		i++;
	}
	std::cout << "Which index do you want : ";
	getline(std::cin, instruction);
	if (!std::cin.good())
	{
		std::cout << std::endl << "Error while reading input." <<std::endl;
		return (-1);
	}
	if (phonebook::check_searched_data(instruction) < 0)
		return (0);
	else
		this->_contacts[instruction[0] - '0'].print_full();
	return (0);
}

int		phonebook::read_data(void)
{
	std::cout << "First name: ";
	getline(std::cin, this->_tmp_f_name);
	if (!std::cin.good())
		return (-1);
	std::cout << "Last name: ";
	getline(std::cin, this->_tmp_l_name);
	if (!std::cin.good())
		return (-1);
	std::cout << "Nickname: ";
	getline(std::cin, this->_tmp_n_name);
	if (!std::cin.good())
		return (-1);
	std::cout << "Phone number: ";
	getline(std::cin, this->_tmp_phone);
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


	if (this->_tmp_phone[0] == '+')
		i = 1;
	else
		i = 0;
	while(this->_tmp_phone[i])
	{
		if (!isdigit(_tmp_phone[i]))
		{
			std::cout << "Error, Wrong format." << std::endl;
			return (-1);
		}
		i++;
	}
	if (!this->_tmp_f_name.compare("") && !this->_tmp_l_name.compare("") && !this->_tmp_n_name.compare(""))
	{
		std::cout << "Error, empty contact" << std::endl;
		return (-1);
	}
	return (0);
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
		return (0);
	this->_contacts[phonebook::_nb_added].new_contact(phonebook::_nb_added, this->_tmp_f_name, this->_tmp_l_name, this->_tmp_n_name, this->_tmp_phone, this->_tmp_secret);
	std::cout << this->_tmp_f_name << " successfully added to the Phonebook!" << std::endl;
	phonebook::_nb_added++;
	return (0);
}
