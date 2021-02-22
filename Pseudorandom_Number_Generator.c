#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int input, loop;
    printf("Enter input number\n:");
    scanf("%d", &input);
    for (loop = 0; loop < input; loop++)
    {

        printf("%d\t", rand() % 10);
    }
    return 0;
}