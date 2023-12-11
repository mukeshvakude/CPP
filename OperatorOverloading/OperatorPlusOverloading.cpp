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
	Point operator+(Point pointObj){
		Point result;
		result.a = this->a + pointObj.a;
		result.b = this->b + pointObj.b;
		return result;
		
	}
	 // Function to display the point
    void display()  {
        cout << "A: " << a << ", B: " << b << endl;
    }
};

int main(){
	
	Point point1(10,20);
	Point point2(30,40);
	Point sum = point1 + point2;
	// Displaying the result
    std::cout << "Point 1: ";
    point1.display();

    std::cout << "Point 2: ";
    point2.display();

    std::cout << "Sum: ";
    sum.display();
}
