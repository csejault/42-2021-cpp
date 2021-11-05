/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:11:51 by csejault          #+#    #+#             */
/*   Updated: 2021/11/05 16:18:27 by csejault         ###   ########.fr       */
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

int		phonebook::search(void)
{
	display_line	l_to_print;
	std::string		instruction;

	int i = 0;
	std::cout << std::setw(11) << "index|" << std::setw(11) <<"first name|" << std::setw(11) << "last name|" << std::setw(10) << "nickname" << std::endl;
	while (i < phonebook::_nb_added)
	{
		l_to_print.print(this->contacts[i]);
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
		contacts[instruction[0] - '0'].print();
	return (0);
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
		{
			std::cout << "Error, Wrong format." << std::endl;
			return (-1);
		}
		i++;
	}
	if (!this->tmp_f_name.compare("") && !this->tmp_l_name.compare("") && !this->tmp_n_name.compare(""))
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
	contacts[phonebook::_nb_added].new_contact(phonebook::_nb_added, this->tmp_f_name, this->tmp_l_name, this->tmp_n_name, this->tmp_phone, this->_tmp_secret);
	std::cout << contacts[phonebook::_nb_added].f_name << " successdully added to the Phonebook!" << std::endl;
	phonebook::_nb_added++;
	return (0);
}
