#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char * argv[]) {
	// Q5a
	map<int, string> lib;
	map<int, string>::iterator itr = lib.begin();
	int isbntemp;
	string titletemp;

	// Q5b
	while (52) {
		cout << "Type in the details for a book and hit enter to add to the catalog." << endl;
		cout << "Alternatively, type \"-1\" and hit enter to exit this program." << endl;

		cout << "Insert the book's ISBN: " << endl;

		cin >> isbntemp;
		
		if (isbntemp == -1) {
			break;
		}

		for (itr = lib.begin(); itr != lib.end(); itr++) {
			if (itr->first == isbntemp) {
				cout << "A book with that ISBN is already in the library!" << endl;
				isbntemp = 0;
				break;
			}
		}

		if (isbntemp != -1 && isbntemp != 0) {
			cout << "Insert the book's title: " << endl;
			cin.ignore();
			getline(cin, titletemp, '\n');
			lib.insert(pair<int, string> (isbntemp, titletemp));
			titletemp.clear();
		}
	}

	// Q5c
		ofstream output;
		output.open("library_list.txt");

		for (itr = lib.begin(); itr != lib.end(); itr++){
			output << itr->second << endl;
		}

		output.close();

	return 0;
}
