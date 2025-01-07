#include "process_string_function.h"

/*
    function declaration: 
        void* memcpy(void* destination, const void* source, size_t num);
    memcpy() function is used to copy the data from one memory location to another memory location.
*/
void memcpy_test(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[7];

    memcpy(arr2, arr1, sizeof(arr2));// use the sizeof(arr2) to avoid the buffer overflow. 

    // use the ARRAY_SIZE() to get the size of the array. 
    for (size_t i = 0; i < ARRAY_SIZE(arr1); i++)
    {
        printf("arr[%lu] = %d\n",i ,arr2[i]);
    }
}

/*
    function declaration: 
        void* memmove(void* destination, const void* source, size_t num);
    memmove() function is used to copy the data from one memory location to another memory location.
    The difference between memcpy() and memmove() is that memmove() is safe to use when the source and destination memory blocks overlap.
*/
void memmove_test(){
    int arr1[] = {1, 2, 3, 4, 5};

    memmove(arr1 + 2, arr1, 12);// use the sizeof(arr2) to avoid the buffer overflow. 

    // use the ARRAY_SIZE() to get the size of the array. 
    for (size_t i = 0; i < ARRAY_SIZE(arr1); i++)
    {
        printf("arr[%lu] = %d\n",i ,arr1[i]);
    }
}

/*
    function declaration: 
        int memcmp(const void* ptr1, const void* ptr2, size_t num);
    memcmp() function is used to compare the data from one memory location to another memory location.
*/
void memcmp_test(){
    char *str1 = "Hello";
    char *str2 = "Hello";

    int ret = memcmp(str1, str2, 5);

    if(ret == 0){
        printf("The strings are equal.\n");
    }else{
        printf("The strings are not equal.\n");
    }
}

/*
    function declaration: 
        void* memset(void* ptr, int value, size_t num);
    memset() function is used to fill a block of memory with a particular value.
*/
void memset_test(){
    // str can not use char * to define. Because the str is a constant string if char * str = "Hello World!";
    char str[] = "Hello World!";

    memset(str + 3, '@', 5);
    puts(str);
}