#include <iostream>
#include <string>
using namespace std;
class UserInput{
	public : 
		UserInput(){ //contructor
			cout<<"executed"<<endl;
		}
		void readValue(){
				char ch;
			    do {
			       
			        int integerValue;
			        float floatValue;
			        string stringValue; 
			
			        cout << "Read Integer value and assign to integer variable: ";
			        cin >> integerValue;
			        cout << "Integer value is = " << integerValue << endl;
			
			        cout << "Read Float value and assign to Float variable: ";
			        cin >> floatValue;
			        cout << "Float value is = " << floatValue << endl;
			        
			        cout << "Read String value and assign to String variable: ";
			        cin >> stringValue;
			        cout << "String  value is = " << stringValue << endl;
			
			        cout << "Do you want to continue (Y/N): ";
			        cin >> ch;
			    } while (ch == 'Y' || ch == 'y');
		}
					
};



int main() {
    UserInput userInput;
    userInput.readValue();

    return 0;
}

