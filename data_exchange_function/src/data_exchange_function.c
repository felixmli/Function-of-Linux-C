#include "data_exchange_function.h"
#include "array_utils.h"

/*
    function declaration:
        double atof(const char *str);
    description:
        The function atof() converts the string pointed to by str to double.
        This function returns the converted floating point number as a double value.
        If no valid conversion could be performed, it returns zero (0.0).
    tips:
        atof() will ignore the spaces before the string and stops when it encounters the first character that is not a number.
    Output:
        The string "123.456" is converted to double: 123.456000
        The string "123.456abc" is converted to double: 123.456000
        The string "abc123.456" is converted to double: 0.000000
        The string "123.456 789" is converted to double: 123.456000
        The string " 123.456" is converted to double: 123.456000
        The string "123.456 " is converted to double: 123.456000
        The string "Invalid Input" is converted to double: 0.000000
*/
void atof_test(){
    const char *str[] = {"123.456", "123.456abc", "abc123.456", "123.456 789", " 123.456", "123.456 ", "Invalid Input"};
    double num;
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        num = atof(str[i]);
        printf("The string \"%s\" is converted to double: %f\n", str[i], num);
    }
}

/*
    function declaration:
        int atoi(const char *str);
    description:
        The function atoi() converts the string pointed to by str to int.
        This function returns the converted integer number as an int value.
        If no valid conversion could be performed, it returns zero (0).
    tips:
        atoi() will ignore the spaces before the string and stops when it encounters the first character that is not a number.
        atoi() will convert to the integer value if the str is a floating point number.
    Output:
        The string "123" is converted to int: 123
        The string "123abc" is converted to int: 123
        The string "abc123" is converted to int: 0
        The string "123 456" is converted to int: 123
        The string " 123" is converted to int: 123
        The string "123 " is converted to int: 123
        The string "Invalid Input" is converted to int: 0
        The string "123.456" is converted to int: 123
*/
void atoi_test(){
    const char *str[] = {"123", "123abc", "abc123", "123 456", " 123", "123 ", "Invalid Input", "123.456"};
    int num;
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        num = atoi(str[i]);
        printf("The string \"%s\" is converted to int: %d\n", str[i], num);
    }
}

/*
    function declaration:
        long atol(const char *str);
    description:
        The function atol() converts the string pointed to by str to long.
        This function returns the converted long integer number as a long value.
        If no valid conversion could be performed, it returns zero (0).
    tips:
        atol() will ignore the spaces before the string and stops when it encounters the first character that is not a number.
        atol() will convert to the long integer value if the str is a floating point number.
    Output:
        The string "123" is converted to long: 123
        The string "123abc" is converted to long: 123
        The string "abc123" is converted to long: 0
        The string "123 456" is converted to long: 123
        The string " 123" is converted to long: 123
        The string "123 " is converted to long: 123
        The string "Invalid Input" is converted to long: 0
        The string "123.456" is converted to long: 123
*/
void atol_test(){
    const char *str[] = {"123", "123abc", "abc123", "123 456", " 123", "123 ", "Invalid Input", "123.456"};
    long num;
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        num = atol(str[i]);
        printf("The string \"%s\" is converted to long: %ld\n", str[i], num);
    }
}

/*
    function declaration:
        char *ecvt(double value, int ndigit, int *decpt, int *sign);
    description:
        The function ecvt() converts the double value to a string.
        The converted string is stored in a static buffer.
        The function returns a pointer to the converted string.
        The ndigit parameter specifies the number of digits after the decimal point.
        The decpt parameter is a pointer to an integer that will be set to the position of the decimal point.
        The sign parameter is a pointer to an integer that will be set to 0 if the value is positive, and non-zero if the value is negative.
    tips:
        The gcvt() function is not thread-safe.
        Use sprintf() to convert the double value to a string if you want to make the function thread-safe.
    Output:
        The string representation of 123.456000 is: 123456
        The position of the decimal point is: 3
        The sign of the value is: Positive
*/
void ecvt_test(){
    double value = 123.456;
    int ndigit = 6;
    int decpt, sign;
    char *str = ecvt(value, ndigit, &decpt, &sign);
    printf("The string representation of %f is: %s\n", value, str);
    printf("The position of the decimal point is: %d\n", decpt);
    printf("The sign of the value is: %s\n", sign == 0 ? "Positive" : "Negative");
}

/*
    function declaration:
        char *fcvt(double value, int ndigit, int *decpt, int *sign);
    description:
        The function fcvt() converts the double value to a string.
        The converted string is stored in a static buffer.
        The function returns a pointer to the converted string.
        The ndigit parameter specifies the number of digits after the decimal point.
        The decpt parameter is a pointer to an integer that will be set to the position of the decimal point.
        The sign parameter is a pointer to an integer that will be set to 0 if the value is positive, and non-zero if the value is negative.
    Tips:
        The difference between ecvt() and fcvt() is that fcvt() will cut off the trailing zeros.
        The gcvt() function is not thread-safe.
        Use sprintf() to convert the double value to a string if you want to make the function thread-safe.
    Output:
        The string representation of 123.456000 is: 123456000
        The position of the decimal point is: 3
        The sign of the value is: Positive
*/
void fcvt_test(){
    double value = 123.456;
    int ndigit = 6;
    int decpt, sign;
    char *str = fcvt(value, ndigit, &decpt, &sign);
    printf("The string representation of %f is: %s\n", value, str);
    printf("The position of the decimal point is: %d\n", decpt);
    printf("The sign of the value is: %s\n", sign == 0 ? "Positive" : "Negative");
}

/*
    function declaration:
        char *gcvt(double value, int ndigit, char *buf);
    description:
        The function gcvt() converts the double value to a string.
        The converted string is stored in the buffer pointed to by buf.
        The function returns a pointer to the converted string.
        The ndigit parameter specifies the number of digits after the decimal point.
    tips:
        The difference between gcvt() and e[f]cvt() is that gcvt() will add the decimal point and signal.
        The gcvt() function is not thread-safe.
        Use sprintf() to convert the double value to a string if you want to make the function thread-safe.
    Output:
        The string representation of 123.456000 is: 123.456
        The buffer content is: 123.456
        THe buffer content is: 123.456
        THe buffer content is: 49
*/
void gcvt_test(){
    double value = 123.456;
    int ndigit = 6;
    char buf[20];
    char *str = gcvt(value, ndigit, buf);
    printf("The string representation of %f is: %s\n", value, str);
    printf("The buffer content is: %s\n", buf);
    printf("THe buffer content is: %s\n", str);
    // print the ascii value of the first character in the buffer
    printf("THe buffer content is: %d\n", *str);
}

