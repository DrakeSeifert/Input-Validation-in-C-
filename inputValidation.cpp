#include <iostream>
#include <limits> //numeric_limits<T>::max()
using std::cout;
using std::cin;
using std::endl;

int intRange(int input, int min, int max)
{
	while(input < min || input > max || cin.fail()) {
		cout << "Error: Enter a value between "  << min << " and " << max << endl;
		cin.clear();
		//cin.ignore(1000, '\n');
        	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//returns maximum size of given data type (i.e. int: (2^31) - 1)
		cin >> input;
	}
	return input;
}

int main()
{
	int input, min = 1, max = 10;
	cout << "Enter a value between " << min << " and " << max << endl;
	cin >> input;
	input = intRange(input, min, max);
	cout << "Your value is: " << input << endl << endl;

	return 0;
}
