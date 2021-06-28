#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class contact
{
private:
    std::string _f_name;
    std::string _l_name;
    std::string _nickname;
    std::string _login;
    std::string _postal;
    std::string _email;
    std::string _phone;
    std::string _birth_date;
    std::string _fav_meal;
    std::string _underwear;
    std::string _dark_secret;
public:
    contact();
    ~contact();

    bool setContact(void);
    void introduce(void);
    bool isEmpty(void);

    std::string getFName(void) const;
    std::string getLName(void) const;
    std::string getNickname(void) const;
    std::string getLogin(void) const;
    std::string getPostal(void) const;
    std::string getEmail(void) const;
    std::string getPhone(void) const;
    std::string getBirth(void) const;
    std::string getMeal(void) const;
    std::string getUnder(void) const;
    std::string getSecret(void) const;

    void setFName(const std::string &value);
    void setLName(const std::string &value);
    void setNickname(const std::string &value);
    void setLogin(const std::string &value);
    void setPostal(const std::string &value);
    void setEmail(const std::string &value);
    void setPhone(const std::string &value);
    void setBirth(const std::string &value);
    void setMeal(const std::string &value);
    void setUnder(const std::string &value);
    void setSecret(const std::string &value);
};

#endif