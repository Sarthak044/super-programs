#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int mx = arr[0];
    int s_mx = INT_MIN;
    for (i=0; i<n;i++){
        if (arr[i]>mx){
            mx = arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i] != mx){
            if(arr[i] > s_mx ){
                s_mx = arr[i];
            }
        }
    }
    cout<<s_mx<<endl;
}