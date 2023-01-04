/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:22:10 by csejault          #+#    #+#             */
/*   Updated: 2022/01/27 14:28:26 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_H
# define EASYFIND_H

# include "exception.hpp"
# include <algorithm>
# include <iostream>
# include <stdexcept>

using std::find;
using std::cout;
using std::endl;
using std::exception;

	template<typename T>
typename T::iterator easyfind(T & cnt, int i)
{
	typename T::iterator it = find(cnt.begin(), cnt.end(), i);
	if (it == cnt.end())
		throw (NotFoundException());
	return (it);
}
#endif
