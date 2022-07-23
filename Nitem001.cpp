
#include<iostream>

using namespace std;
class item{
	int number;
	float cost;
	public:
		item(int a, float b);
		void display(){
			cout<<"Number : "<<number<<"\n";
			cout<<"Cost : "<<cost<<"\n";
		}
};
item :: item(int a, float b){
	number = a;
	cost = b;
}
int main(){
	item x(10,201);
	x.display();
	
	item y(30,40);
	y.display();
	
	return 0;
}

