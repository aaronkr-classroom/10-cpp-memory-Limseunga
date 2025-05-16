// copy_file.cpp
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream infile("In.txt");
	ofstream outfile("out.txt");

	string s;

	while (getline(infile, s))
		outfile << s << endl;
}