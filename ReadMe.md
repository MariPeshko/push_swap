### Push_Swap Project - School 42 Berlin (June 2024)

Hi! It is the project `"push_swap"` made by Maryna Peshko at school 42 Berlin in June 2024.

Subject says: "This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting."

The program does not return sorted stack, but a list of operations that have been made.

For my project, I chose Mechanical Turk algorithm, which is very efficient and well-explained in the article of A. Yigit Ogun (Hellibronn)
https://medium.com/@ayogun/push-swap-c1f5d2d41e97

I use only two types of instructions - case of both rotations and case of both reverse rotations. Although I have to variations of these instruction - for sorting in descending order (stack b) and for sorting in ascending order (stack a).

#### The valid inputs:
1) ./push_swap 5 4 3 2 1
2) ./push_swap "5 4 3 2 1"
__________________________________________________________________________________

#### To count the number of operations use this command:

./push_swap 5 4 3 2 1 | wc -l 
__________________________________________________________________________________

List of errors.
$? command to display exit status.

Error 1 in case there was no input.
Error 2 in case of input is only one argument and it contains not only digits.
Error 3 in case the input consists of mix of arguments and strings, for example,
4 3 -200 "-66 0" 3
Error 4 in case of error of stack a of the stack has duplicates.
Error 5 when memory allocation are failed.
Error 127 - error during atoi - invalid number.

Returns 0 when success.

(c) Maryna Peshko