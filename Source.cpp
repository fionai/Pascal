#include <iostream>
using namespace std;
//#define PASCAL_ARR
#define PASCAL_CLEAR


void main()
{
	setlocale(LC_ALL, "");

#ifdef PASCAL_ARR

	int n, k;
	int num[22], num2[22]; // num - предыдущий массив, num2 - новый, формируемый в данный момент

	cout << "“–≈”√ќЋ№Ќ»  ѕј— јЋя\n";
	cout << "¬ведите высоту треугольника (количество строк), не более 20: ";
	cin >> n;

	while (n > 20)
	{
		cout << "¬ведите число, не больше, чем 20: ";
		cin >> n;
	}


	for (int i = 0; i < n; i++) //счетчик, он же номер текущей строки, он же количество ненулевых элементов предыдущей строки
	{
		k = 0;
		for (int j = 0; j < n - i; j++)
		{
			if (j == n - i - 1) // находим позицию первого числа строки
			{
				num2[k] = 1;
				cout << num2[k] << "     ";
				k++;
				for (int f = 0; f < i; f++) //после первого числа дописываем строку из i элементов
				{
					num2[k] = num[k - 1] + num[k];
					cout << num2[k];

					if (num2[k] < 10) cout << "     ";
					else if (num2[k] < 100) cout << "    ";
					else if (num2[k] < 1000) cout << "   ";
					else if (num2[k] < 10000) cout << "  ";
					else if (num2[k] < 100000) cout << " ";
					k++;
				}
			}
			else
				cout << "   "; // определила, что в нашем случае дл€ красоты надо 3 места на одну позицию
		}
		num2[k] = 0;
		cout << endl << endl;

		for (int j = 0; j <= k; j++) //запоминаем текущий массив
			num[j] = num2[j];
	}
#endif // PASCAL_ARR

#ifdef PASCAL_CLEAR


	int n;
	double num; // ввела доп.число, чтобы не было переполнени€ разр€дов
	int num2, len;

	cout << "“–≈”√ќЋ№Ќ»  ѕј— јЋя\n";
	cout << "¬ведите высоту треугольника (количество строк): ";
	cin >> n;


	for (int i = 0; i < n; i++) //счетчик, он же номер текущей строки, он же количество ненулевых элементов предыдущей строки
	{
		for (int j = 0; j < n - i; j++)
		{
			if (j == n - i - 1) // находим позицию первого числа строки
			{
				cout << 1 << "       ";
				for (int f = 1; f <= i; f++) //после первого числа дописываем строку из i элементов
				{
					//вычисление элемента
					num = 1;
					for (int x = 0; x < (i - f); x++)
					{
						num *= (i - x);
						num /= (x + 1);
					}

					num2 = num;
					cout << num2;

					//вычисл€ем длину числа
					len = 0;
					while (num2)
					{
						len++;
						num2 /= 10;
					}
					
					for (int l = 0; l < (8 - len); l++)
						cout << " ";
				}
			}
			else
				cout << "    "; // если рисовать до 30 строк, дл€ красоты хватит 4 места на одну позицию
		}
		cout << endl;// << endl;
	}
#endif // PASCAL_CLEAR


}