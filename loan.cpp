// Loan.cpp
#include "Loan.h"
#include <iostream>
#include <ctime>

Loan::Loan(Book* book, User* member)
    : book(book), member(member), issueDate(std::time(nullptr)), returnDate(0) {}

void Loan::issueBook() {
    if (book->checkAvailability()) {
        book->setAvailability(false);
        std::cout << "Book issued to " << member->getName() << std::endl;
    } else {
        std::cout << "Book is currently unavailable." << std::endl;
    }
}

void Loan::returnBook() {
    book->setAvailability(true);
    returnDate = std::time(nullptr);
    std::cout << "Book returned by " << member->getName() << std::endl;
}

void Loan::displayLoanDetails() {
    std::cout << "Loan details: " << std::endl;
    std::cout << "Book: " << book->getTitle() << std::endl;
    std::cout << "Borrower: " << member->getName() << std::endl;
    std::cout << "Issued on: " << std::ctime(&issueDate);
    if (returnDate) {
        std::cout << "Returned on: " << std::ctime(&returnDate);
    } else {
        std::cout << "Not yet returned." << std::endl;
    }
}
