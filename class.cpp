// 22P31A0539
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:\\PROGRAMS\\input.txt", "r", stdin);
    freopen("E:\\PROGRAMS\\output.txt", "w", stdout);
#endif
}
class College
{
private:
    string branch = "CSE";

public:
    string name, roll, campus, affiliation;
    static string location;
    // Constructor
    College(string name, string roll, string campus, string affiliation)
    {
        this->name = name;
        this->roll = roll;
        this->campus = campus;
        this->affiliation = affiliation;
    }

    void display();
    void modify();

}; // end of class
string College::location = "Surampalem";
// Member Functions Outside of the class
void College::display()
{
    cout << endl
        << name << " " << roll << " "
        << " " << campus << " " << affiliation << endl;
    cout << branch << endl;
    cout << location << endl;
}

void College::modify()
{
    branch = "Computer Science & Engineering";
}

int main()
{
    takeinput();
    // Your C++ code goes here
    College c1("Teja", "539", "ACET", "JNTUK");
    c1.display();
    c1.modify();
    c1.display();
}