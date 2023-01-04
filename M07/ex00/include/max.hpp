/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:29:04 by csejault          #+#    #+#             */
/*   Updated: 2022/01/24 16:40:38 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MAX_HPP
# define MAX_HPP

# ifndef COL_GREEN
#  define COL_GREEN 		"\033[0;32m"
# endif
# ifndef COL_RED
#  define COL_RED		"\033[0;31m"
# endif
# ifndef COL_YELLOW
#  define COL_YELLOW		"\033[0;33m"
# endif
# ifndef COL_NORMAL
#  define COL_NORMAL		"\033[0m"
# endif

# include <iostream>

template< typename T>
T max(T val1, T val2)
{
	if (val2 >= val1)
		return (val2);
	else
		return (val1);
}

#endif
