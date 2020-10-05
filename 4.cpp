#include <stdio.h>

int main()

{

char *stringa[50];

char *one = “We”;

char *two = “Are”;

char *three = “Creating”;

char *four = “a”;

char *five = “String”;

sprintf(stringa, "%s %s %s %s %s", one, two, three, four, five);

puts(stringa);

return(0);

}
