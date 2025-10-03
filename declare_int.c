#include <stdio.h>

int main() {
    
    int numbers[5];

   
    numbers[0] = 5;
    numbers[1] = 10;
    numbers[2] = 15;
    numbers[3] = 20;
    numbers[4] = 25;

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}