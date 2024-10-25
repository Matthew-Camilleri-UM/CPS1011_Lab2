#include <stdio.h>

int main(void){
    int num;

    printf("Please input an integer: ");
    scanf("%d", &num);

    char character = (char)num;

    printf("\nThe corresponding character is: %c.\n", character);
    return 0;
}
