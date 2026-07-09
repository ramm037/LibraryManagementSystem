#include <iostream>
#include "Member.h"

using namespace std;

Member::Member()
{
    memberId = 0;
    name = "";
}

Member::Member(int id, string n)
{
    memberId = id;
    name = n;
}

int Member::getMemberId() const
{
    return memberId;
}

string Member::getName() const
{
    return name;
}

void Member::display() const
{
    cout << "Member ID: " << memberId << endl;
    cout << "Name: " << name << endl;
}
