//Given string name = "Harsh Raundal";,
//loop through it character by character and
//count how many vowels (a, e, i, o, u — both cases) it contains.

#include<iostream>
using namespace std;

int main()
{
    string name ="Harsh Raundal";//its only 3 rn.
    int count = 0;
    for(int i = 0;i<name.length();i++)
    {
        if(name[i] == 'a' || name[i] =='e'||name[i] == 'i'||name[i] == 'o'|| name[i] =='u' ||name[i] =='A'||name[i] =='E'||name[i] =='I'||name[i] =='O'||name[i] =='U')
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
