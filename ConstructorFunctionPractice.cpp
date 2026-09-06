//Trying constructor function

#include<iostream>
using namespace std;

class Book
{
public:
    string title;
    int pages;
    double price;

    Book(string name, int pages, double price)
    {
        cout<<name<< pages<< price<<endl;
    }
};
int main()
{
    Book aBook("Harsh's Book", 56, 566.34);

    Book bBook("Alchemist ", 44, 8928.32);

    return 0;
}
