#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class item{
	int number;
	float cost;
	public:	
	item(int a, float b);
	void display(void){
		cout<<"Number : "<<number<<"\n";
		cout<<"Cost : "<<cost<<"\n";
		
	}
};
item :: item(int a, float b){
	number = a;
	cost = b;
}

int main(){
	cout<<"\nItem 1\n";
	item it1(10,20);
	it1.display();
	
	cout<<"\nItem 2\n";
	item it2 = item(30,40);
	it2.display();
	return 0;
	
}
