#include <stdio.h>

int main() {
    const int daysInWeek = 7;
    int days[10];
    int dayTotal;

    for(int c = 0; c < 10; c++){
        printf("Enter number of days [%d]: \n", c+1);
        scanf("%d", &days[c]);
        dayTotal += days[c];
    }

    printf("\nTotal number of days: %d\n", dayTotal);
    printf("This is equal to %d week/s and %d day/s.\n", dayTotal/7 , dayTotal%7);
}
