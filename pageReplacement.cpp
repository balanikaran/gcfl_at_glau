#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numberOfPages, sizeOfLRU, i;
    cin>>numberOfPages;
    cin>>sizeOfLRU;
    
    int inputs[numberOfPages];
    
    for (i = 0; i<=numberOfPages; i++){
        cin>>inputs[i];
    }
    
    int lru[sizeOfLRU];
    
    for(i = 0; i<sizeOfLRU; i++){
        lru[i] = -1;
    }
    
    int currentInputPage  = -1, j, found = 0, pageFaults = 0, temp, foundAt = -1;
    for (i=0; i<numberOfPages; i++){
        currentInputPage = inputs[i];
        found = 0;
        //search in lru
        for(j=0; j<sizeOfLRU; j++){
            if(currentInputPage == lru[j]){
                found = 1;
                foundAt = j;
                break;
            }
        }
        
        // found = 1 means true
        if(found == 1){
            temp = currentInputPage;
            for(j=foundAt; j<sizeOfLRU-1; j++){
                lru[j] = lru[j+1];
            }
            lru[j] = temp;
        }else{
            //not found
            pageFaults += 1;
            for(j=0; j<sizeOfLRU-1; j++){
                lru[j] = lru[j+1];
            }
            lru[j] = currentInputPage;
        }
    }
    
    cout<<pageFaults;
    
    return 0;
}
