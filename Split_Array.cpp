#include<bits/stdc++.h>
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
    int max_subarray_cnt(vector<int> &nums, int mid)
    {
        int i, cnt = 1, sum = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (sum + nums[i] > mid)
            {
                cnt++;
                sum = nums[i];
            }
            else
            {
                sum += nums[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int> &nums, int k)
    {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans, sc;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            sc = max_subarray_cnt(nums, mid);
            if (sc > k)
            {
                low = mid + 1;
            }
            else
            {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};
int main(){
    takeinput();
    Solution obj;
    int num, subarray_cnt,res;
    cin >> num;
    vector<int> nums(num);
    for(auto &it:nums){
        cin >> it;
    }
    cin >> subarray_cnt;
    res=obj.splitArray(nums, subarray_cnt);
    cout << res;
}
