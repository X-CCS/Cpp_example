#include <iostream>
#include <cstring>

using namespace std;

void test_3()
{
    //char str1[11] = "Hello";
    //char str2[11] = "World";
    //char str3[11];
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    //strcpy(str3, str1);
    str3 = str1;
    cout << "(str3, str1):" << str3 << endl;

    //strcat(str1, str2);
    str3 = str1 + str2;
    cout << "str1 + str2" << str3 << endl;

    //len = strlen(str1);
    len  = str3.size();
    cout << "str3.size():" << len << endl;
}
void test_2()
{
    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int len;

    strcpy(str3, str1);
    cout << "strcpy(str3, str1):" << str3 << endl;

    strcat(str1, str2);
    cout << "strcat:" << str1 << endl;

    len = strlen(str1);
    cout << "strlen(str1):" << len << endl;
}
void test_1()
{
    char greeting[6] = {'H','e','l','l','o','\0'};

    cout << "Greeting message:";
    cout << greeting << endl;


}

int main()
{
    test_1();
    test_2();
    test_3();

    return 0;
}

