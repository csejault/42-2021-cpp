/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:45:48 by csejault          #+#    #+#             */
/*   Updated: 2021/11/03 18:29:43 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	for_each_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (av[i])
		{
			for_each_string(av[i]);
			std::cout << av[i];
			i++;
		}
		std::cout << std::endl;

	}
	return (0);
}
