/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:08:05 by csejault          #+#    #+#             */
/*   Updated: 2021/11/04 18:44:44 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "contact.class.hpp"
# include <iostream>
# define INST_MAX 3

class	phonebook
{
	public:
		contact		contacts[8];
		std::string	tmp_f_name;
		std::string	tmp_l_name;
		std::string	tmp_n_name;
		std::string	tmp_phone;
				
				phonebook(void);
				~phonebook(void);

		int 	add(void);
		int		read_data(void);
		int		check_data(void) const;
		void	print_test(void) const;
	private:
		static int		_nb_added;
		std::string		_tmp_secret;
};
#endif
