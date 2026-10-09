#include<iostream>
#include<string>
using namespace std;
struct Employee{
    int id;
    string name;
    int salary;
    int experience;
};



int main()
{
    int n;
    cout<<"Enter the number of employee: "<<endl;
    cin>>n;
    Employee E[n];
    cout<<"Now enter the id , name , salary, experience of each employee respectively: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>E[i].id>>E[i].name>>E[i].salary>>E[i].experience;
    }
    int best=-1;
    for (int  i = 0; i < n; i++)
    {
        if (E[i].experience<3)
        {
            continue;    //ignore the person with less than 3 years of experience
        }
        if (best==-1)
        {
            best=i;//first eligible employee
        }
        //highest salary wins
        else if (E[i].salary>E[best].salary)
        {
            best=i;
        }
        else if (E[i].salary==E[best].salary && E[i].experience>E[best].experience)
        {
            best=i;
        }
        else if (E[i].salary==E[best].salary && E[i].experience==E[best].experience && E[i].id<E[best].id)
        {
            best=i;
        }
        
    }
    if (best==-1)
    {
        cout<<"No one found."<<endl;
    }
    else
    {
        cout<<"Employee= "<<E[best].name<<"; "<<"ID= "<<E[best].id<<"; "<<"Salary= "<<E[best].salary<<endl;
    }
    return 0;
}