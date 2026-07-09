#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
private:
    int bookId;
    string title;
    string author;
    bool isAvailable;

public:
    Book();
    Book(int id, string t, string a);

    int getBookId() const;
    string getTitle() const;
    string getAuthor() const;
    bool getAvailability() const;

    void setAvailability(bool status);
    void display() const;
};

#endif
