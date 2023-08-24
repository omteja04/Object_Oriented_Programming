#include <bits/stdc++.h>
using namespace std;
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:\\PROGRAMS\\input.txt", "r", stdin);
    freopen("E:\\PROGRAMS\\output.txt", "w", stdout);
#endif
}
class Solution
{
public:
    int trappingWater(int arr[], int n)
    {
        int trapped_water = 0, leftmax = 0, rightmax = 0;
        int left = 0, right = n - 1;
        while (left <= right)
        {
            if (arr[left] < arr[right])
            {
                if (arr[left] > leftmax)
                {
                    leftmax = arr[left];
                }
                else
                {
                    trapped_water += leftmax - arr[left];
                }
                left++;
            }
            else
            {
                if (arr[right] > rightmax)
                {
                    rightmax = arr[right];
                }
                else
                {
                    trapped_water += rightmax - arr[right];
                }
                right--;
            }
        }
        return trapped_water;
    }
};

int main()
{
    takeinput();
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution obj;
    int res = obj.trappingWater(arr, n);
    cout << res << endl;
}