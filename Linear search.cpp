#include <iostream>
using namespace std;

int linearsearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }

}




int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int k;
	cin>>k;
	cout<<linearsearch(arr,n,k);
	return 0;
}

