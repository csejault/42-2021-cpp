/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:46:31 by csejault          #+#    #+#             */
/*   Updated: 2021/11/05 16:12:23 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class	contact
{
	public:

		int			index;
		std::string	f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	phone;

					contact(void);
					~contact(void);
		int			new_contact(int idx, std::string fn, std::string ln, std::string nn, std::string p, std::string _s);
		void		print(void);

	private:
		static contact	*contacts;
		std::string	_secret;
};
#endif
