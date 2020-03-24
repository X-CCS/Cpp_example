#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal(" << signum << ") received." << endl;

    exit(signum);
}

int main()
{
    signal(SIGINT, signalHandler);
    int i = 0;
    while(++i)
    {
        cout << "Going to sleep...." << endl;
        if(i==3)
        {
            raise(SIGINT);
        }
        sleep(1);
    }
    return 0;
}

