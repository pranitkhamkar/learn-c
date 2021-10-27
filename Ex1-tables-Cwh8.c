# include <stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60

*/

int main()
{
    int n;

printf("give the no.: ");
    scanf("%d", &n);
printf("\ntable of %d as follows: \n\n", n);
    for (int i=1;i<=10;i++){
        printf("%d X %d = %d\n", n, i , n*i );
    }
}