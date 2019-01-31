#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, x, y, z;
    
    cin>>a;
    cin>>b;
    cin>>z;
    
    if(a>=b){
        x = z-b;
        y = a-z;
    }else{
        x = b-z;
        y = z-a;
    }
    
    
    //gcd of x and y
    int gcd = 1, i, range;
    if(abs(x) >= abs(y)){
        range = y;
    }else{
        range = x;
    }
    for(i = 1; i<=abs(range); i++){
        if(x%i == 0 && y%i == 0){
            gcd = i;
        }
    }
    
    if(x<0 && y<0){
        x = abs(x);
        y = abs(y);
    }
    
    cout<<x/gcd<<":"<<y/gcd;
    return 0;
}
