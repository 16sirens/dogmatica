#pragma once
#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;



public:
    void setTitle(string t);
    void setAuthor(string a);
    void setYear(int y);

    string getTitle();
    string getAuthor();
    int getYear();

    Book();
    ~Book();

    // TODO (Done): Students should add a constructor and destructor here
};

#endif