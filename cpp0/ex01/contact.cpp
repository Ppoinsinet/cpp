#include "contact.hpp"

contact::contact()
{}

contact::~contact()
{}

bool contact::setContact()
{
    std::cout << "\tFirst Name :";
    getline(std::cin, _f_name);
    std::cout << "\tLast Name :";
    getline(std::cin, _l_name);
    std::cout << "\tNickname :";
    getline(std::cin, _nickname);
    std::cout << "\tLogin :";
    getline(std::cin, _login);
    std::cout << "\tPostal Address :";
    getline(std::cin, _postal);
    std::cout << "\tEmail Address :";
    getline(std::cin, _email);
    std::cout << "\tPhone Number :";
    getline(std::cin, _phone);
    std::cout << "\tBirthday Date :";
    getline(std::cin, _birth_date);
    std::cout << "\tFavorite meal :";
    getline(std::cin, _fav_meal);
    std::cout << "\tFavorite underwear color:";
    getline(std::cin, _underwear);
    std::cout << "\tDark Secret :";
    getline(std::cin, _dark_secret);
    return isEmpty();
}

void contact::introduce()
{
    std::cout << "\tFirst Name : " << _f_name << std::endl;
    std::cout << "\tLast Name : " << _l_name << std::endl;
    std::cout << "\tNickname : " << _nickname << std::endl;
    std::cout << "\tLogin : " << _login << std::endl;
    std::cout << "\tPostal Address : " << _postal << std::endl;
    std::cout << "\tEmail Address : " << _email << std::endl;
    std::cout << "\tPhone Number : " << _phone << std::endl;
    std::cout << "\tBirthday Date : " << _birth_date << std::endl;
    std::cout << "\tFavorite meal : " << _fav_meal << std::endl;
    std::cout << "\tFavorite underwear color : " << _underwear << std::endl;
    std::cout << "\tDark Secret : " << _dark_secret << std::endl;
}

bool contact::isEmpty(void)
{
    if (!_f_name.size() && !_l_name.size() && !_nickname.size()
    && !_login.size() && !_postal.size() && !_email.size()
    && !_phone.size() && !_birth_date.size() && !_fav_meal.size()
    && !_underwear.size() && !_dark_secret.size())
        return true;
    return false;
}


std::string contact::getFName(void) const
{ return _f_name; }
std::string contact::getLName(void) const
{ return _l_name; }
std::string contact::getNickname(void) const
{ return _nickname; }
std::string contact::getLogin(void) const
{ return _login; }
std::string contact::getPostal(void) const
{ return _postal; }
std::string contact::getEmail(void) const
{ return _email; }
std::string contact::getPhone(void) const
{ return _phone; }
std::string contact::getBirth(void) const
{ return _birth_date; }
std::string contact::getMeal(void) const
{ return _fav_meal; }
std::string contact::getUnder(void) const
{ return _underwear; }
std::string contact::getSecret(void) const
{ return _dark_secret; }

void contact::setFName(const std::string &value)
{ _f_name = value; }
void contact::setLName(const std::string &value)
{ _l_name = value; }
void contact::setNickname(const std::string &value)
{ _nickname = value; }
void contact::setLogin(const std::string &value)
{ _login = value; }
void contact::setPostal(const std::string &value)
{ _postal = value; }
void contact::setEmail(const std::string &value)
{ _email = value; }
void contact::setPhone(const std::string &value)
{ _phone = value; }
void contact::setBirth(const std::string &value)
{ _birth_date = value;}
void contact::setMeal(const std::string &value)
{ _fav_meal = value; }
void contact::setUnder(const std::string &value)
{ _underwear = value; }
void contact::setSecret(const std::string &value)
{ _dark_secret = value; }