#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	int a,b;
	std::cout<<"Enter the first number:";
	std::cin >> a;
	std::cout << "Enter the second number:";
	std::cin>>b;
	int sum=a+b;
	std::cout<<" The sum of "<< a << " and " << b << " is: "<<sum <<std::endl;
	return 0;
}
