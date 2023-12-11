#include <iostream> 
using namespace std; 
int main() {
	void *ptr ;
	int i=10;
	// assign int address to void
	ptr = &i;
	cout<< "Address of i  is =  " << &i <<endl;
	cout<< "Address where void pointer is pointing  = " << ptr <<endl;
	

	return 0;	
}
