#include <cs50.h>
#include <stdio.h>

//put funtion here

bool valid_triangle (int a, int b, int c);
   
int main(void)
{
    printf("enter an integer:\n");
    int a = get_int();

    printf("enter another integer:\n");
    int b = get_int();

    printf("enter the last integer:\n");
    int c = get_int();

 bool vt = valid_triangle(a, b, c);
    if (vt == true)
    {

        printf("the integers %i, %i, and %i make a valid triangle.\n", a, b, c);
    }
    else
    {
    printf("the integers %i, %i, and %i do not make a valid triangle.\n", a, b, c);
    }
   }



bool valid_triangle(int a, int b, int c)

{
if ((a <= 0) || ( b <= 0) || (c <= 0))
return false;
{
    if ((a + b) < c || (a + c) < b || (b + c) < a)
    {
     return false;
    }
     else
   {
       return true;
   }
    }
}
