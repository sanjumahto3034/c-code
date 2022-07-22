#include<iostream>
using namespace std;

class largestIndexArrayAssending{
	
};
int main(){
	int temp = 0;
	int largestValue = 0;
	int arr[] = {1,2,3,4 ,1,5,2,6,7,8,9,10,11};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i<=arrSize+1; i++){
		
		if(i!=arrSize){
			temp++;
			if(arr[i]>arr[i+1]){
			if(largestValue<temp){
				largestValue=temp;
			}
			temp = 0;
		}
		}
		else{
			if(largestValue<temp){
				largestValue=temp;
			}
			cout<<"Largest Value "<<largestValue;
		}
		
	}
}
