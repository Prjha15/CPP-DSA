#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE VALUE OF n";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"ENTER THE VALUES";
        cin>>arr[i];
    }
    int max=arr[0];
    for (int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
  cout<<max;      
    return 0;
}

