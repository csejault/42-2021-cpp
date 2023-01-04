#ifndef SWAP_HPP
# define SWAP_HPP

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
void	swap(T &first, T &second)
{
	T tmp = first;
	first = second;
	second = tmp;
}
#endif
