//2. 2D Array + loop Using the same arr[2][5] array you already wrote,
//write a nested loop that computes the sum of all 10 elements.

#include<iostream>
using namespace std;

int main()
{
    int arr[2][5] = {
        {1,2,3,4,5},{6,7,8,9,10}
    };
    int ans = 0;

    for(int i = 0;i<2;i++)
    {
        for(int j = 0;j<5;j++)
        {
             ans += arr[i][j];
        }
    }
    cout<<ans;

    return 0;
}
