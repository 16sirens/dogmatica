#include "Book.h"
#include <iostream>

Book::Book()
{
   std::cout << "Object Created\n";
}

// Setters
void Book::setTitle(string t) {
    title = t;
}

void Book::setAuthor(string a) {
    author = a;
}

void Book::setYear(int y) {
    year = y;
}

// Getters
string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

int Book::getYear() {
    return year;
}

Book::~Book()
{
    std::cout << "Object Destroyed\n";
}
