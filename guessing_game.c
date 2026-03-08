#include <stdio.h>

int main()
{
    char answer;
    int guess = 0;

    printf("Think of a number between 1 and 31.\n");
    printf("I will show you 5 tables. Answer y or n for each one.\n\n");

    /* --- Table 1 --- */
    printf("Table 1:\n");
    printf(" 1  3  5  7\n");
    printf(" 9 11 13 15\n");
    printf("17 19 21 23\n");
    printf("25 27 29 31\n");
    printf("Is your number in this table? (y/n): ");
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y')
        guess = guess + 1;

    /* --- Table 2 --- */
    printf("\nTable 2:\n");
    printf(" 2  3  6  7\n");
    printf("10 11 14 15\n");
    printf("18 19 22 23\n");
    printf("26 27 30 31\n");
    printf("Is your number in this table? (y/n): ");
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y')
        guess = guess + 2;

    /* --- Table 3 --- */
    printf("\nTable 3:\n");
    printf(" 4  5  6  7\n");
    printf("12 13 14 15\n");
    printf("20 21 22 23\n");
    printf("28 29 30 31\n");
    printf("Is your number in this table? (y/n): ");
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y')
        guess = guess + 4;

    /* --- Table 4 --- */
    printf("\nTable 4:\n");
    printf(" 8  9 10 11\n");
    printf("12 13 14 15\n");
    printf("24 25 26 27\n");
    printf("28 29 30 31\n");
    printf("Is your number in this table? (y/n): ");
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y')
        guess = guess + 8;

    /* --- Table 5 --- */
    printf("\nTable 5:\n");
    printf("16 17 18 19\n");
    printf("20 21 22 23\n");
    printf("24 25 26 27\n");
    printf("28 29 30 31\n");
    printf("Is your number in this table? (y/n): ");
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y')
        guess = guess + 16;

    printf("\nYour number is %d!\n", guess);

    return 0;
}
