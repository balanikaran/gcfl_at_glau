#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int days, before[8], after[8];
    int i, j;
    
    cin>>days;
    
    for(i=0; i<8; i++){
        cin>>before[i];
    }
    
    for(i=1; i<=days; i++){
        // swapping for 1 day(s)
        for(j=0; j<8; j++){
            if(j == 0){
                if(before[1] == 0){
                    after[j] = 0;
                }else{
                    after[j] = 1;
                }
                continue;
            }
            
            if(j == 7){
                if(before[6] == 0){
                    after[j] = 0;
                }else{
                    after[j] = 1;
                }
                continue;
            }
            
            if(before[j-1] == before[j+1]){
                after[j] = 0;
            }else{
                after[j] = 1;
            }
        }
        // saving swapped state in before arr
        for(j=0; j<8; j++){
            before[j] = after[j];
        }
    }
    
    // show swapped arr
    for(i=0; i<8; i++){
        cout<<after[i]<<" ";
    }
    
    return 0;
}
