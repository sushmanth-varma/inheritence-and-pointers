#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4};
	int size=sizeof arr/sizeof(arr[0]);
	 int *ptr=arr;
	for(int i=0;i<size;i++){
		cout<<*(ptr+i)<<" ";
	}
}