#include<iostream>

using namespace std;
int main(){
	int temp2 = 0;
	int temp  = -1;
	int arr[] = {1,2,3,4,5,7,9,5,8,1,5};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	int dArr[arrSize];
	for(int i = 0; i<arrSize; i++){
		for(int j = i+1; j<arrSize; j++){
			if(j!=arrSize){
				if(i==j){
					dArr[temp2] = arr[i];
					temp2++;
				}
			}
		}
	}
	for(int m = 0; m<=temp2; m++){
		cout<<dArr[m]<<" ";
	}
}
