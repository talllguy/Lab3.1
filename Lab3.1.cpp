/******************************************************** 
 COSC 501 
 Lab 3.1 
 Elliott Plack 
 19 SEP 2013           Due date: 23 SEP 2013 
 Problem: Write a C++ program that takes input from the
	user 2 integers and outputs the result of the modulus
	and division operations
 Algorithm: The program will request two integers from
	the user and perform a variety of division operations
	to show the difference between mod (%) division,
	integer division (/) and floating point integer
	division.
********************************************************/


#include <iostream>  // for input output 
#include <iomanip>   // to manipulate output 
#include <cmath>	 // for math stuff
using namespace std;

int main()
{
	int input_integer_1(0), input_integer_2(0); // two inputs we'll get from the user
	int quotient_mod(0), quotient_int(0); // these will be the two results of the operations
	float quotient_float(0); // this will be the result of a floating point division operation

	/*get user inputs */
	cout << "Please enter two integers: \n";
	cin >> input_integer_1 >> input_integer_2;

	/*assignment statements */
	quotient_mod = input_integer_1 % input_integer_2;
	quotient_int = input_integer_1 / input_integer_2;
	quotient_float = float(input_integer_1) / input_integer_2; // putting (float) before the one integer converts to real number

	/* outputs */
	cout << input_integer_1 << " modulo " << input_integer_2 << " equals " << quotient_mod << endl;
	cout << input_integer_1 << " divided by " << input_integer_2
		<< " using integer division equals " << quotient_int << endl;

	/* set the precision for the float output */
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2);

	/* outputs the float result with 2 decimal places */
	cout << input_integer_1 << " divided by " << input_integer_2
		<< " using floating point division equals " << quotient_float << endl;

	return 0;
}