#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class item{
	int number;
	float cost;
	public :
		void getdata(int a, float b);
		void putdata(void){
		
		cout<<"Number : "<<number<<"\n";
		cout<<"Cost : "<<cost<<"\n";
	}
};
void item :: getdata(int a, float b){
	number = a;
	cost = b;
}
int main(){
	int q,w;
	cout<<"\nObject X Created\n";
	item x;
	cout<<"Enter Item Number : ";
	cin>>q;
	cout<<"Enter It's Cost :";
	cin>>w;
	x.getdata(q,w);
	x.putdata();
	
	cout<<"\nObject Y Created\n";
	item y;
	cout<<"Enter Item Number : ";
	cin>>q;
	cout<<"Enter It's Cost : ";
	cin>>w;
	y.getdata(q,w);
	y.putdata();
	
	return 0;
}

