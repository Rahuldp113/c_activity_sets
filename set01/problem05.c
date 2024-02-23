//5. Write a C program to compare three numbers using **pass by value**

#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int input()
{
    int x; 
    printf("Enter the number: \n");
    scanf("%d", &x);
    return x;
}

int compare(int a, int b, int c)
{
    // Return the maximum of the three numbers directly
    return (a > b && a > c) ? a : ((b > c) ? b : c);
}

void output(int a, int b, int c, int largest)
{
    printf("The largest is %d \n", largest);
}

int main()
{
    int a = input();
    int b = input();
    int c = input();
    int largest = compare(a, b, c);
    output(a, b, c, largest);
    return 0;
}
