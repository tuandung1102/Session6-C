#include <stdio.h>
int main(){
	int number[5];
	int evencount=0;
	int oddcount=0;
	printf("Nhap vao 5 so nguyen: \n");
	for (int i=0;i<5;i++){
	   printf("So thu %d ",i+1);
	   scanf("%d", &number[i]);
	 if (number[i] % 2 !=0){
	 	oddcount ++;
	 }else {
	 	evencount++;
	 }
	 }
	 printf("So luong so le la: %d\n", oddcount);
	 printf("So luong so chan la: %d\n", evencount);
	 return 0;
	}
   
