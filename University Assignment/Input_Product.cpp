#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	double a,b;
	std::cout<<"Enter the first number:";
	std::cin>>a;
	std::cout<<"Enter the second number:";
	std::cin>>b;
	double product=a*b;
	std::cout<<"The product of" << a << " and " << b << " is: "<<product<<std::endl;
	return 0;
}
