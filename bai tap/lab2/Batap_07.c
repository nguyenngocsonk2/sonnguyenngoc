#include <stdio.h>
#include <conio.h>
main(){
	float a,b,c,r;
	printf("nhap kich thuoc canh vuong\n");
	scanf("%f",&a);
	printf("chu vi hinh vuong la: %f\n", a*4);
	printf("dientich hinh vuong la: %f\n", a*a);
	
	printf("nhap kich thuoc canh ngan hinh chu nhat\n");
	scanf("%f",&b);
	printf("nhap kich thuoc canh dai hinh chu nhat\n");
	scanf("%f",&c);
	printf("chu vi hinh chu nhat la: %f\n",(b+c)*2);
	printf("dien tich hinh chu nhat la: %f\n",b*c);
	
	printf("nhap ban kinh duong tron\n");
	scanf("%f",&r);
	printf("chu vi hinh tron la: %f\n", 2*3.14*r);
	printf("dien tich hinh tron la: %f\n", 3.14*r*r);
	getch();
}
