#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
  //int largest = arr[0];
  for(int i=0;i<n;i++)
  {
    //int largest=arr[i];
    if(i<=(n-k)){
    int largest =arr[i];
    for(int j=i;j<(i+k);j++)
    {
     if(largest<arr[j])
     largest=arr[j];
       
    }
    
    cout<<largest<<" ";
    }
  }
  cout<<'\n';
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
