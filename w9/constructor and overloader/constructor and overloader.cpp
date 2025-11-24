#include <iostream>
#include "Book.h"
using namespace std;

int main() {
    Book book1; // Will eventually call the default constructor
   
    book1.setTitle("1984");
    book1.setAuthor("George Orwell");
    book1.setYear(1949);

    cout << book1.getTitle() << " by " << book1.getAuthor()
        << " (" << book1.getYear() << ")" << endl;

    Book book2; // Another book object
    book2.setTitle("To Kill a Mockingbird");
    book2.setAuthor("Harper Lee");
    book2.setYear(1960);

    cout << book2.getTitle() << " by " << book2.getAuthor()
        << " (" << book2.getYear() << ")" << endl;

    // When main ends, a destructor should run automatically
    return 0;
}