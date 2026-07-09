#include <iostream>
#include "Book.h"

using namespace std;

Book::Book() {
    bookId = 0;
    title = "";
    author = "";
    isAvailable = true;
}

Book::Book(int id, string t, string a){
    bookId = id;
    title = t;
    author = a;
    isAvailable = true;
}

int Book::getBookId() const {
    return bookId;
}

string Book::getTitle() const{
    return author;
}

bool Book::getAvailability() const {
    return isAvailable;
}

void Book::setAvailability(bool status){
    isAvailable = status;
}

void Book::display() const{
    cout << "Book ID: " << bookId << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Available: " << (isAvailable ? "Yes" : "No") << endl;
}