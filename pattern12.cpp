#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numberOfLines, i, j;
    string singleLine = "";
    
    cin>>numberOfLines;
    
    for (i = 1; i<= numberOfLines; i++){
        singleLine = "";
        if (i % 2 == 0){
            //even
            singleLine += to_string(i+1);
            for (j = 1; j<=3; j++){
                singleLine += to_string(i);
            }
        }else{
            //odd
            for (j = 1; j<=3; j++){
                singleLine += to_string(i);
            }
            singleLine += to_string(i+1);
        }
        
        cout<<singleLine<<endl;
    }
    
    return 0;
}