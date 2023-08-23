#include <bits/stdc++.h>
using namespace std;
#define add push_back
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
    vector<int> A(4, 100); 
    // vector of size 4 is already declared which has 4 100s
    A.add(4);
    A.add(3);
    A.add(2);
    A.add(1);
    for(auto it:A){
        cout << it << " ";
    }
}