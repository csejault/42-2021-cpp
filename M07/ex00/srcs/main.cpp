
#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"

int main ()
{
	//int a = 'a';
	//int b = 'b';
	//std::string sa("bonjour Monsieur ");
	//std::string sb("Intel ! ");
	//std::cout << sa << " " << sb << std::endl;
	//swap(sa,sb);
	//std::cout << sa << " " << sb << std::endl;

	//std::cout << a << " " << b << std::endl;
	//std::cout << "min is : " << min(a,b) << std::endl;
	//std::cout << "max is : " << max(a,b) << std::endl;
	//swap(a,b);
	//std::cout << a << " " << b << std::endl;
	//std::cout << "min is : " << min(a,b) << std::endl;
	//std::cout << "max is : " << max(a,b) << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}
