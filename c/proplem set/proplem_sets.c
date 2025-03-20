// Problem 1.1
/*

(a) What do curly braces denote in C? Why does it make sense to
use curly braces to surround the body of a function?
    --> 1- the block of code
        2- define the start and end of a function, Combine code into a single piece,
           Prevents logical errors, make code readable and clean

(b) Describe the difference between the literal values 7, "7", and ’7’?
    --> 7 : is int number
    --> '7' : is char
    --> "7" : is a string

(c) Consider the statement
double ans = 10.0+2.0/3.0−2.0∗2.0;
Rewrite this statement, inserting parentheses to ensure that ans = 11.0 upon evaluation of
this statement.
    --> 10.0 + (2.0/((3.0 - 2.0) * 2.0))

    code:
        #include <stdio.h>
        int main(void){
            // ans = 11.0
            double ans = 10.0 + (2.0/((3.0 - 2.0) * 2.0));
            printf("%.1f\n",ans);
        }
*/


// Problem 1.2
/*
Consider the statement
double ans = 18.0/squared(2+1);
For each of the four versions of the function macro squared() below, write the corresponding value
of ans.
1. #define squared(x) x*x
2. #define squared(x) (x*x)
3. #define squared(x) (x)*(x)
4. #define squared(x) ((x)*(x))

    code:
        #include <stdio.h>
        #define squared1(x) x*x
        #define squared2(x) (x*x)
        #define squared3(x) (x)*(x)
        #define squared4(x) ((x)*(x))

        int main(void){
            double ans1 = 18.0 / squared1(2+1);
            double ans2 = 18.0 / squared2(2+1);
            double ans3 = 18.0 / squared3(2+1);
            double ans4 = 18.0 / squared4(2+1);

            printf("ans1 = %.1f\n", ans1);
            printf("ans2 = %.1f\n", ans2);
            printf("ans3 = %.1f\n", ans3);
            printf("ans4 = %.1f\n", ans4);
        }
*/

// Problem 1.4
/*
The following lines of code, when arranged in the proper sequence, output the simple message “All
your base are belong to us.”
1. return 0;
2. const char msg[] = MSG1;
3. }
4. #define MSG1 "All your base are belong to us!"
5. int main(void) {
6. #include <stdio.h>
7. puts(msg);
Write out the proper arrangement (line numbers are sufficient) of this code

    code:
        #include <stdio.h>
        #define MSG1 "All your base are belong to us!"
        int main(void) {
            const char msg[] = MSG1;
            puts(msg);
            return 0;
        }
*/

//Problem 1.5
/*
For each of the following statements, explain why it is not correct, and fix it.
(a) #include <stdio.h>;
    --> we can't but ; at the end cause it's not a statement it's Preprocessor Directive
    --> the correst:
        #include <stdio.h>

(b) int function(void arg1) 

{
return arg1-1;
S
}
    --> we can't use void before arg1 cause it's an int function, it's return valuse so we must but int
    --> correct:
        int function(int arg1)
        {
            return arg1-1;
        }

(c) #define MESSAGE = "Happy new year!"
puts(MESSAGE);
    --> we can't use = when we use #define cause it's not the structure of it, there structure:
    # define name valuse
    --> correct:
        #define MESSAGE "Happy new year!"
*/
