# Number Guesing Game

This repository project implements a number guessing game that asks a user to choose between a range of numbers(1-31) and guesses the number chosen by asking if the number is in any one of the tables shown to the user.

The guessed number by the logic of this game is always the sum of the first number of the table it appears in.

## Example

if i choose the number 13, the program will show me the tables one by one while asking me if the number appears in the table

| Table | Numbers | Contains 13? | Value Added |
| ------- | --------- | -------------- | ------------- |
| 1 | 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 | Yes | add 1 |
| 2 | 2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31 | Yes | add 2 |
| 3 | 4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31 | Yes | add 4 |
| 4 | 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31 | Yes | add 8 |
| 5 | 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 | No | add 0 |

**Final Guess: 1 + 4 + 8 = 13**  <!--markdownlint-disable-line-->

## Example of the output

![output1](/output1.png)
![output2](/output2.png)

## To try the project yourself

```bash
git clone https://github.com/Hansen256/Number_guessinggame
```
