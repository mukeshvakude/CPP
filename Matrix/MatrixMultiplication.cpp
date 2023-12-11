#include<iostream>
using namespace std;
int main(){	
	int row ,col1 , col2;
	cout<<"Enter first matrix row"<<endl;
	cin>>row;
	cout<<"Enter first matrix col"<<endl;
	cin>>col1;
	cout<<"Enter 2nd matrix col"<<endl;
	cin>>col2;
	int a[row][col1] ,b[col1][col2];
	
	int result[row][col2]={0}; /*Initialize 0 to whole matrix 
	otherwise 0,0 elements gives garbage value */
	cout<<"Enter 1st the matrix"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j< col1;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Display matrix 1"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j< col1;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter 2nd the matrix"<<endl;
	for(int i=0;i<col1;i++){
		for(int j=0;j< col2;j++){
			cin>>b[i][j];
		}
	}
	cout<<"Display matrix 2"<<endl;
	for(int i=0;i<col1;i++){
		for(int j=0;j< col2;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matrix Multiplication "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j< col2;j++){
			for(int k=0;k<col1;k++){
			  result[i][j] += a[i][k] * b[k][j];	
			}	
		}
		cout<<endl;
	}
	cout<<"Display matrix 2"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j< col2;j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
}
