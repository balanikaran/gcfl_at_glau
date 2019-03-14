#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin>>size;
    int arr[size];
    int i;
    
    for(i=0; i<size; i++){
        cin>>arr[i];
    }
    
    int d1, d2, d3, actualD;
    d1 = arr[1] - arr[0];
    d2 = arr[2] - arr[1];
    
    if(d1 == d2){
        actualD = d1;
    }else{
        d3 = arr[3] - arr[2];
        if(d1 < d2){
            if(d3 == d1){
                actualD = d3;
            }
        }else{
            if(d3 == d2){
                actualD = d3;
            }
        }
    }
    
    int a = arr[0];
    int tn, found = 0;
    for(i=0; i<size; i++){
        tn = a + i * actualD;
        if(arr[i] != tn){
            found = 1;
            cout<<"The missing element is "<<tn;
            break;
        }
    }
    
    if(found == 0){
        tn = arr[0] - actualD;
        if(tn > 0){
            cout<<"The missing element is "<<tn;
        }else{
            cout<<"The missing element is "<<arr[size-1] + actualD;
        }
    }
    
    
    
    return 0;
}
