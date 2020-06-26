#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int age;
    int weight;
    string name;

public:
    Student()//constructor by default
    {
        age = 0;
        weight = 0;
        name = "Noname";
    }
    Student(int valAge, int valWeight, string valName)//constructor with arguements
    {
        age = valAge;
        weight = valWeight;
        name = valName;

    }
    int GetAge()
    {
        return age;
    }
    int GetWeight()
    {
        return weight;
    }
    void SetAge(int value)
    {
        age = value;
    }
    void SetWeight(int value)
    {
        weight = value;
    }
    string GetName()
    {
        return name;
    }
    void SetName(string str)
    {
        name = str;
    }

};

int main()
{
    Student FirstStud(15, 75, "Ivanov Sergej Prtrovich");
    cout<<"Age: "<< FirstStud.GetAge()<< endl;
    cout <<"Weight: "<< FirstStud.GetWeight() << endl;
    cout <<"Name: "<< FirstStud.GetName() << endl;
    Student SecondStud;
    cout << "Age: " << SecondStud.GetAge() << endl;
    cout << "Weight: " << SecondStud.GetWeight() << endl;
    cout << "Name: " << SecondStud.GetName() << endl;
    return 0;
}

