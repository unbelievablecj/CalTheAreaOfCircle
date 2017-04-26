#include<iostream>
#include"circle.h"
using namespace std;
int main() {
	
	double r = 0;
	cout << "Enter the radius:";
	cin >> r;
	while (!cin){
		cout <<"error,please enter again:";
		
		cin.clear();
		cin.sync();
		cin.ignore();
		cin >> r;
	}
	cout << "the area is " << CalArea(r)<<endl;
	system("pause");
	return 0;
}