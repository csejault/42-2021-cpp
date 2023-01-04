/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:03:14 by csejault          #+#    #+#             */
/*   Updated: 2021/12/28 17:45:02 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{

	const Animal* ani = new Animal();
	std::cout << ani->getType() << " " << std::endl;
	ani->makeSound();

	const Animal* dog = new Dog();
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();

	const Animal* cat = new Cat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();

	const WrongAnimal* wcat = new WrongCat();
	std::cout << wcat->getType() << " " << std::endl;
	wcat->makeSound();

	return (0);
}
