#pragma once

#ifndef PRIMITIVEMODEL_H
#define PRIMITIVEMODEL_H

#include <iomanip>

///
/// \brief The PrimitiveModel class
///
class PrimitiveModel
{
public:
    // удаления объектов производных классов по указателю на базовый класс
    virtual ~PrimitiveModel();
    // чисто виртуальный метод для переопределения в наследнике
    virtual std::string sendName() = 0;

protected:
    // конструктор
    PrimitiveModel(std::string name_);

    // название примитива
    std::string  name;
};

///
/// \brief The CircleModel class
///
class CircleModel : public PrimitiveModel
{
public:
    CircleModel();

    std::string sendName() override;
};

///
/// \brief The Triangle class
///
class TriangleModel : public PrimitiveModel
{
public:
    TriangleModel();

    std::string sendName() override;
};

///
/// \brief The SquareModel class
///
class SquareModel : public PrimitiveModel
{
public:
    SquareModel();

    std::string sendName() override;

};

#endif // PRIMITIVEMODEL_H
