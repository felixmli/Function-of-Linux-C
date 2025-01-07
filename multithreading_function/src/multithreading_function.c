#include "multithreading_function.h"

/*
    function declaration:
        void *thread_function(void *arg);
    This function is the entry point of the thread.
    It takes a void pointer as an argument and returns a void pointer.
*/
void *thread_function(void *arg)
{
    int *p = arg;
    printf("Thread function: %d\n", *p);
    return NULL;
}

/*
    function declaration:
        int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
    pthread_create() function is used to create a new thread.
*/
int pthread_create_test()
{
    pthread_t thread_id;
    int thread_arg = 10;

    int ret = pthread_create(&thread_id, NULL, thread_function, &thread_arg);
    if (ret != 0)
    {
        printf("Error creating thread: %s\n", strerror(errno));
        return errno;
    }
    printf("Thread created successfully. Thread ID is %lu\n", thread_id);

    // Block the main proceed and wait for the child thread to exit
    pthread_join(thread_id, NULL);

    exit(0);
}