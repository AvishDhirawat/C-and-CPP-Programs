#include <stdio.h>
#include<string.h>

int main()

{

char *stringa[30];

int *fingers = 5;

sprintf(stringa, "Number of fingers making up a hand are %f", fingers);

puts(stringa);

return(0);

}
