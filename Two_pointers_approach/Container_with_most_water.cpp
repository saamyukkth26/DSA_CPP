#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int pointer1 = 0;
    int pointer2 = height.size()-1;
    int area = INT_MIN;
    while(pointer1<pointer2)
    {
        int breadth = pointer2-pointer1;
        int height1 = min(height[pointer1],height[pointer2]);
        area = max(area,breadth*height1);
        if (height[pointer1]<height[pointer2])
        {
            pointer1++;
        }
        else
        {
            pointer2--;
        }
    }
    cout<<area<<endl;
    return 0;
}
