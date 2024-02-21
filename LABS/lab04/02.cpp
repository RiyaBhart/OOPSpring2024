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


    void setName(const string& newName) {
        name = newName;
    }

    void setAuthor(const string& newAuthor) {
        author = newAuthor;
    }

    void setISBN(int newISBN) {
        ISBN = newISBN;
    }

    void setTotalPageCount(int newTotalPageCount) {
        total_page_count = newTotalPageCount;
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

    
    void showBookInfo() const {
        cout<<"\n---- Book Information ----"<<endl;
        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Total Page Count: " << total_page_count << endl;
        cout << "Pages Read: " << pagesRead << endl;
    }
};

int main()
{
    Book b1;
    Book b2; 
    b2.setName("ABC");
    b2.setAuthor("XYZ");
    b2.setISBN(1101);
    b2.setTotalPageCount(50);

    b2.PagesReadUpdate(5);
    b2.PagesReadUpdate(15);
    b2.PagesReadUpdate(20);
    b2.PagesReadUpdate(10);

    
    b2.showBookInfo();

    return 0;
}
