#include <iostream>
using namespace std;

int main() {
	std:: cout << "Hello World \nThis is Raja" << std::endl;
	string fullName;
	cout << "Type your full name: ";
	getline(cin, fullName);
	cout << "Your name is: " << fullName;
	return 0;
}