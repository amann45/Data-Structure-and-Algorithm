// linear search

#include<iostream>
using namespace std;
int main(){
	int data[6] = {1,2,3,4,5};
	int index;
	int value;
	cout<<"Enter value: ";
	cin>>value;
	for(int i = 0; i < 6; i++){
		if(value == data[i]){
			cout<<"Match found at index "<< i<<endl;
			exit(0);
		}
		else{
			cout<<"Match not found at index "<<i<<endl;
		}
	}
}
