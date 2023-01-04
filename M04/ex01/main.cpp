/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:03:14 by csejault          #+#    #+#             */
/*   Updated: 2022/01/03 12:07:09 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main ()
{

	const Animal * animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "Animal nb : "<< i << " ";
		animals[i]->makeSound();
	}
	Cat	cpy(*(Cat *)animals[0]);
	std::cout << "animal[0]	= " << animals[0] << "	His Brain = " << ((Cat *)animals[0])->GetBrain() << std::endl;
	std::cout << "CPY 		= " << &cpy << "	His Brain = " << cpy.GetBrain() << std::endl;




	for (int i = 0; i < 10; i++)
	{
		delete		animals[i];
	}
	return (0);
}
