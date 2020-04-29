#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
using namespace std;
struct Book  // создаём структуру библиотека
{  // создаём элементы структуры в которых будут хранится описание книг
	int number;  // инвентарный номер
	string name;  // название
	string author;  // автор
	string series;// серия книг
	string language;// язык написания
	unsigned int year;  // год издания
	unsigned int page;  // количество страниц
};
list <Book> Library;
void pushBook(const Book& tmp)
{
	Library.push_front(tmp);
}
void pushBook()
{
	Book tmp;
	cout << "Введіть інвентарний номер книги: "; 
	cin >> tmp.number;
	cout << "Введіть назву книги: ";
	cin >> tmp.name;
	cout << "Введіть автора книги: ";
	cin >> tmp.author;
	cout << "Введіть серію книги: ";
	cin >> tmp.series;
	cout << "Введіть мову написання цієї книги: ";
	cin >> tmp.language;
	cout << "Введіть рік видачі книги: ";
	cin >> tmp.year;
	cout << "Введіть кількість сторінок книги: ";
	cin >> tmp.page;
	pushBook(tmp);
}
void deleteB()
{
	int i;
	cout << "Введіть інвентарний номер книги, яку хочите видалити: " << endl;
	cin >> i; 
	list<Book>::const_iterator;
	for (auto a : Library) 
	{
		if (a.number == i) Library.clear();
		
	}
	cout << "Ця книга була видалина" << endl;
}
void show()
{
	if (Library.empty())
		cout << "Книг не має!" << endl;
	for (auto it : Library)
		//for (auto it = Library.begin(); it != Library.end(); it++)
	{
		int a;
		cout << "Ведіть параметр сортування: \n";
		cout << "1-За інвентарним номером книги, 2-За назвою книги, 3-За автором книги, 4-За серію книг, 5-За мовою написання книги, 6-За роком видачі книги, 7-За кількістю сторінок книги \n";
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
				cout << "За інвентарним номером книги: " << arr[i] << " ";
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
			cout << "За назвою книги: " << arr[i] << "\t\t";
			}
			cout << endl;
			delete[] arr;
			break;
		case 3:
			cout << "За автором книги: " << (it)->author << "\t\t";
			break;
		case 4:
			cout << "За серію книг: " << (it)->series << "\t\t";
			break;
		case 5:
			cout << "За мовою написання книги: " << (it)->language << "\t\t";
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
				cout << "За роком видачі книги: " << arr[i] << "\t\t";
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
				cout << "За кількістю сторінок книги: " << arr[i] << "\t\t";
			}
			cout << endl;
			delete[] arr;
			break;
		default:  // если вводим номер функци которого нет то выводим надпись:
			cout << "Такої функцiї не має!!!\n Спробуйте ще раз!\n";
			break;
		}
	}
}
void EdeitElement()
{
	int i;
	Book b;
	cout << "Введіть інвентарний номер книги, яку хочите змінити: " << endl;
	cin >> i;
	list<Book>::iterator tmp = Library.begin();
	advance(tmp, i);//ф-я сдвигает конечную пози тип а и
	cout << "Введіть інвентарний номер книги: ";
	cin >> b.number;
	cout << "Введіть назву книги: ";
	cin >> b.name;
	cout << "Введіть автора книги: ";
	cin >> b.author;
	cout << "Введіть серію книги: ";
	cin >> b.series;
	cout << "Введіть мову написання цієї книги: ";
	cin >> b.language;
	cout << "Введіть рік видачі книги: ";
	cin >> b.year;
	cout << "Введіть кількість сторінок книги: ";
	cin >> b.page;
	Library.insert(tmp, b);
	Library.erase(tmp);	//удаляем промежуточ тмп
}
void Search()
{

}
void all_book()
{
	if (Library.empty())
		cout << "Книг не має!" << endl;
	else
		copy(Library.begin(), Library.end(), (cout, " "));
}
struct Information
{
	char *name;  // название
	char *adres;  // адрес библиотеки
	char *year;  // год издания
	char *book;  // количество книг
};
void info()
{
	
}
int main()
{
	setlocale(LC_ALL, "Russian");
	Information Info1;
	Info1.name = "Бібліотека Магії";
	Info1.adres = "20569, Україна, обл. Запорізька, м. Запоріжжя, вул. Гагаріна, буд. 569";
	Info1.year = "1998";

	while (true)
	{
		cout << "Введiть вашi дiї: \n 1 - Додати книгу;\n 2 - Показати iнформацiю про бiблiотеку;\n 3 - Знайти потрiбну книгу;\n 4 - Видалити книгу;\n 5 - Редагувати потрiбну книгу;\n 6 - Вийти;\n";  // предлагаем пользователю сделать выбор действий 
		int a, c, d, e;
		cin >> a;
		switch (a)  // считываем ответ пользователя
		{
		case 1:  //есди 1 то:
			pushBook(); // Вызываем функцию добавления книг
			break;
		case 2:  // если 2 то:
			cout << "Назва: " << Info1.name << "\n";  // Выводим информацию про библиотеку
			cout << "Адреса: " << Info1.adres << "\n";
			cout << "Рік заснування: " << Info1.year << "\n";
			cout << "Кількість книжок: " << info << "\n";  // Вызываем функцию подсчёта книг
			break;
		case 3:  // если 3 то:
			cout << "Оберіть операцію: \n 1 - Показати всі книги \n 2 - Знайти конкретну книгу \n";  // предлагаем пользователю выбор
			cin >> c;
			switch (c)  // считываем ответ пользователя
			{
			case 1:  // если 4 то:
				all_book();
				/*if (Library.empty())
					cout << "Книг не має!" << endl;
				for (auto it = Library.begin(); it != Library.end(); it++)
				{
					cout << "інвентарний номер книги:" << (it)->number << "\t\t";
					cout << "назва книги: " << (it)->name << "\t\t";
					cout << "автор книги: " << (it)->author << "\t\t";
					cout << "серія книг: " << (it)->series << "\t\t";
					cout << "мова написання книги: " << (it)->language << "\t\t";
					cout << "рік видачі книги: " << (it)->year << "\t\t";
					cout << "кількість сторінок книги: " << (it)->page << endl;
				}*/
				cout << "Відсортувати книги?\n 1 - Так \n 2 - Ні\n";   // предлагаем пользователю выбор
				cin >> d;
				switch (d)  // считываем ответ
				{
				case 1:  // если 1 то :
					show();  // Вызываем функцию сортировки книг
					break;
				case 2:  // если 2 то: 
					cout << "Оберіть операцію: \n 1 - Вийти \n 2 - Продовжити \n";  // предлагаем пользователю выбор
					cin >> e; 
					switch (e)  // считываем ответ
					{
					case 1:  // если 1 то: выходим из программы
						return 0;
						break;
					case 2:  // если 2 то: возвращаемся в главное меню
						break;
					default:  // если вводим номер функци которого нет то выводим надпись:
						cout << "Такої функцiї не має!!!\n Спробуйте ще раз!\n";
						break;
					}
					break;
				default:  // если вводим номер функци которого нет то выводим надпись:
					cout << "Такої функцiї не має!!!\n Спробуйте ще раз!\n";
					break;
				}
				break;
			case 2:  // если 2 то:
	 			void Search(); // функция поиска конкретной книги
				break;
			default:  // если вводим номер функци которого нет то выводим надпись:
				cout << "Такої функцiї не має!!!\n Спробуйте ще раз!\n";
				break;
			}
			break;
		case 4:  // если 4 то:
			deleteB();  // Вызываем функцию удаления книг
			break;
		case 5:  // если 5 то:
			EdeitElement();  // Вызываем функцию редактирования книг
			break;
		case 6:  // если 6 то: 
			return 0;  // выходим из программы
			break;
		default:  // если вводим номер функци которого нет то выводим надпись:
			cout << "Такої функцiї не має!!!\n Спробуйте ще раз!\n";
			break;
		}
	}
	system("Pause");
	return 0;
}