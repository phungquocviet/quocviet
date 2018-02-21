#include "phanso.h" //nguyenvanaaaaaa
void nhapphanso(ps &a)
{
	printf("Nhap tu so: ");
	scanf_s("%d", &a.p);
	do
	{   printf("Nhap mau so: ");
		scanf_s("%d", &a.q);
	} while (a.q == 0);
}
int UCLN(ps a)
{
	int min,ucln;
	min = a.p > a.q ? a.p : a.q;
	for (int i = 1; i <= min; i++)
	{
		if (a.p%i == 0 && a.q%i == 0)
		{ 
			ucln = i;
		}
	}
	return ucln;
}
void phansotoigian(ps a)
{
	printf("%d/%d ", a.p / UCLN(a), a.q / UCLN(a));
}
void xuatphanso(ps a)
{
	printf(" %d/%d ", a.p, a.q);
}
void tong(ps &a, ps &b)
{
	printf("\n\n		Phep tinh TONG:\n");
	ps kq;
	printf("\nNhap tu va mau cua phan so thu nhat:\n");
	nhapphanso(a);
	printf("\nNhap tu va mau cua phan so thu hai:\n");
	nhapphanso(b);
	kq.p = a.p*b.q + b.p*a.q;
	kq.q = a.q*b.q;
	printf("%d/%d+%d/%d= ", a.p, a.q, b.p, b.q); phansotoigian(kq);
}
void hieu(ps &a, ps &b)
{
	printf("\n		Phep tinh HIEU\n");
	ps kq;
	printf("\nNhap tu va mau cua phan so thu nhat:\n");
	nhapphanso(a);
	printf("\nNhap tu va mau cua phan so thu hai:\n");
	nhapphanso(b);
	kq.p = a.p*b.q - b.p*a.q;
	kq.q = a.q*b.q;
	printf("%d/%d-%d/%d= ", a.p, a.q, b.p, b.q); phansotoigian(kq);
}
void tich(ps &a, ps &b)
{
	printf("\n		Phep tinh TICH\n");
	ps kq;
	printf("\nNhap tu va mau cua phan so thu nhat:\n");
	nhapphanso(a);
	printf("\nNhap tu va mau cua phan so thu hai:\n");
	nhapphanso(b);
	kq.p = a.p*b.p;
	kq.q = a.q*b.q;
	printf("%d/%d x %d/%d = ", a.p, a.q, b.p, b.q); phansotoigian(kq);
}
void thuong(ps &a, ps &b)
{
	printf("\n		Phep tinh THUONG\n");
	ps kq;
	printf("\nNhap tu va mau cua phan so thu nhat:\n");
	nhapphanso(a);
	printf("\nNhap tu va mau cua phan so thu hai:\n");
	nhapphanso(b);
	kq.p = a.p*b.q;
	kq.q = a.q*b.p;
	printf("%d/%d : %d/%d = ", a.p, a.q, b.p, b.q); phansotoigian(kq);
}
int sosanh(ps &a, ps &b)
{
	if (a.p*b.q - b.p*a.q == 0)
	{
		return 0;
	}
	else if ((a.p*b.q - b.p*a.q)*(a.q*b.q) > 0)
	{
		return 1;
	}
	else return -1;
}

/*-----------------------------------------------------*/

void inputarrphanso(ps F[], int &n)
{
	printf("\n\n\nNhap so phan tu cua day phan so: ");
	do
	{
		scanf_s("%d", &n);
	} while (n > N || n < 1);
	
	for (int i = 0; i < n; i++)
	{
		printf("Phan so thu %d: ", i+1);
		printf("\nTuso=");
		scanf_s("%d", &F[i].p);
		printf("Mauso=");
		scanf_s("%d", &F[i].q);
	}
}
void outputarrphanso(ps F[], int n)
{
	printf(">>>>>");
	for (int i = 0; i < n; i++)
	{
		printf("%d/%d ", F[i].p,F[i].q);
	}
}
ps sumps(ps &a,ps &b)
{
	ps kq;
	kq.p = a.p*b.q + b.p*a.q;
	kq.q = a.q*b.q;
	return kq;
}
void tongarr(ps F[], int n)
{
	ps sum;
	sum = F[0];
	for (int i = 1; i < n; i++)
	{
		sum = sumps(sum,F[i]);
	}
	printf("\n\nTong day phan so = %d/%d", sum.p, sum.q);
}
void thaythetoigian(ps F[], int n)
{
	printf("\n\nDay phan so sau khi toi gian: ");
	for (int i = 0; i < n; i++)
	{
		phansotoigian(F[i]);
	}
	printf("\n");
}
void sapxeptangdan(ps F[], int n)
{
	printf("\n>>Day phan so tang dan: ");
	ps temp;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sosanh(F[i], F[j])==1)
			{
				temp = F[i];
				F[i] = F[j];
				F[j] = temp;
			}
		}
	}

	for (int k = 0; k < n; k++)
	{
		xuatphanso(F[k]);
	}

}
int kiemtrapsK(ps F[], int n)
{
	ps K;
	printf("\n\nNhap phan so K:\n");
	nhapphanso(K);
	
	K.p = K.p / UCLN(K);
	K.q = K.q / UCLN(K);
	for (int i = 0; i < n; i++)
	{
		
		F[i].p = F[i].p / UCLN(F[i]);
		F[i].q = F[i].q / UCLN(F[i]);
		if (K.p == F[i].p && K.q==F[i].q)
		{
			return 1;
			break;
		}
	}
}