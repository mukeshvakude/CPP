// C++ program to demonstrate static
// variables inside a class

#include <iostream>
using namespace std;

class GfG {
public:
	static int i;

	GfG(){
		// Do nothing
	};
};

int GfG::i = 1; // For Error keep in comment

int main()
{
	GfG obj;
	// prints value of i
	cout << obj.i;
}

