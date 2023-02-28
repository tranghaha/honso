#include<stdio.h>
#include<conio.h>
struct HonSo
{
	int Tu;
	int Mau;
	int Nguyen;
};
typedef struct HonSo HONSO;
void NhapHonSo(HONSO &);
void XuatHonSo(HONSO );
void NhapHonSo(HONSO &hs)
{
	printf("\n Nhap nguyen:");
	scanf("%d",&hs.Nguyen);
	printf("\n Nhap tu so:");
	scanf("%d",&hs.Tu);
	printf("\n Nhap mau so:");
	scanf("%d",&hs.Mau);
}
void XuatHonSo(HONSO hs)
{
	printf("%d(%d%d)",hs.Nguyen,hs.Tu,hs.Mau);
}
int main()
{
	HONSO hs;
	NhapHonSo(hs);
	XuatHonSo(hs);
	getch();
	return 0;
}
