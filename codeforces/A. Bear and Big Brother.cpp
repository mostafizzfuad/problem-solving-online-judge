// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int limak, bob, year = 0;
    cin >> limak >> bob;
   
    while (1) 
    {
        if (limak > bob) break;
        else {
            year++;
            limak *= 3;
            bob *= 2;
        }
    }

    cout << year << endl;
}