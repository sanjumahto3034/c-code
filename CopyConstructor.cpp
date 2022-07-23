#include<iostream>
using namespace std;
class item{
	int number;
	float cost;
	public :
	item(int a, float b){
		number = a;
		cost = b;
	}
	
	item(const item &p){
		number = p.number;
		cost = p.cost;
	}
	int getX(){
		return number;
	}
	int getY(){
		return cost;
	}
};

int main(){
	item q(10,20);
	item p = q;
	
	cout<<q.getX()<<" "<<q.getY()<<"Throw Constructor"<<"\n";
	cout<<p.getX()<<" "<<p.getY()<<"Throw Copy Construct "<<"\n";
	return 0;
}
