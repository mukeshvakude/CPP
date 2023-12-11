#include<iostream>

using namespace std;

class AccessPrivateVaribles{
	int a ,b ;
	
	public: 
		int c ,d;
		void setData(int a , int b); // Declaration of methods or functions
		void  getData(){
			cout<< "value of a is "<<a<<endl;
			cout << "value of b is "<<b <<endl;
			cout<< "value of c is "<<c<<endl;
			cout << "value of d is "<<d <<endl;
			
		}
	
	
	
};

//Aceess AccessPrivateVaribles using Scope resolution Operator :: 
void AccessPrivateVaribles :: setData(int value1 , int value2){
	a = value1;
	b = value2;
}

int main(){
	AccessPrivateVaribles accessprivatevarible;
	
	accessprivatevarible.c= 20;
	accessprivatevarible.d = 30;
	accessprivatevarible.getData();
	accessprivatevarible.setData(50 ,60);
	accessprivatevarible.getData();
	
	
	return 0;
}
