#include "projectclass.h"

class projectClassData : public QSharedData
{
public:

};

projectClass::projectClass() : data(new projectClassData)
{

}

projectClass::projectClass(const projectClass &rhs)
    : data{rhs.data}
{

}

projectClass &projectClass::operator=(const projectClass &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

projectClass::~projectClass()
{

}
