#include<iostream>
using namespace std;

class Cars
{
public:
    string brand;
    string name;
    int modelNo;
    double price;

    Cars(string abrand, string aname, int amodelNo, double aprice)
    {
        brand = abrand;
        name = aname;
        modelNo = amodelNo;
        price = aprice;
    }
    Cars()
    {
        brand = "None";
        name = "None";
        modelNo = 0;
        price = 0;
    }
};


int main()
{
    //Cars car1("Lambo","Hurracan", 5, 30257.45);
    //cout<<car1.brand;

    Cars car2;
    cout<<car2.brand;

    return 0;
}
