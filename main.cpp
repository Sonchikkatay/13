//задание 1

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	srand(time(0));
	const int n = 10;
	int qwe[n];
	int i;
	int a = 100;
	int b = 9000;

	for (i = 0; i < n; i++) {
		qwe[i] = a + rand() % (b - a + 1);
		cout << qwe[i] << " ";
	}

	double sum = 0;
	for (i = 0; i < n; i++) {
		sum += qwe[i];
	}
	cout << " " << endl;
	cout << " " << endl;
	double mu = sum / n;

	double sum_sq = 0;
	for (i = 0; i < n; i++) {
		sum_sq += pow(qwe[i] - mu, 2);
	}

	double sigma = sqrt(sum_sq / (n - 1));

	for (i = 0; i < n; i++) {
		double zi = (qwe[i] - mu) / sigma;

		double v = 1;

		if (abs(zi) > v) {
			cout << "Чек " << qwe[i] << ": Z = " << zi << endl;
			cout << "Выброс" << endl;
			cout << " " << endl;
			
		}
	}
}

//задание 2

//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cctype>
//#include <string>
//#include <windows.h>
//using namespace std;
//
//char rus_toupper(char c) {
//	string lower = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
//	string upper = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
//
//	for (size_t i = 0; i < lower.length(); i++) {
//		if (c == lower[i]) {
//			return upper[i];
//		}
//	}
//	return toupper(c);
//}
//
//int main() {
//	//кодировка для консоли
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	setlocale(LC_ALL, "Russian");
//
//	char qwe1[1000], qwe2[1000];
//	int i;
//
//	cout << "Введите строку 1: ";
//	gets_s(qwe1);
//	cout << "Введите строку 2: ";
//	gets_s(qwe2);
//
//	for (i = 0; qwe1[i]; i++) {
//		qwe1[i] = rus_toupper(qwe1[i]);
//	}
//	for (i = 0; qwe2[i]; i++) {
//		qwe2[i] = rus_toupper(qwe2[i]);
//	}
//
//	string rr = " .,!?/\\|#$:;%^&*()_+-=@№~`\"''";
//	string slova[1000];
//	string obshie_slova[1000];
//	string temp = "";
//
//	for (i = 0; qwe1[i]; i++) qwe1[i] = toupper(qwe1[i]);
//	for (i = 0; qwe2[i]; i++) qwe2[i] = toupper(qwe2[i]);
//
//	int wordCount = 0;
//	for (size_t i = 0; i < strlen(qwe1); i++) {
//		bool Razdelitel = false;
//		for (char r : rr) {
//			if (qwe1[i] == r) {
//				Razdelitel = true;
//				break;
//			}
//		}
//		if (!Razdelitel) {
//			temp += qwe1[i];
//		}
//		else {
//			if (temp != "") {
//				slova[wordCount] = temp;
//				wordCount++;
//				temp = "";
//			}
//		}
//	}
//	if (temp != "") {
//		slova[wordCount] = temp;
//		wordCount++;
//		temp = "";
//	}
//
//	int commonCount = 0;
//	temp = "";
//
//	for (size_t i = 0; i < strlen(qwe2); i++) {
//		bool Razdelitel = false;
//		for (char r : rr) {
//			if (qwe2[i] == r) {
//				Razdelitel = true;
//				break;
//			}
//		}
//
//		if (!Razdelitel) {
//			temp += qwe2[i];
//		}
//		else {
//			if (temp != "") {
//				for (int k = 0; k < wordCount; k++) {
//					if (temp == slova[k]) {
//						obshie_slova[commonCount] = temp;
//						commonCount++;
//						break;
//					}
//				}
//			}
//			temp = "";
//		}
//	}
//
//	if (temp != "") {
//		for (int k = 0; k < wordCount; k++) {
//			if (temp == slova[k]) {
//				obshie_slova[commonCount] = temp;
//				commonCount++;
//				break;
//			}
//		}
//	}
//
//	cout << "\nОбщие слова:" << endl;
//	if (commonCount == 0) {
//		cout << "Общих слов не найдено" << endl;
//	}
//	else {
//		for (int i = 0; i < commonCount; i++) {
//			cout << obshie_slova[i] << endl;
//		}
//	}
//
//	return 0;
//}