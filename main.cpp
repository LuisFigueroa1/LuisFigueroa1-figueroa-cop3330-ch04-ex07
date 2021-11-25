#include "std_lib_facilities.h"
#include "changeTo.h" //include the library functions 
#include "values.h" //include the library functions 

int main()
{
	vectorValue();

	cout<< "Please input two single digit values, and the operation(+, -, *, /) you want the calculator to perform in the middle of the values:\n";
	
		int value1 = changeTo(); 
		char operand = 0; //sets the operand to 0
		cin>>operand; 
		int value2 = changeTo();
		string operation;	// checks for the symbols + - * /
		double ans;

        //starts switch cases
		switch (operand) { 
		
        case '+': //case for sum
			operation = "Sum of ";
			ans = value1+value2; 
			break;
		
        case '-': //case for subtraction
			operation = "Subtraction of ";
			ans = value1-value2; 
			break;
		
        case '*': //case for multiplication
			operation = "Product of ";
			ans = value1*value2; 
			break;
        
        case '/': //case for division
			operation = "Division of ";
			ans = value1/value2; 
			break;
        }

        cout << "The "<<operation << value1 << " and " << value2 << " is " << ans << '\n';
}