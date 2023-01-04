/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:30:21 by csejault          #+#    #+#             */
/*   Updated: 2022/01/27 14:35:18 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::exception;

void	print_vector(vector<int> v)
{
	unsigned int i = 0;
	cout << "=== PRINT VECTOR START ===" << endl;
	while ( i < v.size())
	{
		cout << v.at(i) << std::endl;
		i++;
	}
	cout << "=== PRINT VECTOR STOP ===" << endl;
}

int main()
{
	vector<int> v(20,0);
	int i(0);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		*it = i++;
		it++;
	}

	print_vector(v);

	cout <<std::endl;
	try
	{
		cout << "search 44 : ";
		it = easyfind(v, 44);
		cout << "Success" << endl;
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}

	try
	{
		cout << "search 5 : ";
		it = easyfind(v, 5);
		cout << "Success" << endl;

		cout << "replace 5 by 44 : ";
		*it = 44;
		cout << "Success" << endl;

		cout << "Search 44 : ";
		it = easyfind(v, 44);
		cout << "Success" << endl;
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	print_vector(v);
	return (0);
}
