#include <iostream>
using namespace std;
struct Library  // создаём структуру библиотека
{  // создаём элементы структуры в которых будут хранится описание книг
	const char *number;  // инвентарный номер
	const char *name;  // название
	const char *autor;  // автор
	const char *series;// серия книг
	const char *language;// язык написания
	const char *year;  // год издания
	const char *page;  // количество страниц
};
int main()
{
	setlocale(LC_ALL, "Russian");
	// заполняем элементы структуры
	Library apartment1;  // описываем первую книгу
	apartment1.number = "000001";
	apartment1.name = "Академия смертей. Учеба до гроба";
	apartment1.autor = "Ольга Пашнина, Валерия Тишакова";
	apartment1.series = "Академия магии";
	apartment1.language = "Русский";
	apartment1.year = "2017";
	apartment1.page = "352";
	// выводим информацию
	cout << "Iнвентарний номер: " << apartment1.number << "\n" << "Назва книги: " << apartment1.name << "\n" << "Автор: " << apartment1.autor << "\n" << "Серiя книг: " << apartment1.series << "\n" << "Мова книги: " << apartment1.language << "\n" << "Рiк видання: " << apartment1.year << "\n" << "Кiлькiсть сторiнок: " << apartment1.page << "\n";
	system("Pause");
	return 0;
}