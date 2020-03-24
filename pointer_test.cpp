#include <iostream>

using namespace std;

void test_1();
void test_2();
int main()
{
    test_2();
    //test_1();
}

void test_2()
{
    int var = 20;
    int *ip;

    ip = &var;

    cout << "Value of varible:";
    cout << var << endl;

    cout << "address stored in ip variable";
    cout << ip << endl;

    cout << "Value of *ip variable:";
    cout << *ip << endl;
}
void test_1()
{
    int var1;
    char var2[10];

    cout << "var1 addres:";
    cout << &var1 << endl;

    cout << "var2 addres:";
    cout << &var2 << endl;
}

