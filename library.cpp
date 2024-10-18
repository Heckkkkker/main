// Library.cpp
#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::removeBook(const std::string& isbn) {
    books.erase(std::remove_if(books.begin(), books.end(),
        [&isbn](Book& book) { return book.getISBN() == isbn; }), books.end());
}

Book* Library::findBookByISBN(const std::string& isbn) {
    for (Book& book : books) {
        if (book.getISBN() == isbn) {
            return &book;
        }
    }
    return nullptr;
}

void Library::addUser(User* user) {
    users.push_back(user);
}

void Library::removeUser(const std::string& userID) {
    users.erase(std::remove_if(users.begin(), users.end(),
        [&userID](User* user) { return user->getUserID() == userID; }), users.end());
}

User* Library::findUserByID(const std::string& userID) {
    for (User* user : users) {
        if (user->getUserID() == userID) {
            return user;
        }
    }
    return nullptr;
}

void Library::displayAllBooks() {
    for (const Book& book : books) {
        std::cout << "ISBN: " << book.getISBN() << ", Title: " << book.getTitle() << std::endl;
    }
}

void Library::displayAllUsers() {
    for (User* user : users) {
        std::cout << "User ID: " << user->getUserID() << ", Name: " << user->getName() << std::endl;
    }
}
