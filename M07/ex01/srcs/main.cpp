/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:51:46 by csejault          #+#    #+#             */
/*   Updated: 2022/01/25 09:59:23 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void fct(int &a)
{
	a++;
	return ;
}

void fct_str(std::string &str)
{
	str.insert(0, "alpha_");
}

void fct_print(const std::string &str)
{
	std::cout << str << std::endl;
}

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	for (int i = 0; i < 10; i++)
		std::cout << a[i] << std::endl;
	iter(&a,10,fct);
	for (int i = 0; i < 10; i++)
		std::cout << a[i] << std::endl;
	std::string *str = new std::string[5];

	str[0] = "abc";
	str[1] = "def";
	str[2] = "ghi";
	str[3] = "jkl";
	str[4] = "mno";
	for (int i = 0; i < 5; i++)
		std::cout << str[i] << std::endl;
	iter(&str,5,fct_str);
	for (int i = 0; i < 5; i++)
		std::cout << str[i] << std::endl;
	iter(&str,5,fct_print);
	delete []str;
	return (0);
}
