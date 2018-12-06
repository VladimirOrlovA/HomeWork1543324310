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

	printf("\n������� ������ ����� N : ");
	scanf_s("%d", &n);


	if ((n % 3) != 0 && (n % 7) == 0)
	{
		printf("\n������������� ������� a \n");
	}
	else { printf("\n�� ������������� ������� � \n"); }

	if ((n % 5) != 0 && (n % 4) != 0)
	{
		printf("������������� ������� b \n");
	}
	else { printf("�� ������������� ������� b \n"); }

	if ((n % 8) == 0 && (n % 11) == 0)
	{
		printf("������������� ������� c \n");
	}
	else { printf("�� ������������� ������� c \n"); }
}

void Task4()
{
	float n;

	printf("\n������� ��������� ������� : ");
	scanf_s("%f", &n);

	if (n > 400 && n < 600)
	{
		printf("\n������ �� ������� 5 ��������� %f \n\n", (n - (n*0.05)));
	}

	if (n > 600 && n < 1000)
	{
		printf("������ �� ������� 10 ��������� %f \n\n", (n - (n*0.1)));
	}
}

void Task5()
{
	float rent, prib, sebes, sebestek = 100;
	printf("\n������� ������� � ������������� � ������� ������: \n");
	scanf_s("%f", &prib);
	scanf_s("%f", &sebes);
	if (sebes <= (sebestek - (sebestek*0.05)))
	{
		rent = (prib / sebes) * 100;
		printf("�������������� ������ ����������� �� ����� %f �������� \n\n", rent);
	}
	else { printf("�������������� ������ ����������� �� �������������,\n�.�. �������� ������������� ����� 5 ��������� \n\n"); }
}

void Task6()
{
	int sec = 0 + rand() % 86400;
	int h, m;

	h = (float)sec / 3600;
	m = ((sec / 60) - h * 60);
	printf("\n���� %d ������� �����\n", sec);
	printf("\n��� %d � : %d � \n\n", h, m);
}

void Task7()
{
	int a, b, n = 10 + rand() % 99;
	printf("\n��������� ����� %d \n\n", n);

	a = n / 10;
	b = n % 10;
	printf("������� \"A\" : %d \n", a);
	printf("������� \"B\" : %d \n\n", b);

	if (n % 2 == 0)
	{
		printf("������ ����� �������� ������ ����������\n\n");
	}

	if (a % 2 > 0 || b % 2 > 0)
	{
		printf("����� ���� �� ����� � � � ��������\n\n");
	}

	if (a % 2 > 0 && b % 2 > 0)
	{
		printf("������ �� ����� � � � ��������\n\n");
	}
}

void Task8()
{
	int N = 70;

	printf("\n����� %d \n\n", N);
	if (N % 2 == 0 && N % 7 == 0 && N % 11 > 0 && N % 13 > 0) { printf("��� ����� ������ ������� �� 7, �� �� ������� �� 11 � 13 ��� �������.\n\n"); }
	else { printf("��� ����� �� �������� � �������: ������, ������� �� 7, �� �� ������� �� 11 � 13 ��� �������.\n\n"); }
}

void Task10()
{
	int d = 1 + rand() % 6;		// ���� ������ � ��-��
	int t = 0 + rand() % 24;	// ����� �����
	int dt = 0 + rand() % 120;	// ����������������� ��������� � �������
	int s = 10;					// ����� �� 1 ������ ���������
	int sum;

	printf("\n\n���� ������ %d \n", d);
	printf("����� ������ ��������� %d \n\n", t);


	if (d == 6 || d == 7)
	{
		if (t >= 22 || t < 8)
		{
			printf("�������� ��������� � ��-�� � 22:00 �� 8:00, ��������� ������ -20 ���������, ��� ������ -10 ���������\n");
			sum = dt * (s - (s*0.28));
			printf("������������ ��������� %d �����, � ������: %d \n\n", dt, sum);
		}

		else if (d == 6 || d == 7)
		{
			printf("�������� ��������� � ��-�� \n");
			sum = dt * s;
			printf("������������ ��������� %d �����, � ������: %d\n\n", dt, sum);
		}

	}
	else
	{
		if (t >= 22 || t < 8)
		{
			printf("�������� ��������� � 22:00 �� 8:00, ��������� ������ -20 ���������\n");
			sum = dt * (s - (s*0.20));
			printf("������������ ��������� %d �����, � ������: %d \n\n", dt, sum);
		}

		else
		{
			printf("�������� ��������� � 8:00 �� 22:00 \n");
			sum = dt * s;
			printf("������������ ��������� %d �����, � ������: %d\n\n", dt, sum);
		}
	}
}

int main()
{
	int t;
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task;
	int flag;

start:

	printf("������� ����� ������� => ");
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

	printf("\n�� ������ ����������? �������� 0/1 => ");
	scanf_s("%d", &flag);

	if (flag == 1)
		goto start;

	system("pause");
}