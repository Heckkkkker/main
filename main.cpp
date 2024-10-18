// main.cpp
#include <iostream>
#include "Library.h"
#include "Loan.h"

int main() {
    Library library;

    // Add books
    library.addBook(Book("123", "The Great Gatsby", "F. Scott Fitzgerald"));
    library.addBook(Book("456", "1984", "George Orwell"));

    // Add users
    User* admin = new Admin("001", "Alice");
    User* member = new Member("002", "Bob");

    library.addUser(admin);
    library.addUser(member);

    // Display all books and users
    library.displayAllBooks();
    library.displayAllUsers();

    // Borrow a book
    Book* book = library.findBookByISBN("123");
    Loan loan(book, member);
    loan.issueBook();

    // Return a book
    loan.returnBook();

    // Show loan details
    loan.displayLoanDetails();

    return 0;
}
