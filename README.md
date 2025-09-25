# Library-Management-System-Cpp
A C++ project for managing books and members in a library using OOP concepts.
A simple Library Management System built in C++ using Object-Oriented Programming (OOP) concepts.
This project manages books and members in a library and allows users to loan and return books.

🚀 Features

Add new books 📖

Add new members 👤

Loan a book to a member 🔄

Return a book ✅

Display all books in the library

Display all members in the library

🛠 Technologies Used

C++ (Object-Oriented Programming)

STL Vectors for managing books & members

LibraryManagementSystem/
│── book.h                # Book class (title, author, ISBN, availability)
│── user.h                # Base User class (name, ID)
│── member.h              # Derived Member class (books loaned)
│── libraryManagement.h   # LibraryManager class (manages books & members)
│── main.cpp              # Main driver code
│── README.md             # Project documentation

For compiling the code :- g++ main.cpp -o library
To run the program:- ./library

SAMPLE OUTPUT:-

All Books in the Library:
Title: The Great Gatsby
Author: F. Scott Fitzgerald
ISBN: 9780743273565
Available: Yes
---------------------
Title: 1984
Author: George Orwell
ISBN: 9780451524935
Available: Yes
---------------------

All Members in the Library:
Name: Alice
ID: 1
Books Loaned: 0
---------------------
Name: Bob
ID: 2
Books Loaned: 0
---------------------

Loaning '1984' to Alice (ID: 1)
Loan successful!

All Books after loaning:
Title: The Great Gatsby
Author: F. Scott Fitzgerald
ISBN: 9780743273565
Available: Yes
---------------------
Title: 1984
Author: George Orwell
ISBN: 9780451524935
Available: No
---------------------

👨‍💻 Author

Bilal Muzaffar
💼 Data Science Student | C++ & Python Learner | Tech Enthusiast





