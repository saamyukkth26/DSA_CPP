#include <iostream>
#include <unordered_map>
using namespace std;

//printing all the pairs of elements and their index values for a given a sum if it exits when adding them.

int main()
{
    unordered_map<int,int> ump;
    int arr[] = {4,9,1,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++)
    {
        ump[arr[i]] = i;
    }
    sort(arr,arr+n);
    int sum = 6;
    int pointer1 = 0;
    int pointer2 = n-1;
    while(pointer1<pointer2)
    {
        int csum = arr[pointer1] + arr[pointer2];
        if (csum>sum)
        {
            pointer2--;
        }
        else if (csum<sum)
        {
            pointer1++;
        }
        else
        {
            cout<<pointer1<<" "<<pointer2<<endl;
            cout<<"original index values "<<ump[arr[pointer1]]<<" "<<ump[arr[pointer2]]<<endl;
            pointer1++;
            pointer2--;
        }
    }
    return 0;
}