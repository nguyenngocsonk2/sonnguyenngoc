#include <stdio.h>
#include <conio.h>

main(){
	float Top, Botton, Height;
	printf("moi ban nhap so do day nho : ");
	scanf("%f",&Top);
	printf("moi ban nhap so do day lon : ");
	scanf("%f",&Botton);
	printf("moi ban nhap so do chieu cao : ");
	scanf("%f",&Height);
	printf("dien tich hinh thang la :%f", (Top+Botton)*Height/2);
	getch();
	}
