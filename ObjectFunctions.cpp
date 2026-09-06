//Learning obect functions now

#include<iostream>
using namespace std;

class Job
{
    public:

    string scompany;
    int sduration;
    double ssalary;

    Job(string company, int duration, double salary)
    {
        scompany = company;
        sduration = duration;
        ssalary = salary;
    }

    bool isWish()
    {
        if(ssalary > 50000.50)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Job job1("Infosys", 5, 40000.2);
    Job job2("Anthropic", 10, 55000.34);

    cout<<job1.isWish()<<endl;
    cout<<job2.isWish();


    return 0;
}












