/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:28:26 by csejault          #+#    #+#             */
/*   Updated: 2022/01/27 19:29:59 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Span.hpp"
#define N_MAX 	100000

using std::cerr;
using std::cout;
using std::endl;

//int main(int ac, char **av)
//{
//	if (ac != 2)
//		return (-1);
//	long arg = atol(av[1]);
//Span s(arg);
int main ()
{
		vector<int> vec;
		for (int i = 0; i < 100; i++)
			vec.push_back(Span::generate_random());
	srand(time(0));
	{
		Span s(N_MAX);
		try {
		for (int i = 0; i < 100; i++)
			s.addNumber(Span::generate_random());
		}
		catch (std::exception &e)
		{
			cerr << e.what() << endl;
		}
		s.printPQ();
		try
		{
			long shortestSpan = s.shortestSpan();
			cout << "Shortest span : " << shortestSpan << endl;
			long longestSpan = s.longestSpan();
			cout << "Longest span : " << longestSpan << endl;
		}
		catch (std::exception &e)
		{
			cerr << e.what() << endl;
		}
	}
	{
		vector<int> vec;
		for (int i = 0; i < 100; i++)
			vec.push_back(Span::generate_random());
		Span s(N_MAX);
		try
		{
			s.FillSpan(vec.begin(),vec.end());
			s.printPQ();
			long shortestSpan = s.shortestSpan();
			cout << "Shortest span : " << shortestSpan << endl;
			long longestSpan = s.longestSpan();
			cout << "Longest span : " << longestSpan << endl;
		}
		catch (std::exception &e)
		{
			cerr << e.what() << endl;
		}
	}
	return (0);
}

//int main()
//{
//
//Span sp = Span(5);
//sp.addNumber(6);
//sp.addNumber(3);
//sp.addNumber(17);
//sp.addNumber(9);
//sp.addNumber(11);
//std::cout << sp.shortestSpan() << std::endl;
//std::cout << sp.longestSpan() << std::endl;
//return 0;
//
//}
