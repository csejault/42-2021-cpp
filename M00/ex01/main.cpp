/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:41:00 by csejault          #+#    #+#             */
/*   Updated: 2021/11/04 18:28:01 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"


int	main()
{
	std::string	instruction;
	phonebook	phonebook;

	std::cout << "Welcome to MyPhoneBook" << std::endl;
	while (1)
	{
		std::cout << "Please enter ADD - SEARCH or EXIT" << std::endl;
		getline(std::cin, instruction);
		if (!instruction.compare("EXIT") || !std::cin.good())
			break;
		else if (!instruction.compare("ADD"))
		{
			if (phonebook.add())
				return (-1);
		}
		else
		{
			phonebook.print_test();
		}
	}


	return (0);
}
