#include<iostream>
using namespace std;

int main(){
	int temp = 0;
//	int temp2 = 0;
	int arrSize;
	cout<<"Enter Array Size : ";
	cin>>arrSize;
	cout<<"\n";
	int arr[arrSize];
	
	for(int a = 0; a<arrSize;a++){
		cout<<"Index No : ";
		cin>>arr[a];
	}
	cout<<"Your Array : ";
	for(int o = 0; o<arrSize; o++){
		cout<<arr[o]
			<<" ";
	}
//	int arrSize = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i<arrSize; i++){
		for(int j = i+1; j<arrSize; j++){
			if(j!=arrSize){
				if(arr[i]>arr[j]){
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
				if(arr[i] == arr[j]){
					temp = arr[i+1];
					arr[i+1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	cout<<"\nAssending order : ";
	for(int k = 0; k<arrSize; k++){
		cout<<arr[k]
			<<" ";
	}
	cout<<"\nDecending order : ";
	for(int m = arrSize-1;m>-1; m--){
		cout<<arr[m]
			<<" ";
	}

}

