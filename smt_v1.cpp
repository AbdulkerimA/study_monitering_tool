#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	string book_name = NULL; // used to store a book name inputed from user
	cin >> book_name;
	
	// creating a file from to store time and date
	
	ofstream file_one (book_name + "Study time and Date.txt" );
	
}
