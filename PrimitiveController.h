#ifndef PRIMITIVECONTROLLER_H
#define PRIMITIVECONTROLLER_H


#include <string>
#include <vector>
#include <iostream>
#include "PrimitiveModel.h"


class PrimitiveController
{
public: 
    PrimitiveController(std::string name_);
    PrimitiveController(const PrimitiveController& d);
    ~PrimitiveController();

    void drawPrimitive (PrimitiveModel * somePrimitive);


    void deletePrimitive ();

    void rename(std::string name_);

    std::string sendName() const;

    std::string loging();

private:
    std::vector<PrimitiveModel * > primitives;
    std::string name;

    std::string log_text;
};

#endif // PRIMITIVECONTROLLER_H
