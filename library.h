// Library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "User.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<User*> users;

public:
    void addBook(const Book& book);
    void removeBook(const std::string& isbn);
    Book* findBookByISBN(const std::string& isbn);

    void addUser(User* user);
    void removeUser(const std::string& userID);
    User* findUserByID(const std::string& userID);
    
    void displayAllBooks();
    void displayAllUsers();
};

#endif // LIBRARY_H
