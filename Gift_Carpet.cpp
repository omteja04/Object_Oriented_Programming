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

int main()
{
    takeinput();
    // Your C++ code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int i, j;
        // cout << "hi" << endl;
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
        // if(m<4 and n<4) find = false;
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
        // cout << frq[0] << endl;
        if(frq[0]==INT_MAX){
            cout << "NO\n";
            continue;
        }
        for (i = 0; i < m; i++)
        {
            for (j = frq[0]+1; j < n; j++)
            {
                if (arr[i][j] == 'i')
                {
                    frq[1] = min(j, frq[1]);
                }
            }
        }
        // cout << frq[1] << endl;
        if (frq[1] == INT_MAX)
        {
            cout << "NO\n";
            continue;
        }
        for (i = 0; i < m; i++)
        {
            for (j = frq[1]+1; j < n; j++)
            {
                if (arr[i][j] == 'k')
                {
                    frq[2] = min(j, frq[2]);
                }
            }
        }
        // cout << frq[2] << endl;
        //j = min(0, frq[2]);
        if (frq[2] == INT_MAX)
        {
            cout << "NO\n";
            continue;
        }
        for (i = 0; i < m; i++)
        {
            for (j = frq[2]+1; j < n; j++)
            {
                if (arr[i][j] == 'a')
                {
                    frq[3] = min(j, frq[3]);
                }
            }
        }
        if (frq[4] == INT_MAX)
        {
            cout << "NO\n";
            continue;
        }
        // cout << frq[3] << endl;
        for (int k = 0; k < 4; k++)
        {
            // cout << frq[k] << endl;
            if (frq[k] == INT_MAX)
                find = false;
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
