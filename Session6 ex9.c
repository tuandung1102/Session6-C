#include <stdio.h>
#include <math.h>

int main() {
    printf("Cac so trong Armstrong co ba chu so la:\n");

    
    for (int num = 100; num <= 999; num++) {
        int hundreds, tens, units;
        int sum_of_cubes;

        
        hundreds = num / 100;          
        tens = (num / 10) % 10;       
        units = num % 10;             

       
        sum_of_cubes = pow(hundreds, 3) + pow(tens, 3) + pow(units, 3);

       
        if (sum_of_cubes == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}

