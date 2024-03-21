#include <iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    string publisher;
    Book(string title, string author,string publisher){
        this->title=title;
        this->author=author;
        this->publisher=publisher;
    }
};
class FictionBook:public Book{
    public:
    string genre;
    string protagonist;
    FictionBook(string genre,string protagonist,string title,string author,string publisher):Book(title,author,publisher){
        this->genre=genre;
        this->protagonist=protagonist;
    }
    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Publisher: "<<publisher<<endl;
        cout<<"Genre: "<<genre<<endl;
        cout<<"Protagonist: "<<protagonist<<endl;
    }
};
int main(){
    FictionBook f1("funny","bb","Coolen","Hoover","ABC");
    f1.display();
    return 0;
} 
