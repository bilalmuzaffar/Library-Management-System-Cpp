#include<iostream>
#include"libraryManagement.h"
int main(){
    LibraryManager libManager;

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565", true);
    Book book2("1984", "George Orwell", "9780451524935", true);
    libManager.addBook(book1);
    libManager.addBook(book2);

    Member member1("Alice", 1, 0);
    Member member2("Bob", 2, 0);
    libManager.addMember(member1);
    libManager.addMember(member2);

    cout << "All Books in the Library:" << endl;
    libManager.showAllBooks();

    cout << "All Members in the Library:" << endl;
    libManager.showAllMembers();

    cout << "Loaning '1984' to Alice (ID: 1)" << endl;
    if (libManager.loanBook("9780451524935", 1)) {
        cout << "Loan successful!" << endl;
    } else {
        cout << "Loan failed!" << endl;
    }

    cout << "All Books after loaning:" << endl;
    libManager.showAllBooks();

    cout << "Returning '1984' from Alice (ID: 1)" << endl;
    if (libManager.returnBook("9780451524935", 1)) {
        cout << "Return successful!" << endl;
    } else {
        cout << "Return failed!" << endl;
    }

    cout << "All Books after returning:" << endl;
    libManager.showAllBooks();

    return 0;
}