/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:08:05 by csejault          #+#    #+#             */
/*   Updated: 2021/11/09 14:23:31 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "contact.class.hpp"
# include <iostream>
# include <iomanip>
# define INST_MAX 8

class	phonebook
{
	public:
				phonebook(void);
				~phonebook(void);

		int 	add(void);
		int		search(void) const;
		int		read_data(void);
		int		check_searched_data(std::string instruction) const;
		int		check_data(void) const;

	private:
		contact			_contacts[8];
		std::string		_tmp_f_name;
		std::string		_tmp_l_name;
		std::string		_tmp_n_name;
		std::string		_tmp_phone;
		static int		_nb_added;
		std::string		_tmp_secret;
};
#endif
