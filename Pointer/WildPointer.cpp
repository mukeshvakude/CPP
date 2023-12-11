#include <iostream> 
using namespace std; 
int main() {
	int *ptr ; // ptr is wild pointer because  declare but not initialize
	int a = 10;
	
	ptr = &a; // ptr not wild pointer now because
	
	*ptr = 10;
	
	cout << "wild pointer means declare but not initialize ";
	

	return 0;	
}
