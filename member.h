#include<iostream>
#include"book.h"
#include"user.h"
using namespace std;

class Member:public User{
    private:
    int booksLoaned;
    public:
    Member():User(),booksLoaned(0){}
    Member(const string& Name,int Id,int BooksLoaned):User(Name,Id){
        booksLoaned=BooksLoaned;
    }

    void loanBook(){
        booksLoaned++;
    }
    void returnBook(){
        if(booksLoaned>0)booksLoaned--;
    }

    void showMemberDetails()const{
        UserDetails();
        cout<<"Books Loaned:"<<booksLoaned<<endl;
    }
};
