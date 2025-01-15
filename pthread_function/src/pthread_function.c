#include "pthread_function.h"

/*
    function declearation:
        int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
    description:
        The pthread_create() function starts a new thread in the calling process. The new thread starts execution by invoking start_routine(); arg is passed as the sole argument of start_routine().
        thread: return the thread id of the new thread.
        attr: thread attribute.
        start_routine: the function to be executed by the new thread.
        arg: the argument to be passed to the new thread.
    return:
        0: success.
        EAGAIN: Insufficient resources to create another thread, or a system-imposed limit on the number of threads was encountered.
        EINVAL: Invalid settings in attr.
        EPERM: No permission to set the scheduling policy and parameters specified in attr.
    output:
        Thread 1, pid=123726, ppid=111266, tid=139635540321856
        Thread 2, pid=123726, ppid=111266, tid=139635531929152
        Thread 3, pid=123726, ppid=111266, tid=139635523536448
        Thread 4, pid=123726, ppid=111266, tid=139635515143744
        Main thread, pid=123726, ppid=111266, tid=139635540326208
        Thread 5, pid=123726, ppid=111266, tid=139635506751040
*/

void *pthread_function(void *arg)
{
    char *msg = arg;
    // child thread share the same pid and ppid with the main thread
    printf("%s, pid=%d, ppid=%d, tid=%lu\n", msg, getpid(), getppid(), pthread_self());
    sleep(1);
    
    int *ret = malloc(sizeof(int));
    *ret = 0;
    pthread_exit(ret);
}

void test_pthread_create()
{
    pthread_t tid[5];
    for (size_t i = 0; i < ARRAY_SIZE(tid); i++)
    {
        char *buf = malloc(64);
        snprintf(buf, 64, "Thread %lu", i+1);
        pthread_create(&tid[i], NULL, pthread_function, buf);
        printf("buf: %s, tid: %lu\n", buf, tid[i]);
    }

    printf("Main thread, pid=%d, ppid=%d, tid=%lu\n", getpid(), getppid(), pthread_self());
    for (size_t i = 0; i < ARRAY_SIZE(tid); i++)
    {
        void *ret;
        pthread_join(tid[i], &ret);
        printf("exit code: %d\n", *(int *)ret);
    }
}