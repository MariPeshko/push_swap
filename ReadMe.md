### Push_Swap Project - School 42 Berlin (June 2024)

#### Project Overview

Hi! It is the project `"push_swap"` made by Maryna Peshko at school 42 Berlin in June 2024.

Subject says: "This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting."

**Note**: The program does not return a sorted stack but a list of operations that were performed.

#### Algorithm Choice

For my project, I chose Mechanical Turk algorithm, which is very efficient and well-explained in [the article of A. Yigit Ogun (Hellibronn)](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)

I use only two types of instructions - case of both rotations and case of both reverse rotations. These instructions have two variations each, for sorting in descending order (stack b) and for sorting in ascending order (stack a).

#### Valid inputs
1) `./push_swap 5 4 3 2 1`
2) `./push_swap "5 4 3 2 1"`
__________________________________________________________________________________

#### To count the number of operations use this command:

```./push_swap 5 4 3 2 1 | wc -l```
__________________________________________________________________________________

#### List of errors.

The program returns specific error codes for different types of errors. `echo $?` to display exit status.

Error 1: No input provided.\
Error 2: Input contains only one argument and it is not a number.\
Error 3: Input consists of a mix of arguments and strings, e.g., `4 3 -200 "-66 0" 3`\
Error 4: Duplicate values in stack a.\
Error 5: Memory allocation failure.\
Error 127: Invalid number (error during `atoi` conversion).

The program returns 0 on success.

(c) Maryna Peshko