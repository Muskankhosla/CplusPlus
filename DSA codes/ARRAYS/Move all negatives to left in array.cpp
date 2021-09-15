#include <bits/stdc++.h>      //logic:    -12   11   -13   -5    6    -9
                             //            ^     
                            //             j,i   
                           //              i     j     
                          //                     i    j
                         //                           i     j
using namespace std;    // j=0->a[j]=-12 if a[i]<0(negative element) and  value of i!= value of j then swap elements
int main(){            // increament j;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
      int j=0;
      for(int i=0;i<n;i++){
        if(a[i]<0){
            if(i!=j){
                swap(a[i],a[j]);
            }j++;
        }
        
    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }
}
