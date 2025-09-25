#ifndef BOOK_H
#define BOOK_H
#include<iostream>
using namespace std;

class Book{
    private:
    string title;
    string author;
    string ISBN;
    bool aval;

    public:

    Book() : title(""),author(""),ISBN(""),aval(true) {}
    Book(string Title, string Author , string isbn , bool Aval){
        title=Title;
        author=Author;
        ISBN=isbn;
        aval=Aval;
    }

    void setTitle(string Title) {title=Title;}
    void setAuthor(string Author) {author=Author;}
    void setisbn(string isbn) {ISBN=isbn;}
    void setAval(bool Aval) {aval=Aval;}

    string getTitle() {return title;}
    string getAuthor() { return author;}
    string getisbn() { return ISBN;}
    bool getAval() { return aval; }


    void showBookDetails()const{
        cout<<"Title :- "<<title<<endl;
        cout<<"Author :- "<<author<<endl;
        cout<<"ISBN :- "<<ISBN<<endl;
        if(aval){
            cout<<"Available :- Yes"<<endl;
        }
        else{
            cout<<"Available :- No"<<endl;
        }
    }

};
#endif

