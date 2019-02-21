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
    int price[size];
    int i;
    for (i=0; i<size; i++){
        cin>>price[i];
    }
    int count;
    for (i=0; i<size; i++){
        int j = i;
        count = 0;
        while(j>=0 && price[j]<=price[i]){
            count++;
            j--;
        }
        cout<<count<<" ";
    }
    return 0;
}
