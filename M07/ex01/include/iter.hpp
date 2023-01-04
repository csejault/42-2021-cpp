/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:22:10 by csejault          #+#    #+#             */
/*   Updated: 2022/01/25 09:22:12 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
template<typename T, typename F>
void	iter(T *array, int lenght, F fct)
{
	for (int i = 0; i < lenght; i++)
		fct((*array)[i]);
}
#endif
