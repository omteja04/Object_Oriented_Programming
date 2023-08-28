#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:\\PROGRAMS\\input.txt", "r", stdin);
    freopen("E:\\PROGRAMS\\output.txt", "w", stdout);
#endif
}
class Gift_Carpet
{

public:
    void check()
    {
        int tc;
        cin >> tc;
        while (tc--)
        {
            int i, j;
            int m, n;
            cin >> m >> n;
            char arr[m][n];

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cin >> arr[i][j];
                }
            }

            bool find = true;
            vector<int> frq(4, INT_MAX);

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (arr[i][j] == 'v')
                    {
                        frq[0] = min(j, frq[0]);
                    }
                }
            }

            if (frq[0] == INT_MAX)
            {
                cout << "NO\n";
                continue;
            }

            for (i = 0; i < m; i++)
            {
                for (j = frq[0] + 1; j < n; j++)
                {
                    if (arr[i][j] == 'i')
                    {
                        frq[1] = min(j, frq[1]);
                    }
                }
            }

            if (frq[1] == INT_MAX)
            {
                cout << "NO\n";
                continue;
            }

            for (i = 0; i < m; i++)
            {
                for (j = frq[1] + 1; j < n; j++)
                {
                    if (arr[i][j] == 'k')
                    {
                        frq[2] = min(j, frq[2]);
                    }
                }
            }

            if (frq[2] == INT_MAX)
            {
                cout << "NO\n";
                continue;
            }

            for (i = 0; i < m; i++)
            {
                for (j = frq[2] + 1; j < n; j++)
                {
                    if (arr[i][j] == 'a')
                    {
                        frq[3] = min(j, frq[3]);
                    }
                }
            }

            if (frq[3] == INT_MAX)
            {
                cout << "NO\n";
                continue;
            }

            for (int k = 0; k < 4; k++)
            {
                if (frq[k] == INT_MAX)
                {
                    find = false;
                    break; // No need to continue checking if one condition fails
                }
            }

            if (find)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
};

int main()
{
    takeinput();
    // Your C++ code goes here
    Gift_Carpet vika;
    vika.check();
}