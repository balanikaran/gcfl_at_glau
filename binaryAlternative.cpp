#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char str[10000];
    int x, y, i, c0 = 0, c1 = 0;
    cin>>str;
    cin>>x;
    cin>>y;
    
    //counting number of 0 and 1
    i = 0;
    while(str[i] != '\0'){
        if(str[i] == '0'){
            c0+=1;
        }else if(str[i] == '1'){
            c1+=1;
        }
        i++;
    }
    
    
    string newStr = "";
    string conStr = "";
    
    for(i=0; i<x; i++){
        conStr+="0";
    }
    
    for(i=0; i<y; i++){
        conStr+="1";
    }
    
    do{
        if(c0 >= x && c1 >= y){
            newStr+=conStr;
            c0-=x;
            c1-=y;
        }else{
            break;
        }
    }while(1);
    
    for(i=0; i<c0; i++){
        newStr+="0";
    }
    
    for(i=0; i<c1; i++){
        newStr+="1";
    }
    
    cout<<newStr;
    return 0;
}
