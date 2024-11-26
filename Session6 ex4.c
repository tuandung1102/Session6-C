#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c;
	double detal,x1,x2;
	printf("Moi nhap vao cac he so a,b,c cua phuong trinh bac 2: \n");
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);
	
	if (a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem");
			} else{
				printf("Phuong trinh vo nghiem");
			}
		} else{
			printf("Phuong trinh co mot nghiem la: x=%2.lf\n", -c/b);
		}
	} else{
		detal=b*b-4*a*c;
		if (detal<0){
		
			printf("Phuong trinh vo nghiem");
		} else if (detal==0){
			x1= -b/2*a;
			printf("Phuong trinh co nghiem kep: x1=x2=%2.lf\n", x1);
		} else {
			x1= (-b + sqrt(detal))/(2*a);
			x2= (-b - sqrt(detal))/ (2*a);
			printf("Phuong trinh co hai nghiem phan biet: \n");
			printf("x1=%2.lf",x1);
			printf("x2=%2.lf",x2);
		}
	}
	
	return 0;	
	
}
