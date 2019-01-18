#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

#define size 10
void task1()
{
//1.Ввести два целочисленных массива − по 10 элементов в каждом
//Сформировать новый массив, на четных местах которого будут элементы с нечетными индексами из первого массива
//а на нечетных – с четными индексами из второго.
	int array1[size] = { 0 };
	int array2[size] = { 0 };
	int array3[size] = { 0 };
	for (int i = 0; i < size; i++)
	{
		array1[i] = 0 + rand() % 1000;
		array2[i] = 0 + rand() % 1000;
	}
	for (int i = 0; i < size; i++)
	{
		if (i % 2)
			array3[i] = array1[i];
		else
			array3[i] = array2[i];
	}
	for (int i = 0; i < size; i++)
	{
		printf("array[%d]->%d\n", i, array3[i]);
	}
}

# define size1 17
void task2()
{
//2.Ввести целочисленный массив, состоящий из 17 - ти элементов(двузначные целые числа).Вычислить сумму цифр этого массива
	int array[size1] = { 0 };
	int summ = 0;
	for (int i = 0; i < size1; i++)
	{
		array[i] = 10 + rand() % 90;
		summ += array[i];
	}
	printf("Сумма->%d\n", summ);
}

#define size2 10
void task3()
{
//3.Ввести два массива X и Y, состоящих из 10 - ти элементов целого типа.Сформировать массив S, состоящий из одинаковых элементов исходных массивов
	int X[size2] = { 1,2,3,4,5,6,7,8,9,10 };
	int Y[size2] = { 1,2,3,4,5,12,34,45,56,12 };
	int S[size2] = { 0 };
	int i = 0;
	int s = 0	;
	/*for (int i = 0; i < size2; i++)
	{
		X[i] = 0 + rand() % 5;
		Y[i] = 0 + rand() % 5;
	}*/
	for (int i= 0; i < size2; i++)
	{
		if (X[i] == Y[i])
		S[s++] = Y[i];
	}
	for (int i = 0; i < s; i++)
	{
		printf("S[%d]->%d\n", i, S[i]);
	}
}

#define Q 16
void task4()
{
//4.Дан массив вещественных чисел Z(16)
//Определить разность между суммой элементов c четными индексами и суммой элементов, индексы которых кратны трем
	int z[Q] = { 0 };
	int s1 = 0, s2 = 0;
	int r;
	for (int i = 0; i < Q; i++)
	{
		z[i] = 0 + rand() % 50;
		if (z[i] % 2 == 0) s1+=z[i];
		if (z[i] % 3 == 0) s2+=z[i];
	}
	r = s1 - s2;
	printf("Разность ->%d\n", r);
}

#define size3 12
void task5()
{
//5.Ввести массив, состоящий из 12 элементов действительного типа
//Расположить элементы в порядке убывания
//Определить количество  происшедших при этом перестановок.
	int arr[size3] = { 0 };
	int i, a=0, n=1;
	int p=0;
	for (int i = 0; i < size3; i++)
	{
		arr[i] = 0 + rand() % 50;
	}
	while (n)
	{
		n = 0;
		for (i = 0; i < size3; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				p++;
				n = 1;
				a = arr[i + 1]; arr[i + 1] = arr[i];
				arr[i] = a;
			}
		}
	}
	for (i = 0; i < size3; i++)
	{
		printf("arr[%d]->%d\n",i, arr[i]);
	}
	printf("Количество перестановок->%d\n", p);
}

#define q 11
void task6()
{
//6.Ввести с клавиатуры целочисленный массив, состоящий из 11 элементов
//Вычислить сумму нечетных по значению отрицательных элементов и заменить элементы кратные трем на эту сумму.
	int arr[q] = { 0 };
	int summ = 0;
	int i = 0;
	printf("Введите элементы массива\n");
	for (int i = 0; i < q; i++)
	{
		printf("->");
		scanf_s("%d", &arr[i]);
		if (arr[i+1]%2!=0 && arr[i+1]<0)
		{
			summ++;
			summ = arr[i];
		}
	}
	for (int i = 0; i < q; i++)
	{
		printf("arr[%d]->%d\n", i, arr[i]);
	}
}

