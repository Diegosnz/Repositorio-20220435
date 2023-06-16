#include <stdio.h>
#include <string.h>

int main(void)
{
    char *cad0;
    cad0 = "Argentina";
    puts(cad0);

    cad0 = "Brasil";

    puts(cad0);

    char cad1[20];
    gets(cad1);
    puts(cad1);

    char cad2[20] = "Mexico";
    puts(cad2);
    gets(cad2);
    puts(cad2);


    strcpy(&cad2[10], "Guatemala");

    return 0;
}
