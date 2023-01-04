/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:25:00 by csejault          #+#    #+#             */
/*   Updated: 2022/01/27 12:26:58 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exception.hpp"

const char * NotFoundException::what() const throw()
{
	return ("Not found");
}
