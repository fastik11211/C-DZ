#include<iostream>//подкл. библиотеки ввода и вывлда в консоль


using namespace std;//объявление пространства имен std

void main(){
	setlocale (LC_ALL, "Russian");//функция отвечающая за вывод символов русского алфовита
	cout <<"\t\t\t\t\"Маленькой ёлочке\"\n";//вывод текста в консоль с четверной табуляцией , с символами " и переходом на новую строку
	cout <<"\t\t\tВ лесу родилась ёлочка\n";//вывод текста в консоль с тройной табуляцией и переходом на новую строку
	cout <<"\t\t\tВ лесу она росла\n";//вывод текста в консоль с тройной табуляцией и переходом на новую строку
	cout <<"\t\t\tЗимой и летом стройная зелённая была\n";//вывод текста в консоль с тройной табуляцией и переходом на новую строку
	cout <<"\t\t\tЗимой и летом стройная зелённая была\n";//вывод текста в консоль с тройной табуляцией и переходом на новую строку
	cout <<"\t\t\t\t\'Конец\'\n";//вывод текста в консоль с четверной табуляцией , с символами " и переходом на новую строку
}