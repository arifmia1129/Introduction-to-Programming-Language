## Notes

### Header File

If we want to use some built-in functions of the C programming language, then we should use header files.  
For example, if we want to use the `printf` function, then we need to use the `stdio.h` header file.

### Main Function

C programming language runs the program from the `main` function.

### Main Function Structure:

```c
int main() {
    // anything to do here

    return 0;
}
```

### How to works

C programming language executes from the `main` function. After all functionalities are done into main function then we should do return 0; return 0 means the compiler understand everything executed successfully without any problems.

If we want to use any built-in functions of the C programming language then must be use header files on top.

stdio.h -> stdio: Standard input output and .h means header file

### Variables and data types

If we want to store anything then need to declare variables.

The mainly used data types in C programming language:

1. int -> 101, -205, 5
2. float -> 2.5, -10.45, 5.4
3. char -> 'a', 'b', '@'
4. bool -> true, false

### Size of data types

1. int -> 4 byte (32 bit)
2. float -> 4 byte (32 bit)
3. char -> 1 byte (8 bit)

- 1 byte -> 8 bit (1, 0, 1, 0, 0, 1, 1, 0)

### Printing variables

If we want to print variables then need to use format specifiers.

1.  int -> %d
2.  float -> %f
3.  char -> %c

for fix the float fraction numbers: %.2f

### Boolean in C

For using boolean in C then need to use stdbool header.

If want to print bool variable then we are using int format specifier %d, its return 0/1.

### Why We Need to Take Input

To make our system/software dynamic then we need to take input from user

### How to take input in C

For taking input, need to use scanf function.

```c
    scanf("%d %f %c", &i, &f, &c);
```

need to use & sign before variables name so that we can override the previous value of this variable.

### Data type limitations in C

There are limitations of the data type.

- For integer:

1 bytes -> 8 bit

int -> 4 bytes (32 bit)

2^32 -> 4294967296

that means for integer c can handle up to 10^9 values

- For float
  Can handle around 8-9 numbers (before & after .)

#### if we want to use more:

- long long integer -> %lld (format specifier)
- double -> %lf (format specifier)

### Rules for Naming Variables

1. The variables name must be start with letter or underscore -> num, \_num
2. The variables name only contains letters, underscore, numbers not special characters, spacing, etc. -> first_name, prayer1, designation
3. The variables name does not contains reserved keywords -> int, for, if, else etc

### Arithmetic Operators

For mathematical operations we need to use operators. There are 5 types of operators in Arithmetic operation.

1. Summation (+)
2. Subtraction (-)
3. Multiplication (\*)
4. Division (/)
5. Modulus (%)

#### Modulus operator is return value after divided

### Relational Operators

This operator always returns true or false.

1. <
2. <=
3. >
4. > =
5. ==
6. !=

### Logical Operators

1. Logical AND (&&)
2. Logical NOT (!)
3. Logical OR (||)

### if else statement

if we want to conditionally then need to use if else statement

### If else ladder

When we need to add multiple conditions then we will use if else ladder

### Nested if else

If need to write condition under the another if/else statement then it called as a nested if/else

### What is loop

Loop is a concept/thing that uses for doing same types of working again and again until condition is true

1. For loop
2. While loop
3. Do while loop

### For loop

There are mainly two parts of for loop. Num 1 is condition part and num 2 is execution part.

```c
    for(variable initialization; loop ending condition; step count (increment/decrement)) {
        execution part;
    }
```

### Break statement

If need to break/stop the loop based on any condition then we can use break statement

### Continue statement

If need to skip anything then we can use continue. If use continue then it will skip other part for this particular condition.
