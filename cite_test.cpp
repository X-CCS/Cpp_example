#include <iostream>

using namespace std;

void test_1();
int main()
{
    test_1();
}

void test_1()
{
    int i;
    double d;

    int& r = i;
    double& s = d;

    i = 5;
    cout << "Value of i:" << i << endl;
    cout << "Value of i referce:" << r << endl;

    d = 11.7;
    cout << "Value of d:" << d << endl;
    cout << "Value of d referce: " << s << endl; 
}
