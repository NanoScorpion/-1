#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
using namespace std;
struct Book  // ������ ��������� ����������
{  // ������ �������� ��������� � ������� ����� �������� �������� ����
	int number;  // ����������� �����
	string name;  // ��������
	string author;  // �����
	string series;// ����� ����
	string language;// ���� ���������
	unsigned int year;  // ��� �������
	unsigned int page;  // ���������� �������
};
list <Book> Library;
void pushBook(const Book& tmp)
{
	Library.push_front(tmp);
}
void pushBook()
{
	Book tmp;
	cout << "������ ����������� ����� �����: "; 
	cin >> tmp.number;
	cout << "������ ����� �����: ";
	cin >> tmp.name;
	cout << "������ ������ �����: ";
	cin >> tmp.author;
	cout << "������ ���� �����: ";
	cin >> tmp.series;
	cout << "������ ���� ��������� ���� �����: ";
	cin >> tmp.language;
	cout << "������ �� ������ �����: ";
	cin >> tmp.year;
	cout << "������ ������� ������� �����: ";
	cin >> tmp.page;
	pushBook(tmp);
}
void deleteB()
{
	int i;
	cout << "������ ����������� ����� �����, ��� ������ ��������: " << endl;
	cin >> i; 
	list<Book>::const_iterator;
	for (auto a : Library) 
	{
		if (a.number == i) Library.clear();
		
	}
	cout << "�� ����� ���� ��������" << endl;
}
void show()
{
	if (Library.empty())
		cout << "���� �� ��!" << endl;
	for (auto it : Library)
		//for (auto it = Library.begin(); it != Library.end(); it++)
	{
		int a;
		cout << "����� �������� ����������: \n";
		cout << "1-�� ����������� ������� �����, 2-�� ������ �����, 3-�� ������� �����, 4-�� ���� ����, 5-�� ����� ��������� �����, 6-�� ����� ������ �����, 7-�� ������� ������� ����� \n";
		cin >> a;
		switch (a)
		{
		case 1:
			int* arr;
			int size;
			size = it.number;
			arr = new int[size];
			int tmp;
			for (int i = 0; i < size - 1; i++)
			{
				for (int j = 0; j < size - i - 1; j++)
				{
					if (arr[j] > arr[j + 1])
					{
						tmp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tmp;
					}
				}
			}
			for (int i = 0; i < size; i++)
			{
				cout << "�� ����������� ������� �����: " << arr[i] << " ";
			}
			cout << endl;
			delete[] arr;
			break;
		case 2:
			int* arr;
			int size;
			size = it.name;
			arr = new int[size];
			int tmp;
			for (int i = 0; i < size - 1; i++)
			{
				for (int j = 0; j < size - i - 1; j++)
				{
					if (arr[j] > arr[j + 1])
					{
						tmp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tmp;
					}
				}
			}
			for (int i = 0; i < size; i++)
			{
			cout << "�� ������ �����: " << arr[i] << "\t\t";
			}
			cout << endl;
			delete[] arr;
			break;
		case 3:
			cout << "�� ������� �����: " << (it)->author << "\t\t";
			break;
		case 4:
			cout << "�� ���� ����: " << (it)->series << "\t\t";
			break;
		case 5:
			cout << "�� ����� ��������� �����: " << (it)->language << "\t\t";
			break;
		case 6:
			int* arr;
			int size;
			size = it.year;
			arr = new int[size];
			int tmp;
			for (int i = 0; i < size - 1; i++)
			{
				for (int j = 0; j < size - i - 1; j++)
				{
					if (arr[j] > arr[j + 1])
					{
						tmp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tmp;
					}
				}
			}
			for (int i = 0; i < size; i++)
			{
				cout << "�� ����� ������ �����: " << arr[i] << "\t\t";
			}
			cout << endl;
			delete[] arr;
			break;
		case 7:
			int* arr;
			int size;
			size = it.page;
			arr = new int[size];
			int tmp;
			for (int i = 0; i < size - 1; i++)
			{
				for (int j = 0; j < size - i - 1; j++)
				{
					if (arr[j] > arr[j + 1])
					{
						tmp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tmp;
					}
				}
			}
			for (int i = 0; i < size; i++)
			{
				cout << "�� ������� ������� �����: " << arr[i] << "\t\t";
			}
			cout << endl;
			delete[] arr;
			break;
		default:  // ���� ������ ����� ������ �������� ��� �� ������� �������:
			cout << "���� �����i� �� ��!!!\n ��������� �� ���!\n";
			break;
		}
	}
}
void EdeitElement()
{
	int i;
	Book b;
	cout << "������ ����������� ����� �����, ��� ������ ������: " << endl;
	cin >> i;
	list<Book>::iterator tmp = Library.begin();
	advance(tmp, i);//�-� �������� �������� ���� ��� � �
	cout << "������ ����������� ����� �����: ";
	cin >> b.number;
	cout << "������ ����� �����: ";
	cin >> b.name;
	cout << "������ ������ �����: ";
	cin >> b.author;
	cout << "������ ���� �����: ";
	cin >> b.series;
	cout << "������ ���� ��������� ���� �����: ";
	cin >> b.language;
	cout << "������ �� ������ �����: ";
	cin >> b.year;
	cout << "������ ������� ������� �����: ";
	cin >> b.page;
	Library.insert(tmp, b);
	Library.erase(tmp);	//������� ���������� ���
}
void Search()
{

}
void all_book()
{
	if (Library.empty())
		cout << "���� �� ��!" << endl;
	else
		copy(Library.begin(), Library.end(), (cout, " "));
}
struct Information
{
	char *name;  // ��������
	char *adres;  // ����� ����������
	char *year;  // ��� �������
	char *book;  // ���������� ����
};
void info()
{
	
}
int main()
{
	setlocale(LC_ALL, "Russian");
	Information Info1;
	Info1.name = "��������� ��㳿";
	Info1.adres = "20569, ������, ���. ���������, �. ��������, ���. �������, ���. 569";
	Info1.year = "1998";

	while (true)
	{
		cout << "����i�� ���i �i�: \n 1 - ������ �����;\n 2 - �������� i�������i� ��� �i��i�����;\n 3 - ������ ����i��� �����;\n 4 - �������� �����;\n 5 - ���������� ����i��� �����;\n 6 - �����;\n";  // ���������� ������������ ������� ����� �������� 
		int a, c, d, e;
		cin >> a;
		switch (a)  // ��������� ����� ������������
		{
		case 1:  //���� 1 ��:
			pushBook(); // �������� ������� ���������� ����
			break;
		case 2:  // ���� 2 ��:
			cout << "�����: " << Info1.name << "\n";  // ������� ���������� ��� ����������
			cout << "������: " << Info1.adres << "\n";
			cout << "г� ����������: " << Info1.year << "\n";
			cout << "ʳ������ ������: " << info << "\n";  // �������� ������� �������� ����
			break;
		case 3:  // ���� 3 ��:
			cout << "������ ��������: \n 1 - �������� �� ����� \n 2 - ������ ��������� ����� \n";  // ���������� ������������ �����
			cin >> c;
			switch (c)  // ��������� ����� ������������
			{
			case 1:  // ���� 4 ��:
				all_book();
				/*if (Library.empty())
					cout << "���� �� ��!" << endl;
				for (auto it = Library.begin(); it != Library.end(); it++)
				{
					cout << "����������� ����� �����:" << (it)->number << "\t\t";
					cout << "����� �����: " << (it)->name << "\t\t";
					cout << "����� �����: " << (it)->author << "\t\t";
					cout << "���� ����: " << (it)->series << "\t\t";
					cout << "���� ��������� �����: " << (it)->language << "\t\t";
					cout << "�� ������ �����: " << (it)->year << "\t\t";
					cout << "������� ������� �����: " << (it)->page << endl;
				}*/
				cout << "³���������� �����?\n 1 - ��� \n 2 - ͳ\n";   // ���������� ������������ �����
				cin >> d;
				switch (d)  // ��������� �����
				{
				case 1:  // ���� 1 �� :
					show();  // �������� ������� ���������� ����
					break;
				case 2:  // ���� 2 ��: 
					cout << "������ ��������: \n 1 - ����� \n 2 - ���������� \n";  // ���������� ������������ �����
					cin >> e; 
					switch (e)  // ��������� �����
					{
					case 1:  // ���� 1 ��: ������� �� ���������
						return 0;
						break;
					case 2:  // ���� 2 ��: ������������ � ������� ����
						break;
					default:  // ���� ������ ����� ������ �������� ��� �� ������� �������:
						cout << "���� �����i� �� ��!!!\n ��������� �� ���!\n";
						break;
					}
					break;
				default:  // ���� ������ ����� ������ �������� ��� �� ������� �������:
					cout << "���� �����i� �� ��!!!\n ��������� �� ���!\n";
					break;
				}
				break;
			case 2:  // ���� 2 ��:
	 			void Search(); // ������� ������ ���������� �����
				break;
			default:  // ���� ������ ����� ������ �������� ��� �� ������� �������:
				cout << "���� �����i� �� ��!!!\n ��������� �� ���!\n";
				break;
			}
			break;
		case 4:  // ���� 4 ��:
			deleteB();  // �������� ������� �������� ����
			break;
		case 5:  // ���� 5 ��:
			EdeitElement();  // �������� ������� �������������� ����
			break;
		case 6:  // ���� 6 ��: 
			return 0;  // ������� �� ���������
			break;
		default:  // ���� ������ ����� ������ �������� ��� �� ������� �������:
			cout << "���� �����i� �� ��!!!\n ��������� �� ���!\n";
			break;
		}
	}
	system("Pause");
	return 0;
}