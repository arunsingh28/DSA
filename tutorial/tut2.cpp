#include <iostream>
using namespace std;
int main()
{
    /* code */
    // refrence variable
    float x = 455;
    float &y = x;
    cout << 'x' << x << endl;
    cout << 'Y' << y << endl;

    // **********typecasting*************
    float a = 10;
    cout << 'the value of a' << int(a) << endl;
    cout << "size of a" << sizeof(a)<<endl;
    
    int b = 1;
    cout<<"the value of b"<< float(b) <<endl;
    cout<<"size of b:"<< sizeof(b)<<endl;

    return 0;
}
