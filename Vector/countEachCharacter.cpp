#include<iostream>
#include<vector>
#include<string>
using namespace std;

void countOfEachCharacter(string str){
	vector<int> frequency(128,0);
	//initialize vector of size 128 beacuse 128 ASCII value we stored
	
	for(int i=0;i<str.length();i++){	
		frequency[str[i]]+=1;
	}
	for(int i=0;i<str.length();i++){
		if(frequency[str[i]] !=0){
			cout<<"Count of "<<str[i]<<" is "<<frequency[str[i]]<<endl;
		}
	}	
}
int main(){
	string str;
	cout<<"Enter the string "<<endl;
	getline(cin,str);
	countOfEachCharacter(str);
	return 0;
}

