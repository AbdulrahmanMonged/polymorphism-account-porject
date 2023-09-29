#ifndef __PRINTABLE_H__
#define __PRINTABLE_H__

#include <iostream>

class Printable {
    friend std::ostream &operator<<(std::ostream &os, const Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~Printable() {}
};

#endif // __PRINTABLE_H__
