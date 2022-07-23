#include<iostream>
using namespace std;
class item{
	int number;
	float cost;
	public:
	item(int a,float b);
		void display()
		{
		
		cout<<"number:"<<number<<"\n";
		cout<<"cost:"<<cost<<"\n";
		
		}
	
};
/*
void item::item(int a,float b)
{
	number=a;
	cost=b;
	
}
*/
int main()
{
	item x(10,20);
	x.display();
	 
	 item y(50,60);
	 y.display();
	  return 0;
}

