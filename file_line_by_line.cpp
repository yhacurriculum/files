/*
	Young Hacks Academy - After School Program
	file_line_by_line: This program demonstrates reading information from
	                   a file one line at a time.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;       // line temporary holder
    int i = 0;         // line counter
    string lines[10];  // line collection

    // define a file handle
    ifstream file ("text.txt");

    if (file.is_open()) {
        while (!file.eof()) {
            getline(file,line);
            cout << i << ": (" << line << ") -- Line Length: " << line.length() << endl;
            if (line.length() > 0) {
            	lines[i] = line;
            }
            else {
            	break;
            }
            i++;
        }
    }
    
    file.close();

    // display our gathered file data
    for (int k = 0; k < i; k++) {
    	cout << "(" << lines[k] << ")" << endl;
    }
    
    return 0;
}
