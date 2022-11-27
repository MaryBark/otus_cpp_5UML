#include "PrimitiveModel.h"

///
/// \brief PrimitiveModel::PrimitiveModel
/// \param name_
///
PrimitiveModel::PrimitiveModel(std::string name_)
    : name(name_)
{}

PrimitiveModel::~PrimitiveModel()
{}

///
/// \brief CircleModel::CircleModel
///
CircleModel::CircleModel() :
    PrimitiveModel("Circle")
{}

std::string CircleModel::sendName()
{
    return this->name;
}

///
/// \brief TriangleModel::TriangleModel
///
TriangleModel::TriangleModel()
    : PrimitiveModel("Triangle")
{}

std::string TriangleModel::sendName()
{
    return this->name;
}

///
/// \brief SquareModel::SquareModel
///
SquareModel::SquareModel()
    : PrimitiveModel("Square")
{}

std::string SquareModel::sendName()
{
    return this->name;
}
