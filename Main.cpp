
#include <iostream> // cin & cout
#include <conio.h> // lets us use getch

using namespace std;

int main()
{
	//// std::
	//cout << "\"Hello\n	 world!\" \n \n enter an integer: ";

	//int age = 24;
	//float balance = 1824.99;
	//const double PI = 3.14159265;
	//bool ryanIsCool = false;
	//char middleinitial = '0';
	//string s = "Ryan"; // not a primitive!

	//int a = (int)PI; // explicit cast(implicit would be without(int))

	//int input = 0;
	//cin >> input;
	//cout << "You entered: " << input << "\n"; // or "endl"

	//if (input != 0) // any non 0 is true
	//{
	//	cout << "Your number is over 3!";
	//}
	//int i = 7;
	//for (;; i++)
	//{
	//	if (i > 12) break;
	//}
	//cout << i;
	//while (input)
	//{
	//	input--;
	//}
	//// for (;true;)
	//// {
	//// 
	//// }
	//// else if...

	cout << "Enter a number between 1 and 5: ";
	int input = 0;
	cin >> input;
	if (input < 1 || input > 5)
	{
		cout << "Invalid number, please try again. \n";
	}
	else
	{
		for (int i = 0; i < input; i++)
		{
			cout << i + 1 << ". If I'm not back in five minutes, just wait longer.\n";
		}
			cout << "-Ace Ventura";
	}



	(void)_getch(); // wait for any key
	return 0;
}