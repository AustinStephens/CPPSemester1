// File I/O
// Outputs the contents of a file to the console.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;

int main()
{
	string line;
	ifstream infile("file.txt");

	
	while(getline(infile, line))
		cout << line << endl;

	
	infile.close();
	
	return 0;
}
