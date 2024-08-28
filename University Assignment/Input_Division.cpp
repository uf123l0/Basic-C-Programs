#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	double numerator,denominator;
	std::cout<<"Enter the numerator:";
	std::cin>>numerator;
	std::cout<<"Enter the denominator:";
	std::cin>>denominator;
	if(denominator !=0){
		double result=numerator/denominator;
		std::cout<<"The result of"<< numerator<<"divided by"<<denominator<< " is: "<<result<<std::endl;
	}
	return 0;
}
