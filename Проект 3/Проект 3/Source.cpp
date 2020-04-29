/* Books.h */
#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
using namespace std;
class Library  // ������ ����� ����������
{
public:
	int number;  // ����������� �����
	std::string name;  // ��������
	std::string author;  // �����
	std::string series;// ����� ����
	std::string language;// ���� ���������
	unsigned int year;  // ��� �������
	unsigned int page;  // ���������� �������
	list <Library> Book;
	void pushBook(const Library& tmp)
	{
		Book.push_front(tmp);
	}
	void pushBook()
	{
		Library tmp;
		std::cout << "������ ����������� ����� �����: ";
		std::cin >> tmp.number;
		std::cout << "������ ����� �����: ";
		std::cin >> tmp.name;
		std::cout << "������ ������ �����: ";
		std::cin >> tmp.author;
		std::cout << "������ ���� �����: ";
		std::cin >> tmp.series;
		std::cout << "������ ���� ��������� ���� �����: ";
		std::cin >> tmp.language;
		std::cout << "������ �� ������ �����: ";
		std::cin >> tmp.year;
		std::cout << "������ ������� ������� �����: ";
		std::cin >> tmp.page;
		pushBook(tmp);
	}
	void deleteBook()
	{
		int i;
		cout << "������ ����������� ����� �����, ��� ������ ��������: " << endl;
		cin >> i;
		list<Library>::const_iterator;
		for (auto a : Book)
		{
			if (a.number == i)
			{
				Book.clear();
			}
		}
		cout << "�� ����� ���� ��������" << endl;
	}
	void show()
	{
		if (Book.empty())
			cout << "���� �� ��!" << endl;
		for (auto it : Book)
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
				/*int* arr;
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
				break;*/
			case 3:
				//cout << "�� ������� �����: " << (it)->author << "\t\t";
				break;
			case 4:
				//cout << "�� ���� ����: " << (it)->series << "\t\t";
				break;
			case 5:
				//cout << "�� ����� ��������� �����: " << (it)->language << "\t\t";
				break;
			case 6:
				int* arr1;
				int size1;
				size1 = it.year;
				arr1 = new int[size1];
				int tmp1;
				for (int i = 0; i < size1 - 1; i++)
				{
					for (int j = 0; j < size1 - i - 1; j++)
					{
						if (arr1[j] > arr1[j + 1])
						{
							tmp = arr1[j];
							arr1[j] = arr1[j + 1];
							arr1[j + 1] = tmp;
						}
					}
				}
				for (int i = 0; i < size1; i++)
				{
					cout << "�� ����� ������ �����: " << arr1[i] << "\t\t";
				}
				cout << endl;
				delete[] arr1;
				break;
			case 7:
				int* arr2;
				int size2;
				size2 = it.page;
				arr2 = new int[size2];
				int tmp2;
				for (int i = 0; i < size2 - 1; i++)
				{
					for (int j = 0; j < size2 - i - 1; j++)
					{
						if (arr2[j] > arr2[j + 1])
						{
							tmp = arr2[j];
							arr2[j] = arr2[j + 1];
							arr2[j + 1] = tmp;
						}
					}
				}
				for (int i = 0; i < size2; i++)
				{
					cout << "�� ������� ������� �����: " << arr2[i] << "\t\t";
				}
				cout << endl;
				delete[] arr2;
				break;
			}
		}
	}
	void EdeitElement()
	{
		int i;
		Library b;
		cout << "������ ����������� ����� �����, ��� ������ ������: " << endl;
		cin >> i;
		list<Library>::iterator tmp = Book.begin();
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
		Book.insert(tmp, b);
		Book.erase(tmp);	//������� ���������� ���
	}
	void openBook()
	{

	}
	/*void openAllBook()
	{
		for (auto z : Book)
		{
			cout << z << "\t";
			std::cout << std::endl;
		}
	}*/
};
	class Information  // ������ ����� ���������� � ����������
	{
	public:
		string name;  // ��������
		string adres;  // ����� ����������
		string year;  // ��� �������
		unsigned int book;  // ���������� ����
		//void info_Book()
		//{

		//}
		//void info()
		//{
		//	name = "��������� ��㳿";
		//	adres = "20569, ������, ���. ���������, �. ��������, ���. �������, ���. 569";
		//	year = "1998";


		//	cout << "�����: " << name << "\n";  // ������� ���������� ��� ����������
		//	cout << "������: " << adres << "\n";
		//	cout << "г� ����������: " << year << "\n";
		//	cout << "ʳ������ ������: " << info_Book << "\n";  // �������� ������� �������� ����
		//}
	};


	int main()
	{
		setlocale(LC_ALL, "Russian");
		while (true)
		{
			cout << "����i�� ���i �i�: \n 1 - ������ �����;\n 2 - �������� i�������i� ��� �i��i�����;\n 3 - ������ ����i��� �����;\n 4 - �������� �����;\n 5 - ���������� ����i��� �����;\n 6 - �����;\n";  // ���������� ������������ ������� ����� �������� 
			int a, c, d, e;
			cin >> a;
			switch (a)  // ��������� ����� ������������
			{
			case 1:  //���� 1 ��:
				Library
					Book(); // �������� ������� ���������� ����
				break;
			case 2:  // ���� 2 ��:
				Information
					info();
				break;
			case 3:  // ���� 3 ��:
				cout << "������ ��������: \n 1 - �������� �� ����� \n 2 - ������ ��������� ����� \n";  // ���������� ������������ �����
				cin >> c;
				switch (c)  // ��������� ����� ������������
				{
				case 1:  // ���� 4 ��:
						Library
						openAllBook();     // ����� ���� ����
					cout << "³���������� �����?\n 1 - ��� \n 2 - ͳ\n";   // ���������� ������������ �����
					cin >> d;
					switch (d)  // ��������� �����
					{
					case 1:  // ���� 1 �� :
						Library
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
							cout << "������ ���� �����:\n";
							cin >> a;
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
					Library
						openBook(); // �������� ������ ���������� �����
					break;
				default:  // ���� ������ ����� ������ �������� ��� �� ������� �������:
					cout << "���� �����i� �� ��!!!\n ��������� �� ���!\n";
					break;
				}
				break;
			case 4:  // ���� 4 ��:
				Library
					deleteBook();  // �������� ������� �������� ����
				break;
			case 5:  // ���� 5 ��:
				Library
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