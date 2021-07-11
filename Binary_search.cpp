#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
   // int mid;
    int f=0;
    int l=n;
    int mid=0;
    while(f<=l){
         mid=(f+l)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            l=mid-1;
        }
        else{
            f=mid+1;
        }

    }
    return -1;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    int key;
	cin>>key;
	cout<<binarysearch(arr,n,key);
	return 0;
}
