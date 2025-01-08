#include "character_function.h"
#include "array_utils.h"

/*
    function declaration:
        int isalnum(int c);
    The isalnum() function checks whether the passed character is an alphanumeric character or not.

    Output:
        a is an alphanumeric character.
        A is an alphanumeric character.
        1 is an alphanumeric character.
        ! is not an alphanumeric character.
          is not an alphanumeric character.
*/
void isalnum_test()
{
    char *str[] = {"a", "A", "1", "!", " "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isalnum(*str[i]))
        {
            printf("%s is an alphanumeric character.\n", str[i]);
        }
        else
        {
            printf("%s is not an alphanumeric character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int isalpha(int c);
    The isalpha() function checks whether the passed character is an alphabetic character or not.

    Output:
        a is an alphabetic character.
        A is an alphabetic character.
        1 is not an alphabetic character.
        ! is not an alphabetic character.
          is not an alphabetic character.
*/
void isalpha_test()
{
    char *str[] = {"a", "A", "1", "!", " "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isalpha(*str[i]))
        {
            printf("%s is an alphabetic character.\n", str[i]);
        }
        else
        {
            printf("%s is not an alphabetic character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int isascii(int c);
    The isascii() function checks whether the passed character is an ASCII character or not.

    Output:
        a is an ASCII character.
        A is an ASCII character.
        1 is an ASCII character.
        ! is an ASCII character.
          is an ASCII character.
*/
void isascii_test()
{
    char *str[] = {"a", "A", "1", "!", " "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isascii(*str[i]))
        {
            printf("%s is an ASCII character.\n", str[i]);
        }
        else
        {
            printf("%s is not an ASCII character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int isblank(int c);
    The isblank() function checks whether the passed character is a blank character or not.

    Output:
        a is not a blank character.
        A is not a blank character.
        1 is not a blank character.
        ! is not a blank character.
          is a blank character.
*/
void isblank_test()
{
    char *str[] = {"a", "A", "1", "!", " "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isblank(*str[i]))
        {
            printf("%s is a blank character.\n", str[i]);
        }
        else
        {
            printf("%s is not a blank character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int iscntrl(int c);
    The iscntrl() function checks whether the passed character is a control character or not.

    Output:
        a is not a control character.
        A is not a control character.
        1 is not a control character.
        ! is not a control character.
        is not a control character.
                is a control character.
*/
void iscntrl_test()
{
    char *str[] = {"a", "A", "1", "!", " ", "\t"};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (iscntrl(*str[i]))
        {
            printf("%s is a control character.\n", str[i]);
        }
        else
        {
            printf("%s is not a control character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int isdigit(int c);
    The isdigit() function checks whether the passed character is a digit character or not.

    Output:
        a is not a digit character.
        A is not a digit character.
        1 is a digit character.
        ! is not a digit character.
          is not a digit character.
*/
void isdigit_test()
{
    char *str[] = {"a", "A", "1", "!", " "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isdigit(*str[i]))
        {
            printf("%s is a digit character.\n", str[i]);
        }
        else
        {
            printf("%s is not a digit character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int isgraph(int c);
    The isgraph() function checks whether the passed character is a graphical character or not.

    Output:
        a is a graphical character.
        A is a graphical character.
        1 is a graphical character.
        ! is a graphical character.
          is not a graphical character.
                 is not a graphical character.
        \t is a graphical character.
*/
void isgraph_test()
{
    char *str[] = {"a", "A", "1", "!", " ", "\t", "\\t"};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isgraph(*str[i]))
        {
            printf("%s is a graphical character.\n", str[i]);
        }
        else
        {
            printf("%s is not a graphical character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int islower(int c);
    The islower() function checks whether the passed character is a lowercase character or not.

    Output:
        a is a lowercase character.
        A is not a lowercase character.
        1 is not a lowercase character.
        ! is not a lowercase character.
          is not a lowercase character.
*/
void islower_test()
{
    char *str[] = {"a", "A", "1", "!", " "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (islower(*str[i]))
        {
            printf("%s is a lowercase character.\n", str[i]);
        }
        else
        {
            printf("%s is not a lowercase character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int isprint(int c);
    The isprint() function checks whether the passed character is a printable character or not.
    The difference between isprint() and isgraph() is that isprint() includes space character as a printable character.

    Output:
        a is a printable character.
        A is a printable character.
        1 is a printable character.
        ! is a printable character.
          is a printable character.
*/
void isprint_test()
{
    char *str[] = {"a", "A", "1", "!", " "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isprint(*str[i]))
        {
            printf("%s is a printable character.\n", str[i]);
        }
        else
        {
            printf("%s is not a printable character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int isspace(int c);
    The isspace() function checks whether the passed character is a whitespace character or not.

    Output:
        a is not a whitespace character.
        A is not a whitespace character.
        1 is not a whitespace character.
        ! is not a whitespace character.
          is a whitespace character.
*/
void isspace_test()
{
    char *str[] = {"a", "A", "1", "!", " ", "12 34", " 12", "34 "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isspace(*str[i]))
        {
            printf("%s is a whitespace character.\n", str[i]);
        }
        else
        {
            printf("%s is not a whitespace character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int ispunct(int c);
    The ispunct() function checks whether the passed character is a punctuation character or not.

    Output:
        a is not a punctuation character.
        A is not a punctuation character.
        1 is not a punctuation character.
        ! is a punctuation character.
          is not a punctuation character.
*/
void ispunct_test()
{
    char *str[] = {"a", "A", "1", "!", " "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (ispunct(*str[i]))
        {
            printf("%s is a punctuation character.\n", str[i]);
        }
        else
        {
            printf("%s is not a punctuation character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int isupper(int c);
    The isupper() function checks whether the passed character is an uppercase character or not.

    Output:
        a is not an uppercase character.
        A is an uppercase character.
        1 is not an uppercase character.
        ! is not an uppercase character.
          is not an uppercase character.
*/
void isupper_test()
{
    char *str[] = {"a", "A", "1", "!", " "};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isupper(*str[i]))
        {
            printf("%s is an uppercase character.\n", str[i]);
        }
        else
        {
            printf("%s is not an uppercase character.\n", str[i]);
        }
    }
}

/*
    function declaration:
        int isxdigit(int c);
    The isxdigit() function checks whether the passed character is a hexadecimal digit character or not.
    By the way, the isxdigit() only checks the character is a hexadecimal digit character or not, it does not check the string is a hexadecimal number or not.

    Output:
        0x111111 is a hexadecimal digit character.
        0x12 is a hexadecimal digit character.
        017 is a hexadecimal digit character.
        12 is a hexadecimal digit character.
*/
void isxdigit_test()
{
    char *str[] = {"0x111111", "0x12", "017", "12"};
    for (size_t i = 0; i < ARRAY_SIZE(str); i++)
    {
        if (isxdigit(*str[i]))
        {
            printf("%s is a hexadecimal digit character.\n", str[i]);
        }
        else
        {
            printf("%s is not a hexadecimal digit character.\n", str[i]);
        }
    }
}