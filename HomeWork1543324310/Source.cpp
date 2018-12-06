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

void Task3()  // Task3 == Task == 9 :)
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

void Task10()
{
	int d = 1 + rand() % 6;		// день недели с Пн-Вс
	int t = 0 + rand() % 24;	// время суток
	int dt = 0 + rand() % 120;	// продолжительность разговора в минутах
	int s = 10;					// тариф за 1 минуту разговора
	int sum;
	
	printf("День недели %d \n", d);
	printf("Время начала разговора %d \n\n", t);
	

	if (d == 6 || d == 7)
	{
		if (t >= 22 && t < 8)
		{
			printf("Разговор состоялся в Сб-Вс с 22:00 до 8:00, применимы скидка -20%, доп скидка -10%\n");
			sum = dt*(s - (s*0.28));
			printf("Длительность разговора %d минут, к оплате: %d", dt, sum);
		}

		if (d == 6 || d == 7)
		{
			printf("Разговор состоялся в Сб-Вс применима скидка -10%\n");
			sum = dt*(s - (s*0.10));
			printf("Длительность разговора %d минут, к оплате: %d\n\n", dt, sum);
		}
		
	}
	else
	{
		if (t >= 22 && t < 8)
		{
			printf("Разговор состоялся с 22:00 до 8:00, применима скидка -20%\n");
			sum = dt*(s - (s*0.28));
			printf("Длительность разговора %d минут, к оплате: %d\n\n", dt, sum);
		}

		else
		{
			printf("Разговор состоялся с 8:00 до 22:00 \n");
			sum = dt*(s - (s*0.20));
			printf("Длительность разговора %d минут, к оплате: %d\n\n", dt, sum);
		}
	}
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
	case 9: {Task3(); } break;
	case 10: {Task10(); } break;

		
	default:
		break;
	}
	system("pause");
}