#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;

    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    
    if (num <= 1) {
        isPrime = false; 
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false; 
                break;
            }
        }
    }

    
    if (isPrime) {
        printf("%d la so nguyen to\n", num);
    } else {
        printf("%d khong phai la so nguyen to\n", num);
    }

    return 0;
}

