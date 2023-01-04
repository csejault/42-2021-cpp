/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:46:31 by csejault          #+#    #+#             */
/*   Updated: 2021/11/09 14:23:16 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>

class	contact
{
	public:
					contact(void);
					~contact(void);
		int			new_contact(int idx, std::string fn, std::string ln, std::string nn, std::string p, std::string _s);
		void		print_full(void) const;
		void		print_short(void) const;

	private:
		int			_index;
		std::string	_f_name;
		std::string	_l_name;
		std::string	_n_name;
		std::string	_phone;
		std::string	_secret;
};
#endif
