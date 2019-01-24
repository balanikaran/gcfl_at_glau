#include <cmath>
#include <string>
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
    
    int i = 0;
    for(;i<size;i++){
        cin>>arr[i];
    }
    
    int eqPoint = 0;
    int lSum = 0;
    int rSum = 0;
    for(i = 0; i<size; i++){
        eqPoint = i;
        lSum = 0;
        rSum = 0;
        
        //for left sum
        for(int j=0; j<=eqPoint;j++){
            lSum += arr[j];
        }
        
        //for right sum
        for(int j=eqPoint; j<size; j++){
            rSum += arr[j];
        }
        
        if(lSum == rSum){
            cout<<lSum;
            break;
        }
        
        
    }
    
    if(i == size){
        cout<<-1;
    }
    
    return 0;
}
