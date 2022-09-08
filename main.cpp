// Fransiskus Agapa
// 9/8/22
// Practices make improvement - Have Fun !!!
// :)

// ================
// apply copy constructor, copy assignment, and destructor in a class
// ================
#include <iostream>
#include "intData.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << endl;
    cout << "============================" << endl;
    // default constr
    cout << "1st class object" << endl;
    intData oneData;
    cout << oneData.GetData() << endl;                  // grt default value

    // set and get value
    int userInput;                                      // get integer from user
    cout << endl << "Input an integer: ";
    cin >> userInput;
    cout << endl;
    oneData.SetData(userInput);
    cout << oneData.GetData() << endl << endl;          // get updated value

    cout << "============================" << endl;
    // copy constructor
    cout << "2nd Class Object" << endl;
    intData twoData = oneData;                         // copy constr called
    cout << twoData.GetData() << endl;

    // set and get value
    cout << endl << "Input another integer: ";
    cin >> userInput;
    cout << endl;
    twoData.SetData(userInput);
    cout << twoData.GetData() << endl << endl;

    cout << "============================" << endl;
    // copy assignment
    cout << "3rd Class Member" << endl;
    intData threeData;
    threeData = twoData;                             // copy assignment constr called
    cout << threeData.GetData() << endl << endl ;

    // set and get value
    cout << "Input another integer: ";
    cin >> userInput;
    cout << endl;
    threeData.SetData(userInput);
    cout << threeData.GetData() << endl << endl;
    cout << "============================" << endl;

    return 0;
}
