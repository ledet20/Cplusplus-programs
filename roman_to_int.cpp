#include "std_lib_facilities_5.h" // header file written by class instructor

//C++ program that converts roman nunmerals to number values 

int roman_to_int(char romanNumeral) {

	if (romanNumeral == 'I' || romanNumeral == 'i') {
		return 1;
	}
	else if (romanNumeral == 'V' || romanNumeral == 'v') {
		return 5;
	}
	else if (romanNumeral == 'X' || romanNumeral == 'x') {
		return 10;
	}
	else if (romanNumeral == 'L' || romanNumeral == 'l') {
		return 50;
	}
	else if (romanNumeral == 'C' || romanNumeral == 'c') {
		return 100;
	}
	else if (romanNumeral == 'D' || romanNumeral == 'd') {
		return 500;
	}
	else if (romanNumeral == 'M' || romanNumeral == 'm') {
		return 1000;
	}
	else {
		return -1;
	} 
}

int roman_numeral(string s) {
	int max_so_far = 0;
	int total = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		int current = roman_to_int(s[i]);
		if (current >= max_so_far) {
			max_so_far = current;
			total += current;
		}
		else {
			total -= current;
		}
		if (roman_to_int(s[i]) == -1) {
			return -1;
		}
	}
	return total;
}

int main() {

		int total = 0;
		int max_value_so_far = 0;
		string romanValue;

		cout << "Please Enter a roman numeral: \n";

		while (cin >> romanValue) {
			if (roman_numeral(romanValue) == -1) {
				cout << "Sorry, " << romanValue << " is not a Roman numeral " << endl;
			}
			else {
				cout << "The value is " << roman_numeral(romanValue) << endl;
			}

		}
		return 0;
}
