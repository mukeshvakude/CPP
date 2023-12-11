#include <iostream> 
using namespace std; 
int main() { 

	// * - Dereference Operator
	int i = 10; 
	int * p; 
	p = & i; 
	cout << "Address of the variable i is " << p << endl; 
	cout << "Address of the pointer p is " << & p << endl; 
	
	cout << "Value of the  i is " << i << endl;
	cout << "Value of the  p is " << *p << endl;  
	return 0; 

}



