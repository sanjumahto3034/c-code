#include<iostream>

using namespace std;

int main(){
	int j = 0;
	int i = 0;
	int arr[] = {1,2,3,4,5,4,2,1,1};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array Size : "<<arrSize<<"\n";
	for(i; i<arrSize;i++){
		for(j = i+1;j<arrSize;j++){
		
				if(arr[i]==arr[j]){
				cout<<arr[i]<<" ";
			}
		
		}
	}
	cout<<"test";
	
}
