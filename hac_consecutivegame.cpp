#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,a[100];
    cin >> n;
    for(int i=0; i<n ; i++)
    {
        cin >> a[i];
    }       /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for(int i=0; i<n; i++)
    {
        if(n==a[i])
        {
            cout << "1" ;
        }
        else
        {
            cout << "0" ;
        }
    }
    
    return 0;
}
