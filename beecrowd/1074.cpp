// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 0) cout << "NULL" << endl;
        else if (n > 0) {
            if (n % 2 == 0) cout << "EVEN POSITIVE" << endl;
            else cout << "ODD POSITIVE" << endl;
        }
        else {
            if (n % 2 == 0) cout << "EVEN NEGATIVE" << endl;
            else cout << "ODD NEGATIVE" << endl;
        }
    }
}
