#include <iostream> 
using namespace std; 
int main() {
	int a = 10;
	int *p = &a; // pointer
	int **q = &p; // poniter - to - pointer
	/* NEXT THREE LINES PRINT ADDRESS OF a  */
	cout<< "Address of a = "<<endl << &a <<endl;
	cout << p <<endl;
	cout << *q <<endl;
	/* NEXT TWO LINES PRINT SAME i.e Address OF p */
	cout<< "Address of p = "<<endl << &p <<endl;
	cout << q <<endl;
	/* NEXT THREE LINES PRINT VALUE OF a  */
	cout<< "Value of a = "<<endl << a <<endl;
	cout << *p <<endl;
	cout << **q <<endl;
	
	

	return 0;	
}
