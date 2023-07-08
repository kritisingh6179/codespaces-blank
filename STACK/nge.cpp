//next greater element
//tc= O(n^2)
#include <bits/stdc++.h>
using namespace std;
void nge(int arr[]){
    int a[6]={-1,-1,-1,-1,-1,-1};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]<arr[j]){a[i]=arr[j] ;break;}
        }
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    int arr[6]={1,2,4,3,7,6};
    nge(arr);
    return 0;
}
