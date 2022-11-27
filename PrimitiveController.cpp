#include "PrimitiveController.h"

///
/// \brief PrimitiveController::PrimitiveController
/// \param name_
///
PrimitiveController::PrimitiveController(std::string name_) : name(name_)
{}

///
/// \brief PrimitiveController::PrimitiveController
/// \param d
///
PrimitiveController::PrimitiveController(const PrimitiveController& d):
    name(d.sendName())
{}

///
/// \brief PrimitiveController::~PrimitiveController
///
PrimitiveController::~PrimitiveController()
{}

///
/// \brief PrimitiveController::drawPrimitive
/// \param somePrimitive
///
void PrimitiveController::drawPrimitive (PrimitiveModel * somePrimitive) {

    log_text += "Draw "+ somePrimitive->sendName() + "   ";
    primitives.push_back(somePrimitive);
};

///
/// \brief PrimitiveController::deletePrimitive
///
void PrimitiveController::deletePrimitive () {

    if(!primitives.empty()){
        log_text += "   Delete Primitive  ";
        primitives.pop_back();
    }
};

///
/// \brief PrimitiveController::rename
/// \param name_
///
void PrimitiveController::rename(std::string name_){
    name = name_;
}

///
/// \brief PrimitiveController::sendName
/// \return
///
std::string PrimitiveController::sendName() const{
    return name;
}

///
/// \brief PrimitiveController::loging
/// \return
///
std::string PrimitiveController::loging()
{
    return log_text;
}
