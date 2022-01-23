#include<iostream>
using namespace std;
int add(int a, int b) // function for addition
{
	return (a + b);
}
int multiply(int a, int b) // function for multiplication 
{
	return (a*b);
}
int subtract(int a, int b)  // function for subtraction
{
	return (a - b);
}
int divide(int a, int b)  // function for division
{
	return(a / b);
}
int main()
{
	int input;
	float addnum1, addnum2, sum, multnum1, multnum2, multresult, subnum1, subnum2,difference, dividenum1, dividenum2, divideres;

	cout << "\n\n\t\t\t\t\t ----> Enter 1 to add " << endl;
	cout << "\n\t\t\t\t\t ----> Enter 2 to multiply" << endl;;
	cout << "\n\t\t\t\t\t ----> Enter 3 to subtract" << endl;;
	cout << "\n\t\t\t\t\t ----> Enter 4 to divide" << endl;
	cout << "\n\t\t\t\t\t ----> Enter 0 to exit\n\n";
	cin >> input;
	switch (input)
	{
	case 1:
		cout << "\t\t\t\t\t Enter two numbers to add : " << endl;
		cout << "\n\t\t\t\t\t ----> Number 1 :";
		cin >> addnum1;
		cout << "\n\t\t\t\t\t ----> Number 2 :";
		cin >> addnum2;
		sum = add(addnum1, addnum2);
		cout << "\n\n\t\t\t\t\t |> Sum of two numbers = " << sum << endl;

		break;
	case 2:
		cout << "\t\t\t\t\t Enter two numbers to multiply : " << endl;
		cout << "\n\t\t\t\t\t ----> Number 1 :";
		cin >> multnum1;
		cout << "\n\t\t\t\t\t ----> Number 2 :";
		cin >> multnum2;
		multresult = multiply(multnum1, multnum2);
		cout << "\n\n\t\t\t\t\t |> Result is = " << multresult << endl;

		break;
	case 3:
		cout << "\t\t\t\t\t Enter two numbers to subtract" << endl;
		cout << "\n\t\t\t\t\t ----> Number 1 :";
		cin >> subnum1;
		cout << "\n\t\t\t\t\t ----> Number 2 :";
		cin >> subnum2;
		difference = subtract(subnum1, subnum2);
		cout << "\n\n\t\t\t\t\t |> Result of subtraction is : " << difference << endl;

		break;
	case 4:
		cout << "\t\t\t\t\t Enter two numbers t divide : " << endl;
		cout << "\n\t\t\t\t\t ----> Number 1 :";
		cin >> dividenum1;
		cout << "\n\t\t\t\t\t ----> Number 2 :";
		cin >> dividenum2;
		divideres = divide(dividenum1, dividenum2);
		cout << "\n\n\t\t\t\t\t |> Result is = " << divideres << endl;

		break;
	case 0:
		exit(0);
	default:
	{

		cout << "Please Enter numbers from 1-4 to do assigned task or 0 to quit";
		break;
	}
	}
}









