// Book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string isbn;
    std::string title;
    std::string author;
    bool isAvailable;

public:
    Book(const std::string& isbn, const std::string& title, const std::string& author);

    std::string getISBN() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool checkAvailability() const;
    void setAvailability(bool status);
};

#endif // BOOK_H
