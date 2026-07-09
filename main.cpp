#include <iostream>
#include "Book.h"
#include "Member.h"

using namespace std;

int main() {
    Book b1(101, "The Alchemist", "Paolo Coelho");
    Member m1(1, "Amit Sharma");

    cout << "=== BOOK DETAILS ===" << endl;
    b1.display();

    cout << "\n=== Member Details ===" << endl;
    m1.display();

    return 0;
}