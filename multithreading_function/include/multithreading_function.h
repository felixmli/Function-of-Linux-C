#ifndef __MULTITHREADING_FUNCTION_H__
#define __MULTITHREADING_FUNCTION_H__

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void *thread_function(void *arg);

int pthread_create_test();


#endif // __MULTITHREADING_FUNCTION_H__