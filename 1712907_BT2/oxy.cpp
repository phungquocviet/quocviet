#include "oxy.h"

void input2d(diem2d &A)
{
	printf("Nhap hoanh do: ");
	scanf_s("%f", &A.iX);
	printf("Nhap tung do: ");
	scanf_s("%f", &A.iY);
}
void output2d(diem2d A)
{
	printf(">>>>>(%f ; %f) ", A.iX, A.iY);
}
void kiemtragocphan4(diem2d A)
{
	if (A.iX == 0 || A.iY == 0)
	{
		printf("Diem nay nam tren truc toa do\n");
	}
	else if (A.iX>0&&A.iY>0)
	{ 
		printf("Thuoc goc phan 4 thu nhat\n");
	}
	else if (A.iX<0 && A.iY>0)
	{
		printf("Thuoc goc phan 4 thu hai\n");
	}
	else if (A.iX<0 && A.iY<0)
	{
		printf("Thuoc goc phan 4 thu ba\n");
	}
	else
	{
		printf("Thuoc goc phan 4 thu tu\n");
	}

}
void input2point(diem2d &M, diem2d &N)
{
	printf("\nNhap toa do diem thu nhat\n");
	input2d(M);
	output2d(M);
	printf("\nNhap toa do diem thu 2\n");
	input2d(N);
	output2d(N);
}
float khoangcach(diem2d &M, diem2d &N)
{
	float kc = sqrt((M.iX - N.iX)*(M.iX - N.iX) + (M.iY - N.iY)*(M.iY - N.iY));
	return kc;
}
void dientichchuvi(diem2d &A, diem2d &B, diem2d &C)
{
	printf("\n\nToa do 3 dinh cua tam giac");
	printf("\nNhap toa do dinh thu nhat: \n");
	input2d(A);
	output2d(A);
	printf("\nNhap toa do dinh thu hai: \n");
	input2d(B);
	output2d(B);
	printf("\nNhap toa do dinh thu ba: \n");
	input2d(C);
	output2d(C);
	float S, P;
	S = 0.5*abs((B.iX-A.iX)*(C.iY-A.iY)-(C.iX-A.iX)*(B.iY-A.iY));
	P = khoangcach(A, B) + khoangcach(B, C) + khoangcach(A, C);
	printf("\nDien tich tam giac = %f", S);
	printf("\nChu vi tam giac = %f\n", P);

}