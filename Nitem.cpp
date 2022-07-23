#include<iostream>

using namespace std;

class item{
	int number;
	float cost;
	public:
		void getdata(int a, float b);
		void putdata(){
			cout<<"Number : "<<number<<"\n";
			cout<<"Cost : "<<cost<<"\n";
		}
};
void item :: getdata(int a, float b){
	number = a;
	cost = b;
}

int main(){
	item x;
	cout<<"\nObject 1\n";
	x.getdata(10,20);
	x.putdata();
	
	cout<<"\nObject 2\n";
	item y;
	y.getdata(30,40);
	y.putdata();
	
	return 0;
}

