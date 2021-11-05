/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:08:05 by csejault          #+#    #+#             */
/*   Updated: 2021/11/05 12:48:51 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "contact.class.hpp"
# include "display_line.class.hpp"
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
		void	search(void) const;
		int		read_data(void);
		int		check_data(void) const;

	private:
		static int		_nb_added;
		std::string		_tmp_secret;
};
#endif
