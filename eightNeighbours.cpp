#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int numberOfOnesInNeighbour(int before[6][6], int indexI, int indexJ){
    
    int no1 = 0;
    
    for(int i = indexI-1; i<=(indexI+1); i++){
        for(int j = indexJ-1; j<=(indexJ+1); j++){
            if(i == indexI && j == indexJ){
                continue;
            }else{
                if(before[i][j] == 1){
                    no1 += 1;
                }
            }
        }
    }

    return no1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int r1a, r1b, r0a, r0b, k, i, j, z;
    cin>>r1a;
    cin>>r1b;
    cin>>r0a;
    cin>>r0b;
    cin>>k;
    
    int before[6][6] = {
        0,0,0,0,0,0,
        0,0,0,0,0,0,
        0,0,1,1,0,0,
        0,0,0,1,0,0,
        0,0,1,0,1,0,
        0,0,0,0,0,0
    }, after[6][6];
    
    int temp1;
    for(z=1; z<=k; z++){
        // swapping arr
        for(i=1; i<5; i++){
            for(j=1; j<5; j++){
                temp1 = numberOfOnesInNeighbour(before, i, j);
                if (before[i][j] == 1){
                    if(0<=temp1 && r1a<=temp1 && temp1<=r1b){
                        after[i][j] = 1;
                    }else{
                        after[i][j] = 0;
                    }
                }else if(before[i][j] == 0){
                    if(0<=temp1 && r0a<=temp1 && temp1<=r0b){
                        after[i][j] = 1;
                    }else{
                        after[i][j] = 0;
                    }
                }
            }
        }
        
        // saving new arr into before
        for(i=0; i<6; i++){
            for(j=0; j<6; j++){
                before[i][j] = after[i][j];
            }
        }
    }
    
    // show swapped arr
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            cout<<after[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
    
    return 0;
}
