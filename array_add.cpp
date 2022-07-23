#include<iostream>

using namespace std;
class b{
	 int a[];
	public :
		void getdata();
		void putdata();
	
};

 void b :: getdata()
{
	int i;
	for(i = 0; i<10; i++){
		cout<<"Enter Numebr : ";
		cin>>a[i];
		cout<<"\n";
	}
}
 void b :: putdata(){
	int c;
	int i;
	for(i = 0; i<10; i++){
		c = c + a[i];
	}
	cout << "Sum is "<< c;
}

int main()
{
	b a;
	a.getdata();
	a.putdata();
return 0;
}
