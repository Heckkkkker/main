// User.h
#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    std::string userID;
    std::string name;

public:
    User(const std::string& userID, const std::string& name);
    virtual void displayRole() = 0;
    std::string getUserID() const;
    std::string getName() const;
};

class Member : public User {
public:
    Member(const std::string& userID, const std::string& name);
    void displayRole() override;
};

class Admin : public User {
public:
    Admin(const std::string& userID, const std::string& name);
    void displayRole() override;
};

#endif // USER_H
