#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size, i;
    cin>>size;
    int arr[size], t1 = 0;
    
    for(i = 0;i < size; i++){
        cin>>arr[i];
        if(arr[i] == 1){
            t1+=1;
        }
    }

    
    int start=0, end=start+t1-1, sub1 = 0, max1 = 0, fs = 0, fe = 0;
    
    while(end < size){
        for(i = start; i<=end; i++){
            if(arr[i] == 1){
                sub1+=1;
            }
        }
        if(max1 < sub1){
            max1 = sub1;
            fs = start;
            fe = end;
        }
        
        start += 1;
        end += 1;
        sub1 = 0;
    }
    
    int swaps = 0;
    
    for(i = fs; i<=fe; i++){
        if(arr[i] == 0){
            swaps+=1;
        }
    }
    
    cout<<swaps;
    
    return 0;
}
