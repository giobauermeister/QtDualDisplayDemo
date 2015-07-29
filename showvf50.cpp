#include "showvf50.h"

class showVF50Data : public QSharedData
{
public:

};

showVF50::showVF50() : data(new showVF50Data)
{

}

showVF50::showVF50(const showVF50 &rhs) : data(rhs.data)
{

}

showVF50 &showVF50::operator=(const showVF50 &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

showVF50::~showVF50()
{

}

