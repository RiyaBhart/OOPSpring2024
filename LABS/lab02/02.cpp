/*
Name: Riya Bhart
Roll ID: 23k-0063
*/
#include <iostream>
using namespace std;

struct Book
{
    string title;
    string author;
    int year;
    string genre;
};

void addbook(Book book[], int &num)
{
    cout << "Enter Book Title: " << endl;
    cin >> book[num].title;
    cout << "Enter Book author: " << endl;
    cin >> book[num].author;
    cout << "Enter year of publication: " << endl;
    cin >> book[num].year;
    cout << "Enter genre : " << endl;
    cin >> book[num].genre;
    num++;
}

void updatebook(Book book[], int &num)
{
    string upbook;
    bool found = false;
    cout << "Enter the book title to be updated: " << endl;
    cin >> upbook;
    for (int i = 0; i < num; i++)
    {
        if (book[i].title == upbook)
        {
            cout << "Enter the new title: " << endl;
            cin >> book[i].title;
            cout << "Enter the new author: " << endl;
            cin >> book[i].author;
            cout << "Enter the new year of publication: " << endl;
            cin >> book[i].year;
            cout << "Enter the new genre: " << endl;
            cin >> book[i].genre;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Book with given title not found." << endl;
    }
}

void searchbookbyauthor(Book book[], int &num)
{
    string authorname;
    cout << "Enter the name of author: " << endl;
    cin >> authorname;
    bool found = false;
    for (int i = 0; i < num; i++)
    {
        if (book[i].author == authorname)
        {
            cout << "Book Title:  " << book[i].title << endl;
            cout << "Book Author:  " << book[i].author << endl;
            cout << "Book Year of publication:  " << book[i].year << endl;
            cout << "Book Genre:  " << book[i].genre << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Book not found." << endl;
    }
}

void searchbookbytitle(Book book[], int &num)
{
    string bookname;
    cout << "Enter the title of book: " << endl;
    cin >> bookname;
    bool found = false;
    for (int i = 0; i < num; i++)
    {
        if (book[i].title == bookname)
        {
            cout << "Book Title:  " << book[i].title << endl;
            cout << "Book Author:  " << book[i].author << endl;
            cout << "Book Year of publication:  " << book[i].year << endl;
            cout << "Book Genre:  " << book[i].genre << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Book not found." << endl;
    }
}

int main()
{
    int choice;
    // cout<<"Enter the maximum number of books: ";
    // cin>>num;
    cout << "-----Library Management System-------" << endl;
    cout << "Select your operation" << endl;
    cout << "1. Add new Book" << endl;
    cout << "2. Update Data of existing Book" << endl;
    cout << "3. Search Book by Author" << endl;
    cout << "4. Search Book by Title" << endl;
    cin >> choice;
    int max_book = 100;
    int num = 0;
    Book book[max_book];
    switch (choice)
    {
    case 1:
        addbook(book, num);
        break;
    case 2:
        updatebook(book, num);
        break;
    case 3:
        searchbookbyauthor(book, num);
        break;
    case 4:
        searchbookbytitle(book, num);
        break;
    default:
        cout << "Wrong choice. Exiting Program";
        return 0;
    }

    return 0;
}
