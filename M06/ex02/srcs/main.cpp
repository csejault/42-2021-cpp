/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:10:51 by csejault          #+#    #+#             */
/*   Updated: 2022/01/21 15:16:31 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <cstdlib>
# include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){

	srand(time(NULL));
	int random = rand() % 3;
	switch (random)
	{
		case 0 :
			return (new A());
		case 1 :
			return (new B());
		case 2 :
			return (new C());
		default:
			return (NULL);
	}
}

void identify(Base& p)
{
	std::cout << "indentify ref - ";
	Base b;
	try
	{
		b = dynamic_cast<A&>(p);
		std::cout << "Class is A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			b = dynamic_cast<B&>(p);
			std::cout << "Class is B" << std::endl;
		}
		catch (std::exception &f)
		{
			try
			{
				b = dynamic_cast<C&>(p);
				std::cout << "Class is C" << std::endl;
			}
			catch (std::exception &f)
			{
			}
		}
	}
}

void identify(Base* p)
{
	std::cout << "indentify ptr - ";
	Base * test = NULL;
	if ( (test = dynamic_cast<A*>(p)) )
		std::cout << "Class is A" << std::endl;
	else if ( (test = dynamic_cast<B*>(p)) )
		std::cout << "Class is B" << std::endl;
	else if ( (test = dynamic_cast<C*>(p)) )
		std::cout << "Class is C" << std::endl;
}

int main()
{
	Base *rand = generate();
	identify(rand);
	identify(*rand);
	delete rand;
	return (0);
}
