#include <iostream>
using namespace std;
struct Library  // ������ ��������� ����������
{  // ������ �������� ��������� � ������� ����� �������� �������� ����
	const char *number;  // ����������� �����
	const char *name;  // ��������
	const char *autor;  // �����
	const char *series;// ����� ����
	const char *language;// ���� ���������
	const char *year;  // ��� �������
	const char *page;  // ���������� �������
};
int main()
{
	setlocale(LC_ALL, "Russian");
	// ��������� �������� ���������
	Library apartment1;  // ��������� ������ �����
	apartment1.number = "000001";
	apartment1.name = "�������� �������. ����� �� �����";
	apartment1.autor = "����� �������, ������� ��������";
	apartment1.series = "�������� �����";
	apartment1.language = "�������";
	apartment1.year = "2017";
	apartment1.page = "352";
	// ������� ����������
	cout << "I���������� �����: " << apartment1.number << "\n" << "����� �����: " << apartment1.name << "\n" << "�����: " << apartment1.autor << "\n" << "���i� ����: " << apartment1.series << "\n" << "���� �����: " << apartment1.language << "\n" << "�i� �������: " << apartment1.year << "\n" << "�i���i��� ����i���: " << apartment1.page << "\n";
	system("Pause");
	return 0;
}