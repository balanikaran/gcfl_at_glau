#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
string solve(long n) { 
    double x = (sqrt(8*n + 1) - 1) / 2;
    
    if(ceil(x) == x){
        return "Go On Bob " + to_string(int(x));
    }
    
    return "Better Luck Next Time";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
