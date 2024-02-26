
#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_

#include <iostream>

class I_Printable{//Abstract class
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
    public:
    virtual void print(std::ostream &os)const =0; //PVF
    virtual ~I_Printable()=default;
};

#endif