#include <iostream>
#include <ctime>

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
    time_t now = time(0);

    cout << "pass time 1970 to now:" << now << endl;

    tm *ltm = localtime(&now);

    cout << "year:" << 1900 + ltm->tm_year << endl;
    cout << "month:" << 1 + ltm->tm_mon << endl;
    cout << "day:" << ltm->tm_mday << endl;
    cout << "date:" << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}
void test_1()
{
    time_t now = time(0);

    char* dt = ctime(&now);
    cout << "local time:" << dt << endl;

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);

    cout << "UTC date and time:" << dt << endl;
}
