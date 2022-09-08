// Fransiskus Agapa


#include "intData.h"
#include <iostream>

using std::cout;
using std::endl;

// default const
intData::intData()
{
    cout << "= Default Constructor =" << endl;
    _data = new int;                 // allocate new memory
    *_data = -1;                     // assign value
}

// set value
void intData::SetData(const int &theData)
{
    cout << "= Setter Called =" << endl;
    _data = new int;                 // allocate memory
    *_data = theData;                // assign value
}

// get value
int intData::GetData() const
{
    cout << "= Getter Called =" << endl;
    return *_data;
}

// copy const
intData::intData(const intData &theData)
{
    cout << "= Copy Constructor Called =" << endl;
    _data = new int;               // allocate memory
    *_data = *theData._data;       // assign value
}

// copy assignment
intData& intData::operator=(const intData &theData)
{
    cout << "= Copy Assignment Called =" << endl;
    if(this != &theData)          // no self-assign
    {
        delete _data;
        _data = new int;
        *_data = *theData._data;
    }
}

// destructor
intData::~intData()
{
    cout << "= Destructor Called =" << endl;
    delete _data;                // Free allocated memory
}