#include<iostream>
using namespace std;

class Point{
	public : 
	int a , b;
	
	Point(){
		a=0;
		b=0;
	}
	Point(int a , int b){
		this->a = a;
		this->b = b;
	}
	bool operator>=(Point pointObj){
	   
		int val1 = a+b , val2=pointObj.a + pointObj.b;
		return val1 >= val2;
		
	}
	 
};

int main(){
	
	Point point1(1,8);
	Point point2(3,4);
	
	// Comparing two points using the >= operator
    if (point1 >= point2) {
        cout << "Point 1 is greater than or equal to Point 2" << endl;
     } else {
        cout << "Point 1 is not greater than or equal to Point 2" << endl;
     }

     return 0;
 }
