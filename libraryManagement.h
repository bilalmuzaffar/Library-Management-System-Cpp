#include<vector>
#include"book.h"
#include"member.h"
#include<iostream>
using namespace std;
class LibraryManager{
    private:
    vector<Book>books;
    vector<Member>members;
    public:
    void addBook(const Book& book) {books.push_back(book);}
    void addMember(const Member& member) {members.push_back(member);}

    bool loanBook(const string& isbn, int memberId){
        for (Book& book:books){
            if(book.getisbn()==isbn && book.getAval()){
                for(Member& member:members){
                    if(member.getId()==memberId){
                        book.setAval(false);
                        member.loanBook();
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool returnBook(const string& isbn, int memberId){
        for (Book& book:books){
            if(book.getisbn()==isbn && !book.getAval()){
                for(Member& member:members){
                    if(member.getId()==memberId){
                        book.setAval(true);
                        member.returnBook();
                        return true;
                    }
                }
            }
        }
        return false;
    }

    void showAllBooks() const{
        for(const Book& book:books){
            book.showBookDetails();
            cout<<"---------------------"<<endl;
        }
    }
    void showAllMembers() const{
        for(const Member& member:members){
            member.showMemberDetails();
            cout<<"---------------------"<<endl;
        }
    }

};  

