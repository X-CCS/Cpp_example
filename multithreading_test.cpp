#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <unistd.h>

using namespace std;

#define NUM_THREADS 5
struct thread_data
{
    int thread_id;
    char *message;
};
void* say_hello(void* arg)
{
    cout << "Hello mefly!" << endl;
    return 0;
}
void *wait(void *t)
{
    int i;
    long tid;

    tid = (long)t;

    sleep(1);

    cout << "Sleeping in thread" << endl;
    cout << "Thread with id :" << tid << "...exiting" << endl;
    pthread_exit(NULL);

}
#pragma comment(lib,"x86/pthreadVC2.lib")



void *PrintHello(void* threadarg)
{
    struct thread_data *my_data;

    my_data = (struct thread_data *) threadarg;

    cout << "Thread ID:" << my_data->thread_id;
    cout << "Message:" << my_data->message <<endl;

    //int tid = *((int*)threadid);
    //cout << "Hello mefly! thread id:" << tid <<endl;
    pthread_exit(NULL);
};
int main()
{
    int rc;
    int i;
    pthread_t threads[NUM_THREADS];
    pthread_attr_t attr;
    void *status;

    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for(i=0; i<NUM_THREADS; i++)
    {
        cout << "main():creating thread," << i << endl;
        rc = pthread_create(&threads[i], NULL, wait, (void *)&i);
        if(rc)
        {
            cout << "Error:unable to create thread," << rc << endl;
            exit(-1);
        }
    }
    
    pthread_attr_destroy(&attr);
    for(i=0; i<NUM_THREADS; i++)
    {
        rc = pthread_join(threads[i], &status);
        if(rc)
        {
            cout << "Error:unable to join," << rc << endl;
            exit(-1);
        }
    
        cout << "Main:completed thread id is :" << i;
        cout << "exiting with status:" << status << endl;
    }
    cout << "Main:program exiting." << endl;
    pthread_exit(NULL);
}
int test()
{
    pthread_t threads[NUM_THREADS];
    //int indexes[NUM_THREADS];
    struct thread_data td[NUM_THREADS];
    int rc;
    int i;
    for(i=0;i<NUM_THREADS;i++)
    {
        cout << "main(): create thread," << i << endl;
      //  indexes[i] = i;
        td[i].thread_id = i;
        td[i].message = (char*)"This is message";
        rc = pthread_create(&threads[i], NULL,PrintHello, (void *)&(td[i]));

        if(rc)
        {
            cout << "Error: can not create thread," << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
