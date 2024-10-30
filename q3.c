#include <stdio.h>

int main() {
    char words[3][20];

    for(int c = 0; c < 3; c++){
        printf("Enter word %d:", c+1);
        scanf("%s", &words[c]);
}
    printf("Reverse order words:\n");
    for(int c = 2; c >= 0; c--){
        printf("%s\n",words[c]);
    }
}
