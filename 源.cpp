#include <stdio.h>

int T1(void)
{
	int min, max;
	int n, m;
	scanf_s("%d%d", &n, &m);
	if (n >= m)
	{
		min = m;
		max = n;
	}
	else {
		max = m;
		min = n;
	}
	for (int cnt = min; min > 0; cnt--)
	{
		if (n % cnt == 0)
		{
			if (m % cnt == 0)
			{
				printf("%d\n", cnt);
				break;
			}
		}
	}
	for (int cnt = min;; cnt++)
	{
		if (cnt % min == 0)
		{
			if (cnt % max == 0)
			{
				printf("%d\n", cnt);
				break;
			}

		}
	}
	return 0;
}

int T2(void)
{
	int n;
	double sum=0.0, item = 0.0;
	scanf_s("%d", &n);
	for (int cnt1 = 1; cnt1 <= n; cnt1++) {
		item = 1.0;
		for (int cnt2 = 1; cnt2 <= cnt1; cnt2++) {
			item *= cnt2;
		}
		sum = sum + item;
	}
	printf("%.2lf", sum);
	return 0;
}

int T3(void)
{
	int n,num=0;
	bool b=1;
	scanf_s("%d", &n);
	for (int cnt1 = n;cnt1>100; cnt1--)
	{
		for (int cnt2 = 2;cnt2<cnt1;cnt2++)
		{
			if (cnt1%cnt2==0)
			{
				b = 0;
				break;
			}
		}
		if (b)
		{
			num++;
		}
		b = 1;									/*°â»ú?´ó¸Å°É*/
	}
	printf("%d", num);
	return 0;
}

int T4(void)
{
	for()
	return 0;
}

int T5(void)
{
	return 0;
}

int T6(void)
{
	return 0;
}

int T7(void)
{
	return 0;
}

int T8(void)
{
	return 0;
}

int T9(void)
{
	return 0;
}

int T10(void)
{
	return 0;
}

int main()
{
	//T1();
	//T2();
	//T3();
	T4();
	T5();
	T6();
	T7();
	T8();
	T9();
	T10();
	return 0;
}

