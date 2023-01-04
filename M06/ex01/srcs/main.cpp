/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:25:48 by csejault          #+#    #+#             */
/*   Updated: 2022/01/21 14:27:57 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>
#include <iostream>

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}
int main()
{
	Data	d("Bonjour toi!");
	std::cout << "original message = " << d.get_message() << std::endl;
	uintptr_t serialized = serialize(&d);
	std::cout << "serialized = " << serialized << std::endl;
	Data	*deserialized = deserialize(serialized);
	std::cout << "deserialized message = " << deserialized->get_message() << std::endl;
	std::cout << "ptr original = " << &d << std::endl << "ptr deserial = " << deserialized << std::endl;
}
