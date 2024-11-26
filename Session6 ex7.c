#include <stdio.h>

int main() {
    int num;

    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    printf("Cac uoc cua %d la:\n", num);

   
    for (int i = 1; i <= abs(num); i++) {  
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

