#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a, b)(((a)<(b)) ? a:b)
#define MKSTR(x) #x
#define concat(a, b) a ## b
int main()
{
    int i,j;
    i = 100;
    j = 30;
    int xy = 100;
    cout << concat(x, y);

    cout << "Value of __LINE__:" << __LINE__ <<endl;
    cout << "Value of __FILE__:" << __FILE__ <<endl;
    cout << "Value of __DATE__:" << __DATE__ <<endl;
    cout << "Value of __TIME__:" << __TIME__ <<endl;


#ifdef DEBUG
    cerr << "Trace: Inside main function" << endl;
#endif
    cout << MKSTR(HELLO C++) << endl;
#if 0
    cout << MKSTEP(HELLO C++) << endl;
#endif
    cout << "The minimum is" << MIN(i, j) << endl;

#ifdef DEBUG
    cerr << "Trace:Coming out of main function" << endl;
#endif
    return 0;
}
