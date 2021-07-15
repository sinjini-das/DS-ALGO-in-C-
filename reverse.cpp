// Reverse an array
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int num,element,option;
	string str;
	vector<int> array;
	cout<<"What to reverse ? For string type 1 and for integer array type 2."<<endl;
	cin>>option;
	switch(option){
		case 1: cout<<"Enter the string: "<<endl;
				cin.ignore();
				getline(cin,str);
				for(int j=str.length();j>0;j--){
					cout<<str[j-1];
				}
				break;
		case 2: cout<<"Enter the number of elements: "<<endl;
				cin>>num;
				cout<<"Enter the elements: "<<endl;
				for(int i=0;i<num;i++){
					cin>>element;
					array.push_back(element);
				}
				for(int i=array.size();i>0;i--){
					cout<<array[i-1]<<" ";
				}
				break;
	}
	return 0;
}
