#include <iostream> 
#include <conio.h> 
#include <string.h> 
#include <iomanip> 
#include <Windows.h> 



using namespace std;





struct Film
{
	int duration;
	int budget;
	char director[100];
	char name[100];
};


void show(Film *Movies, int n);


void add(Film *Movies, int &n);


void remove(Film *Movies, int &n);


int main()
{
	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);
	setlocale(0, "rus");





	int n = 0;
	Film *Movies = new Film[1];


	while (true)
	{

		int inputNum;

		char inputText;

		cout << setw(50) << "����������" << endl << endl;

		cout << "1. ����" << endl;

		cout << "2. ��������" << endl;

		cout << "3. ��������" << endl;

		cout << "4. �������" << endl;

		cout << "5. �����" << endl << endl;

		cout << endl << "������� ����� �� 1 �� 5: ";

		cin >> inputNum;

		switch (inputNum)

		{

		case 1:

			n = 0;

			do

			{

				system("cls");

				add(Movies, n);

				cout << "���������� ���������� �/�?: ";

				cin >> inputText;

				system("cls");

			} while (inputText == '�');

			break;

		case 2:

			system("cls");

			show(Movies, n);

			cout << endl << endl << "������� ����� ������, ����� ����� � ����..." << endl;

			inputText = _getch();

			system("cls");

			break;

		case 3:

			do
			{

				system("cls");

				add(Movies, n);

				cout << "���������� ���������� �/�?: ";

				cin >> inputText;

				system("cls");

			}
			while (inputText == '�');

			break;

		case 4:

			system("cls");

			show(Movies, n);



			do

			{
				if (n == 0)
				{

					system("cls");

					cout << "�����" << endl;


					cout << endl << endl << "������� ����� ������, ����� ����� � ����... ";

					inputText = _getch();

				}
				else {
					cout << endl << endl << "�������� ������� ��� ��������: ";

					remove(Movies, n);

					system("cls");

					show(Movies, n);



					cout << endl << endl << "������ ������� ���? �/�: ";

					cin >> inputText;
				}

			} while (inputText == '�');

			system("cls");

			break;

		case 5:

			system("cls");

			exit(0);

			break;

		default:

			system("cls");

			cout << "Error: wrong number!!!" << endl;


			system("cls");

			break;

			system("cls");

		}

	}

	delete[] Movies;
	return 0;

}




void show(Film *Movies, int n)

{

	cout << setw(16) << "��������" << setw(20) << "��� �������� " << setw(30) << "�����������������(���)" << setw(15) << "������" << endl << endl;
	if (n != 0) {


		for (int i = 0; i < n; i++)

		{

			cout << setw(1) << i + 1;

			cout << setw(15) << Movies[i].name;

			cout << setw(20) << Movies[i].director;

			cout << setw(30) << Movies[i].duration;

			cout << setw(15) << Movies[i].budget << endl;

		}


	}
	else
	{

		cout << "�����";

	}
}

void add(Film *Movies, int &n)

{

	int number;

	char text[20];

	cout << "������� ��������: ";

	cin >> text;

	strcpy_s(Movies[n].name, text);

	system("cls");

	cout << "������� ��� ���������: ";

	cin >> text;

	strcpy_s(Movies[n].director, text);

	system("cls");

	cout << "������� �����������������: ";

	cin >> number;

	Movies[n].duration = number;

	system("cls");

	cout << "������� ������: ";

	cin >> number;

	Movies[n].budget = number;

	system("cls");

	n++;

}

void remove(Film *Movies, int &n)

{

	int number;

	cin >> number;

	for (int i = number - 1; i < n; i++)

	{

		strcpy_s(Movies[i].name, Movies[i + 1].name);

		strcpy_s(Movies[i].director, Movies[i + 1].director);

		Movies[i].duration = Movies[i + 1].duration;

		Movies[i].budget = Movies[i + 1].budget;




	}

	n--;


}