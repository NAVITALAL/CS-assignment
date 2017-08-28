#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	// Creating six variables
	int firstNumber, secondNumber, sum, difference, product, quotient ;
	
	cout << "Enter the first number";
	cin  >> firstNumber;
	
	cout << "Enter the second number";
	cin >> secondNumber;
	
	sum=firstNumber + secondNumber;
	
	difference=firstNumber-secondNumber;
	
	product=firstNumber*secondNumber;
	
	quotient=firstNumber/secondNumber;
	
	cout << "The sum of the two numbers is " << sum << ".";
	cout << "The difference of the two numbers is " << difference << ".";
	cout << "The product of the the two numbers is " << product << ".";
	cout << "The quotient of the two numbers is " << quotient <<".";
	
	
	return 0;
}
