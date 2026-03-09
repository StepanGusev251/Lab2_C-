#include <iostream>
#include <clocale>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

void sort(int arr[], int n);
void task_1_and_3();
void task_2();


int main() {
	setlocale(LC_ALL, "RUS");
	int choice;
	do {
		cout << "====ГЛАВНОЕ МЕНЯ====" << endl;
		cout << "1 - Задание 1 и 3" << endl;
		cout << "2 - Задание 2" << endl;
		cout << "0 - Выход" << endl;
		cout << "Выберите номер: " << endl;

		cin >> choice;
		
		switch (choice)
		{
		case 1: task_1_and_3(); break;
		case 2: task_2(); break;
		case 0: break;
		default: cout << "Неверный ввод" << endl;
	
		} 
	} while (choice != 0);

 }


void sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void task_1_and_3()
{

	int N;
	int arr[100];

	// Заполнение массива
	cout << "Введите размер массива: ";
	cin >> N;

	cout << "Введите " << N << " элементов: ";
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cout << "Arr: ";
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Минимальный элемент массива
	int min = arr[0];
	for (int i = 0; i < N; i++) {
		if (min > arr[i]) min = arr[i];
	}
	cout << "Минимальный элемнт массива: " << min << endl;

	// Сумма элементов массива
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}
	cout << "Сумма элементов: " << sum << endl;

	// Положительные элементы массива
	cout << "Положительные элементы массива: ";
	for (int i = 0; i < N; i++) {
		if (arr[i] > 0) cout << arr[i] << " ";
	}
	cout << endl;

	// Отсортированный массив
	cout << "Отсортированный массив: ";
	sort(arr, N);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void task_2() {
	int arr[6][5];
	int result[5] = { 0 }; // сразу заполняем нулями

	// Ввод
	cout << "Введите 30 чисел (6 строк по 5 чисел):" << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}

	// Поиск первого четного в каждом столбце
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 6; i++) {
			if (arr[i][j] % 2 == 0) {
				result[j] = arr[i][j];
				break;
			}
		}
	}


// Вывод результата
cout << "Результат: ";
for (int j = 0; j < 5; j++) {
	cout << result[j] << " ";
}
cout << endl;

}