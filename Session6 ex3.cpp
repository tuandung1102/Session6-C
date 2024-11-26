#include <stdio.h>
#include <string.h>
int main(){
	char pass[] = "matkhau";
	char inputpass[50];
	printf("Moi ng dung nhap mat khau: ");
	scanf("%49s", inputpass);
	if (strcmp (pass, inputpass) ==0){
		printf("Mat khau dung \n");
	} else {
		printf("Mat khau khong dung \n");
	}
	return 0;
}
