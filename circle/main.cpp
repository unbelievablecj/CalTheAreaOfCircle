#include<iostream>
#include<limits>
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
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> r;
	}
	cout << "the area is " << CalArea(r)<<endl;
	system("pause");
	return 0;
}