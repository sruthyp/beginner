#include <stdio.h>
 
int main() 
{
    int array[100], minimum, value, c, location = 1;
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&value);
 
    printf("Enter %d integers\n", value);
 
    for ( c = 0 ; c < value ; c++ )
        scanf("%d", &array[c]);
 
    minimum = array[0];
 
    for ( c = 1 ; c < value ; c++ ) 
    {
        if ( array[c] < minimum ) 
        {
           minimum = array[c];
           location = c+1;
        }
    } 
 
    printf("Minimum element is  %d and it's value is %d.\n", location, minimum);
    return 0;
}
