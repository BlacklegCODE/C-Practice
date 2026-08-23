#include<iostream>

using namespace std;

double cuber(double que)
{
    double ans= que*que*que;
    return ans ;
}

int main()
{
    cout << cuber(10.0);
    return 0;
}
