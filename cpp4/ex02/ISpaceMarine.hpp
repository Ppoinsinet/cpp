#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class ISpaceMarine
{
private:
    ISpaceMarine *next;
public:
    virtual ISpaceMarine* clone() const = 0;
    virtual void battleCry() const = 0;
    virtual void rangedAttack() const = 0;
    virtual void meleeAttack() const = 0;
    ISpaceMarine(/* args */);
    virtual ~ISpaceMarine();

    ISpaceMarine *getNext(void) const;
    void setNext(ISpaceMarine *value);
};


#endif