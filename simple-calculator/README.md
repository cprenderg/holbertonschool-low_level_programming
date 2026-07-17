# C - Simple Calculator
## Compile Command
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run Instructions
After compiling with the above flags type ./calculator to run the program

## Supported Operations
This simple calculator can add, subtract, multiply and divide

## Numeric Behaviour
No operations accept decimal numbers as input. If the result of division is a decimal it is rounded down to one decimal place.

## Known Limitations
- Inputting more than 10 characters has undefined behaviour.
- Inputting a number greater than 2,147,483,647 or less than -2,147,483,648 behaviour is undefined
- Only runs one calculation per execution
- If result is greater than 2,147,483,647 or less than -2,147,483,648 behaviour is undefined
