//5. Classes (matches your current level)
//Make a Car public members brand (string), year (int), price (double).
//Create two Car objects with different values,
//and in main(), use an if to print which one is more expensive.

#include<iostream>
using namespace std;

class Car
{
public:
    string brand;
    int year;
    double price;
};
int main()
{
    Car car1, car2;
    car1.brand = "Porsche";//ignore spelling mistake pls
    car1.year = 2022;
    car1.price = 21000.89;

    car2.brand = "Tata";//tata claude
    car2.year = 1990;//im getting my energy with each question solved
    car2.price = 12311.99;

    if(car1.price > car2.price)
    {
        cout<<car1.brand<<" is more expensive!";
    }
    else
    {
        cout<<car2.brand<<" is more expensive!";
    }
    return 0;
}
