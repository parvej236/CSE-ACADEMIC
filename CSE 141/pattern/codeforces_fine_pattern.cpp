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

        int row = (2*n)-1, col = (2*n)-1;

        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                int x=min(i,abs(2*n-i));
                int y=min(j,abs(2*n-j));

                cout << max(n-x+1,n-y+1) << " ";
            }
            cout << endl;
        }

        cout << endl;
    }
}