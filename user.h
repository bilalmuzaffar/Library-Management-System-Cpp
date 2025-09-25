#include<string>
#include <iostream>
using namespace std;
class User{
private:
    string name;
    int id;

public:
    User(): name("") , id(0) {}
    User(string Name , int Id) {
        name=Name;
        id=Id;
    }

    void setName(string Name) { name=Name;}
    void setId(int Id) {id=Id;}

    string getName()const {return name;}
    int getId()const {return id;}

    void UserDetails()const{
        cout<<"Name :- "<<name<<endl;
        cout<<"ID :- "<<id<<endl;
    }
};