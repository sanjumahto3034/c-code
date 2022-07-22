#include<iostream>
using namespace std;
int main(){
	int temp = 0;
	int temp2 = 0;
	int arr[] = {1,2,3,4,5,7,8,9,10,12,15,16,17,20,100};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	
	for(int i = 0; i<arrSize; i++){
		if(i != arrSize-1){
			temp = arr[i+1];
			temp--;
			temp2 = arr[i];
				if(arr[i] == temp ){
					
				}
				else{
					if(temp-1 == arr[i]){
						cout<<temp<<" ";
					}
					else{
						while(temp!=temp2){
							temp2++;
							cout<<temp2<<" ";
						}
					}
					
				
				}
		}
	}
}
