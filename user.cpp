// User.cpp
#include "User.h"
#include <iostream>

User::User(const std::string& userID, const std::string& name)
    : userID(userID), name(name) {}

std::string User::getUserID() const {
    return userID;
}

std::string User::getName() const {
    return name;
}

Member::Member(const std::string& userID, const std::string& name)
    : User(userID, name) {}

void Member::displayRole() {
    std::cout << "Role: Member" << std::endl;
}

Admin::Admin(const std::string& userID, const std::string& name)
    : User(userID, name) {}

void Admin::displayRole() {
    std::cout << "Role: Admin" << std::endl;
}