#define S 10
void task7()
{
//8.Ввести целочисленный массив, состоящий из 10 элементов
//Определить сумму и количество элементов, расположенных до первого отрицательного числа
	int arr[S] = { 0 };
	int kol = 0;
	int sum = 0;
	for (size_t i = 0; i < S; i++)
	{
		arr[i] = -5 + rand() % 20;
	}

	for (size_t i = 0; i < S; i++)
	{
		if (arr[i]<0)
		{
			kol++;
			sum += arr[i];
		}
	}
	printf("Сумма ->%d\nКоличество->%d\n", sum, kol);
}


void task8()
{
//9.Определить количество локальных минимумов в заданном числовом массиве
//(Локальный минимум в числовом массиве – это последовательность трех рядом стоящих чисел
//в которой среднее число меньше стоящих слева и справа от него)
	int locale[S] = { 0 };
	int min = 0;
	for (size_t i = 0; i < S; i++)
	{
		locale[i] = 0 + rand() % 50;
	}
	for (size_t i = 0; i < S; i++)
	{
		if (locale[i] < locale[i - 1] && locale[i] < locale[i + 1])
		{
			min++;
		}
	}
	printf("Количество локальных минимумов->%d\n", min);
}

#define FG 20
void task9()
{
//11.В заданном целочисленном массиве удалить элементы, которые встречаются более двух раз
	int A[FG] = { 3, 3, 2, 2, 2, 7, 8, 4, 4, 4, 6, 5, 2, 2, 1, 1, 1, 6, 6, 6 };

	for (int n1 = 0; A[n1] > 0 && n1 < FG; n1++)
	printf("%d ", A[n1]);
	printf("\n");

	for (int i = 0; A[i] > 0 && i < FG; i++)
	{
		int count = 0;
		for (int k = 0; A[k] > 0 && k < FG; k++)
			if (A[k] == A[i]) count++;

		if (count > 2)
		{
			int value = A[i];
			for (int j = 0; A[j] > 0 && j < FG && count > 2; j++)
				if (A[j] == value)
				{
					for (int m = q; A[m] > 0 && m < FG; m++)
						A[m] = A[m + 1];

					j--;
				}

			i--;
		}
	}
	for (int n2 = 0; A[n2] > 0 && n2 < FG; n2++)
	printf("%d ", A[n2]);
	printf("\n");
}

#define N1 10
void task10()
{
//13.Ввести массив, состоящий из 15 элементов целого типа
//Упорядочить массив так, чтобы все отрицательные числа были расположены вначале по возрастанию
//а все положительные – в конце по убыванию
	int arr[N1] = { 0 };
	int i, j, c, min=0;
	for (int i = 0; i < N1; i++)
	{
		arr[i] = -5 + rand() % 30;
	}
	for (int i = 0; i < N1 - 1; i++)
		for (j = N1 - 2; j >= i; j--)
	{
			if (arr[j] > arr[j + 1])
			{
				c = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
			}
	}
	for ( i = 0; i < N1; i++)
	{
		printf("arr[%d]->%d\n", i, arr[i]);
	}
}


void task11()
{
//14.Даны два массива действительных чисел по 12 элементов в каждом.Заменить нулями те элементы первого массива, которые есть во втором
	int arr1[12] = { 0 };
	int arr2[12] = { 0 };
	for (int i = 0; i < 12; i++)
	{
		arr1[i] = 0 + rand() % 10;
		arr2[i] = 0 + rand() % 10;
	}
	for (int k = 0; k != 12; ++k)
	{
		if (arr1[k] == arr2[k])
		{
			arr1[k] = arr2[k+1];
		}
	}
	for (int i = 0; i != 12; i++)
	{
		printf("arr[%d]->%d\n", i, arr2[i]);
	}
}



void task12()
{
	//15.Задан целочисленный массив.Определить процентное содержание элементов, превышающих среднеарифметическое всех элементов массива
	
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("Введите номер задания ->");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	case 4: {task4(); }break;
	case 5: {task5(); }break;
	case 6: {task6(); }break;
	case 7: {task7(); }break;
	case 8: {task8(); }break;
	case 9: {task9(); }break;
	case 10: {task10(); }break;
	case 11: {task11(); }break;
	case 12: {task12(); }break;
	default:
		break;
	}
	printf("Чтобы продолжить нажмите 1->");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}