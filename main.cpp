#include <iostream>

using namespace std;

#define FLAG

#ifdef FLAG //if defined
    #define test 1
#else
    #define test 2
#endif

#undef FLAG //undefined FLAG

#ifndef FLAG //if not defined
    #define test1 3
#else
    #define test1 4
#endif

int main(int argc, char *argv[])
{
    cout << "After FLAG was defined, ifdef FLAG is true." << endl;
    cout << "Then test is defined to 1." << endl;
    cout << "test = " << test << endl; //test = 1
    cout << "After FLAG was undefined, ifndef FLAG is true." << endl;
    cout << "Then test1 is defined to 3." << endl;
    cout << "test1 = " << test1 << endl; //test1 = 3
    cin.get();
    return 0;
}
