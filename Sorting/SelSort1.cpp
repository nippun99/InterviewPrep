#include<iostream>
using namespace std;
int SelSort(int a[],int n){
	for(int i=0;i<=n-2;i++){
		int min=i;
		for(int j=i+1;j<=n-1;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}	
}

int main(){
	int a[]={5,3,4,0,2,1};
	int n=sizeof(a)/sizeof(int);
 
 	SelSort(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
return 0;
}
