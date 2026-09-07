#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter size of array :";
    cin>>n;
    cout<<endl;
    int arr[n];

    cout<<"Enter elements:";

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Sorting!"<<endl;

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
