/* Books.h */
#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
using namespace std;
class Library  // создаём класс библиотека
{
public:
	int number;  // инвентарный номер
	std::string name;  // название
	std::string author;  // автор
	std::string series;// серия книг
	std::string language;// язык написания
	unsigned int year;  // год издания
	unsigned int page;  // количество страниц
	list <Library> Book;
	void pushBook(const Library& tmp)
	{
		Book.push_front(tmp);
	}
	void pushBook()
	{
		Library tmp;
		std::cout << "Введіть інвентарний номер книги: ";
		std::cin >> tmp.number;
		std::cout << "Введіть назву книги: ";
		std::cin >> tmp.name;
		std::cout << "Введіть автора книги: ";
		std::cin >> tmp.author;
		std::cout << "Введіть серію книги: ";
		std::cin >> tmp.series;
		std::cout << "Введіть мову написання цієї книги: ";
		std::cin >> tmp.language;
		std::cout << "Введіть рік видачі книги: ";
		std::cin >> tmp.year;
		std::cout << "Введіть кількість сторінок книги: ";
		std::cin >> tmp.page;
		pushBook(tmp);
	}
	void deleteBook()
	{
		int i;
		cout << "Введіть інвентарний номер книги, яку хочите видалити: " << endl;
		cin >> i;
		list<Library>::const_iterator;
		for (auto a : Book)
		{
			if (a.number == i)
			{
				Book.clear();
			}
		}
		cout << "Ця книга була видалина" << endl;
	}
	void show()
	{
		if (Book.empty())
			cout << "Книг не має!" << endl;
		for (auto it : Book)
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
				cout << "За назвою книги: " << arr[i] << "\t\t";
				}
				cout << endl;
				delete[] arr;
				break;*/
			case 3:
				//cout << "За автором книги: " << (it)->author << "\t\t";
				break;
			case 4:
				//cout << "За серію книг: " << (it)->series << "\t\t";
				break;
			case 5:
				//cout << "За мовою написання книги: " << (it)->language << "\t\t";
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
					cout << "За роком видачі книги: " << arr1[i] << "\t\t";
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
					cout << "За кількістю сторінок книги: " << arr2[i] << "\t\t";
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
		cout << "Введіть інвентарний номер книги, яку хочите змінити: " << endl;
		cin >> i;
		list<Library>::iterator tmp = Book.begin();
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
		Book.insert(tmp, b);
		Book.erase(tmp);	//удаляем промежуточ тмп
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
	class Information  // создаём класс Информация о библиотеке
	{
	public:
		string name;  // название
		string adres;  // адрес библиотеки
		string year;  // год издания
		unsigned int book;  // количество книг
		//void info_Book()
		//{

		//}
		//void info()
		//{
		//	name = "Бібліотека Магії";
		//	adres = "20569, Україна, обл. Запорізька, м. Запоріжжя, вул. Гагаріна, буд. 569";
		//	year = "1998";


		//	cout << "Назва: " << name << "\n";  // Выводим информацию про библиотеку
		//	cout << "Адреса: " << adres << "\n";
		//	cout << "Рік заснування: " << year << "\n";
		//	cout << "Кількість книжок: " << info_Book << "\n";  // Вызываем функцию подсчёта книг
		//}
	};


	int main()
	{
		setlocale(LC_ALL, "Russian");
		while (true)
		{
			cout << "Введiть вашi дiї: \n 1 - Додати книгу;\n 2 - Показати iнформацiю про бiблiотеку;\n 3 - Знайти потрiбну книгу;\n 4 - Видалити книгу;\n 5 - Редагувати потрiбну книгу;\n 6 - Вийти;\n";  // предлагаем пользователю сделать выбор действий 
			int a, c, d, e;
			cin >> a;
			switch (a)  // считываем ответ пользователя
			{
			case 1:  //есди 1 то:
				Library
					Book(); // Вызываем функцию добавления книг
				break;
			case 2:  // если 2 то:
				Information
					info();
				break;
			case 3:  // если 3 то:
				cout << "Оберіть операцію: \n 1 - Показати всі книги \n 2 - Знайти конкретну книгу \n";  // предлагаем пользователю выбор
				cin >> c;
				switch (c)  // считываем ответ пользователя
				{
				case 1:  // если 4 то:
						Library
						openAllBook();     // показ всех книг
					cout << "Відсортувати книги?\n 1 - Так \n 2 - Ні\n";   // предлагаем пользователю выбор
					cin >> d;
					switch (d)  // считываем ответ
					{
					case 1:  // если 1 то :
						Library
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
							cout << "Введіть любе число:\n";
							cin >> a;
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
					Library
						openBook(); // алгоритм поиска конкретной книги
					break;
				default:  // если вводим номер функци которого нет то выводим надпись:
					cout << "Такої функцiї не має!!!\n Спробуйте ще раз!\n";
					break;
				}
				break;
			case 4:  // если 4 то:
				Library
					deleteBook();  // Вызываем функцию удаления книг
				break;
			case 5:  // если 5 то:
				Library
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