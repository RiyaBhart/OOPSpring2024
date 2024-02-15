/*
NAME : RIYA BHART 
ID : 23K-0063
*/

#include <iostream>
#include <string>
using namespace std;

class Book
{
    string name;
    string author;
    int ISBN;
    int total_page_count;
    int pagesRead;

public:
    Book()
    {
        name = "";
        author = "";
        ISBN = 0; 
        total_page_count = 0;
        pagesRead = 0;
    }
    Book(string namebook, string authora, int ISBNnum, int total_page_countnew)
    {
        name = namebook;
        author = authora;
        ISBN = ISBNnum;
        total_page_count = total_page_countnew;
        pagesRead = 0;
    }
    void PagesReadUpdate(int newpages)
    {
        pagesRead += newpages;
        if (pagesRead >= total_page_count)
        {
            pagesRead = total_page_count;
            cout << "You have finished the book" << endl;
        }
        else
        {
            cout << "Read " << pagesRead << " out of " << total_page_count << " pages." << endl;
        }
    }
};

int main()
{
    Book b1;
    Book b2("ABC", "XYZ", 1101, 50); 
    b2.PagesReadUpdate(5);
    b2.PagesReadUpdate(15);
    b2.PagesReadUpdate(20);
    b2.PagesReadUpdate(10);


    return 0;
}

