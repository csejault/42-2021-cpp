/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:29:04 by csejault          #+#    #+#             */
/*   Updated: 2022/01/24 16:39:00 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MIN_HPP
# define MIN_HPP

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
//T min(T & val1, T & val2)
T min(T val1, T val2)
{
	if (val2 <= val1)
		return (val2);
	else
		return (val1);
}

#endif
