#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
// #include "../../utils/include/array_utils.h"

pthread_mutex_t mutex;

void *pthread_function(void *id){

    int num = *(int *)id;

    if (pthread_mutex_lock(&mutex) != 0)
    {
        fprintf(stdout, "pthread_mutex_lock failed\n");
    }
    
    FILE *fp = fopen("testfile.txt", "a+");
    int start = num;
    int end = start + 1;
    setbuf(fp, NULL);
    fprintf(stdout, "%d\n", start);
    for (int i = (start * 10); i < (end * 10); i ++){
        fprintf(fp, "%d\t", i);
    }
    fprintf(fp, "\n");
    fclose(fp);

    pthread_mutex_unlock(&mutex);

    return NULL;
}

int main(){
    int num_threads = 5;
    pthread_t *pt = (pthread_t *)malloc(sizeof(pthread_t) * num_threads);
    int *id = (int *)malloc(sizeof(int) * num_threads);

    if (pthread_mutex_init(&mutex, NULL) != 0)
    {
        free(pt);
        free(id);
        return 1;
    }
    
    for (size_t i = 0; i < num_threads; i++)
    {
        id[i] = i;
        if (pthread_create(&pt[i], NULL, pthread_function, &id[i]) != 0){
            printf("thread create failed!\n");
            return 1;
        }
    }
    for (int i = 0; i < num_threads; i++){
        pthread_join(pt[i], NULL);
    }
    
    free(pt);
    free(id);
    return 0;
}