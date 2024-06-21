#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums(4);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(3);
    int pointer1 = 0;
    int pointer2 = nums.size()-1;
    int maxi = INT_MIN;
    sort(nums.begin(),nums.end());
    while(pointer1<pointer2)
    {
        maxi =  max(nums[pointer1]+nums[pointer2],maxi);
        pointer1++;
        pointer2--;
    }
    cout<<maxi<<endl;
    return 0;
}
