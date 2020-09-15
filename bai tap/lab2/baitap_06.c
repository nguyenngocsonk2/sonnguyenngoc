#include <stdio.h>
#include <conio.h>

main(){
	float toan, ly, hoa;
	
	printf("nhap diem toan: \n");
	scanf("%f",&toan);
	
	printf("nhap diem ly: \n");
	scanf("%f",&ly);
	
	printf("nhap diem hoa:\n");
	scanf("%f",&hoa);
	printf("diem tong=%f",toan+ly+hoa);
	printf("diem trung binh=%f",(toan+ly+hoa)/3);
	getch();
}
