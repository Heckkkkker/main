// Loan.h
#ifndef LOAN_H
#define LOAN_H

#include "Book.h"
#include "User.h"
#include <string>
#include <ctime>

class Loan {
private:
    Book* book;
    User* member;
    std::time_t issueDate;
    std::time_t returnDate;

public:
    Loan(Book* book, User* member);

    void issueBook();
    void returnBook();
    void displayLoanDetails();
};

#endif // LOAN_H
