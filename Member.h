#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

class Member
{
private:
    int memberId;
    string name;

public:
    Member();
    Member(int id, string n);

    int getMemberId() const;
    string getName() const;

    void display() const;
};

#endif