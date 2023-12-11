#include<iostream>

using namespace std;

class InlineFunction{
	private :
		string s;
	public :
		void readBinary();
		void display();
};

void InlineFunction :: readBinary(){
	cout<<"Enter the binary Number"<<endl;
	cin>>s;
}

void InlineFunction :: display(){
	
	readBinary(); //Inline Function 
	cout<<"Number Entered = "<< s <<endl;
	for(int i=0 ; i< s.length() ; i++){
		if(s.at(i) != '0' && s.at(i)  != '1'){
			cout<<"Incorrect Binary Format"<<endl;
			break;
		}
	}

}

int main(){
	InlineFunction inlineFunction;
	inlineFunction.display();
}
