// Book.cpp
#include "Book.h"

Book::Book(const std::string& isbn, const std::string& title, const std::string& author)
    : isbn(isbn), title(title), author(author), isAvailable(true) {}

std::string Book::getISBN() const {
    return isbn;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

bool Book::checkAvailability() const {
    return isAvailable;
}

void Book::setAvailability(bool status) {
    isAvailable = status;
}
