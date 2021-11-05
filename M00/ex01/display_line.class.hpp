/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_line.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:27:48 by csejault          #+#    #+#             */
/*   Updated: 2021/11/05 13:10:53 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_LINE_CLASS_HPP
# define DISPLAY_LINE_CLASS_HPP

# include "contact.class.hpp"
# include <iostream>
# include <iomanip>

class	display_line
{
	public:
		std::string	c1;
		std::string	c2;
		std::string	c3;
		std::string	c4;
				
		display_line(void);
		~display_line(void);
		void	print(contact contact);
		std::string trunk(std::string to_trunk);		
};
#endif
