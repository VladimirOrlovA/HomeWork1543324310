#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>
#include<time.h>

void Task1()
{
	printf("\n	Name:			\"The war and the peace\"\n");
	printf("	Avtor:			L.N.Tolstoj\n");
	printf("	Izdatelstvo:		Piter\n");
	printf("	Pages :			500\n\n");
}

void Task2()
{
	printf("\nName	- PP - 12 - 1\n");
	printf("Creator	- student\n");
	printf("Size	- 50MB\n");
	printf("Path	- D:\Academy\PP - 12 - 1\n\n");

}

void Task3()
{
	int n;

	printf("Введите четное число N : ");
	scanf_s("%d", &n);


	if ((n % 3) != 0 && (n % 7) == 0)
	{
		printf("Удовлетворяет условию a \n");
	}
	else { printf("Не удовлетворяет условию а \n"); }

	if ((n % 5) != 0 && (n % 4) != 0)
	{
		printf("Удовлетворяет условию b \n");
	}
	else { printf("Не удовлетворяет условию b \n"); }

	if ((n % 8) == 0 && (n % 11) == 0)
	{
		printf("Удовлетворяет условию c \n");
	}
	else { printf("Не удовлетворяет условию c \n"); }
}

void Task4()
{
	float n;

	printf("Введите стоимость покупки : ");
	scanf_s("%f", &n);

	if (n > 400 && n < 600)
	{
		printf("Скидка на покупку 5 процентов %f \n", (n - (n*0.05)));
	}

	if (n > 600 && n < 1000)
	{
		printf("Скидка на покупку 10 процентов %f \n", (n - (n*0.1)));
	}
}

void Task5()
{
	float rent, prib, sebes, sebestek = 100;
	printf("Введите прибыль и себестоимость в текущем месяце: \n");
	scanf_s("%f", &prib);
	scanf_s("%f", &sebes);
	if (sebes <= (sebestek - (sebestek*0.05)))
	{
		rent = (prib / sebes) * 100;
		printf("Рентабельность работы предприятия за месяц %f процента \n\n", rent);
	}
	else { printf("Рентабельность работы предприятия не расчитывается,\nт.к. снижение себестоимсоти менее 5 процентов \n\n"); }
}

void Task6()
{
	int sec = 0 + rand() % 86400;
	int h, m;

	h = (float)sec / 3600;
	m = ((sec / 60) - h * 60);
	printf("\nЭто %d ч : %d м \n\n", h, m);
}

void Task7()
{
	int a, b, n = 10 + rand() % 99;
	printf("Случайное число %d \n\n", n);

	a = n / 10;
	b = n % 10;
	printf("Десятки \"A\" : %d \n", a);
	printf("Единицы \"B\" : %d \n\n", b);

	if (n % 2 == 0)
	{
		printf("Данное число является четным двузначным\n\n");
	}

	if (a % 2 > 0 || b % 2 > 0)
	{
		printf("Ровно одно из чисел А и В нечетное\n\n");
	}

	if (a % 2 > 0 && b % 2 > 0)
	{
		printf("Каждое из чисел А и В нечетное\n\n");
	}
}

void Task8()
{
	int N = 70;

	printf("Число %d \n\n", N);
	if (N % 2 == 0 && N % 7 == 0 && N % 11 > 0 && N % 13 > 0) { printf("Это число четное делится на 7, но не делится на 11 и 13 без остатка.\n\n"); }
	else { printf("Это число не подходит к условию: четное, делится на 7, но не делится на 11 и 13 без остатка.\n\n"); }
}

void Task9()
{
	int N = 30;

	printf("Число %d \n\n", N);
	if (N % 2 != 0 && N % 7 == 0 && N % 11 > 0 && N % 13 > 0) { printf("\n\n"); }
	else { printf("\n\n"); }
}

void Task10()
{

}

int main()
{
	int t;
	setlocale(LC_ALL, "");
	srand(time(NULL));

	printf("Введите номер задания =>");
	scanf_s("%d", &t);

	switch (t)
	{
	case 1: {Task1(); } break;
	case 2: {Task2(); } break;
	case 3: {Task3(); } break;
	case 4: {Task4(); } break;
	case 5: {Task5(); } break;
	case 6: {Task6(); } break;
	case 7: {Task7(); } break;
	case 8: {Task8(); } break;
	case 9: {Task9(); } break;
	case 10: {Task10(); } break;

		
	default:
		break;
	}
	system("pause");
}