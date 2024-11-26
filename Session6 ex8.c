#include <stdio.h>
#include <math.h>

int main() {
    double principal, interest_rate, total_interest, total_amount;
    int months;

   
    printf("Nhap so tien ban dau: ");
    scanf("%lf", &principal);
    printf("Nhap lai suat thang (%%): ");
    scanf("%lf", &interest_rate);
    printf("Nhap so thang gui: ");
    scanf("%d", &months);

   
    interest_rate = interest_rate / 100;

   
    total_amount = principal * pow(1 + interest_rate, months);

   
    total_interest = total_amount - principal;

    
    printf("Tien lai: %.3lf\n", total_interest);
    printf("Tien nhan duoc: %.3lf\n", total_amount);

    return 0;
}

