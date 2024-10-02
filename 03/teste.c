#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *s;

    s = malloc(sizeof(char) * 15);

    s = "OLA ADEUS";
    while (*s != ' ')
	{
        printf("%c", *s++);
	}
   printf("%s", s);
}