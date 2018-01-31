#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<conio.h>
#include<ctime>
#include<cmath>
using namespace std;
void SetPos(int x, int y)
{COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);}
void Hello();
void Bye();
void Sq(int a);
char Func(int x, int y);
void main()
{SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	//	int a = 1;
	//	int b=123;
	//	cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << endl;
	//	cout << char(176) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(176) << endl;
	//	cout << char(176) << char(178) << char(219) << char(219) << char(219)  << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(178) << char(176) << endl;
	//cout << char(176) << char(178) << char(219) <<left<<setw(4)<< "a = " << setw(3) << a << char(219) << char(178) << char(176) << endl << char(176) << char(178) << char(219) << left << setw(4) << "b = " << setw(3) << b << char(219) << char(178) << char(176) << endl;
	//	cout << char(176) << char(178) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(178) << char(176) << endl;
	//	cout << char(176) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(178) << char(176) << endl;
	//	cout << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << char(176) << endl;
	//	double number1, number2;
	//	cout << "Введіть число 1: ";
	//	cin >> number1;
	//	cout << "Введіть число 2: ";
	//	cin >> number2;
	//	system("cls");
	//	cout << "Число 1 = " << number1 << endl << "Число 2 = " << number2 << endl;
	//	cout << "Добуток чисел = " << number1*number2 << endl << "Середнє арифметичне чисел = " << (number1+number2)/2 << endl << endl;
	//	system("pause");
	//	const double p1 = 1, p2 = 2, p3 = 3, p4 = 4;
	//	int a, b, c, d;
	//	cout << "Введіть кількість молока: ";
	//	cin >> a;
	//	cout << "Введіть кількість яєць: ";
	//	cin >> b;
	//	cout << "Введіть кількість хліба: ";
	//	cin >> c;
	//	cout << "Введіть кількість масла: ";
	//	cin >> d;
	//	cout << "Вартість покупки = " <<setw(7)<< a*p1 + b*p2 + c*p3 + d*p4<<endl;
	//double a;
	//cout << "Введіть число: ";
	//cin >> a;
	//if(a==0)
	//{cout << "Число = 0.\n";}
	//if (a < 0)
	//{cout << "Число від`ємне.\n";}
	//if (a>0)
	//{cout << "Число додатнє.\n";}
	//int b;
	//cout << "\nВведіть ціле число: ";
	//cin >> b;
	//if (b % 2 == 0)
	//{cout << "Число парне.\n";}
	//else
	//{cout << "Число не парне.\n";}
	//double c;
	//cout << "\nВведіть температуру: ";
	//cin >> c;
	//if (c < -35 || c>45)
	//{cout << "Температура не коректна.\n";}
	//else if (c < 0)
	//{cout << "Зимно.\n";}
	//else if (c < 15)
	//{cout << "Холодно.\n";}
	//else if (c < 20)
	//{cout << "Прохолодно.\n";}
	//else if (c < 25)
	//{cout << "Тепло.\n";}
	//else 
	//{cout << "Гаряче.\n";}
	//double d,e,f,g;
	//cout << "\nВведіть числа: ";
	//cin >> d>>e>>f>>g;
	//double min = d;
	//if (e < d)
	//{min = e;}
	//if(f<e)
	//{min = f;}
	//if(g<f)
	//{min = g;}
	//cout << min;
	//double a,b,c,h,i;
	//cout << "\nВведіть числа: ";
	//cin >> a>> b >> c >> h>>i;
	//if ((a + b + c + h + i) / 5 >= 4)
	//{cout << "Допущено.\n";}
	//else
	//{cout << "Не допущено.\n";}
	//int  j;
	//cout << "Введи число: \n";
	//cin >> j;
	//if (j % 2 == 0)
	//{cout << j * 3;}
	//else
	//{cout << j/2;}
	//double l;
	//cout << "\nВведіть число: \n";
	//cin >> l;
	//int k;								
	//cout << "Додавання - натисніть 1, віднімання - 2, множення - 3, ділення - 4: ";
	//cin >> k;
	//double m;
	//cout << "Введіть число: ";
	//cin >> m;
	//if (k == 1)
	//{cout << l+m;}
	//else if (k == 2)
	//{cout << l - m;}
	//else if (k == 3)
	//{cout << l*m;}
	//else if (k == 4&&m!=0)
	//{cout << l/m;}
	//else
	//{cout << "Помилка!";}
	//int n, o, p, q;
	//cout << "Введіть числa: ";
	//cin >> n >> o >> p >> q;
	//int count = 0;
	//if (n % 5 == 0)
	//{count = count++;}
	//if (o % 5 == 0)
	//{count = count++;}
	//if (p % 5 == 0)
	//{count = count++;}
	//if (q % 5 == 0)
	//{count = count++;}
	//cout << count;
	//int st1 = 10;
	//int st2 = 20;
	//int st3 = 30;
	//int a;
	//int b;
	//int c;
	//double sumMoney=1000;
	//cout << "1 - 10, 2 - 20, 3 - 30.\n";
	//cin >> a;
	//cout << "Скільки?\n";
	//cin >> b;
	//cout << "1 - чорне, 2 - біле.\n";
	//cin >> c;
	//cout << "GAME IS STARTED!!!!!\n";
	//cout << "*";Sleep(100);
	//cout << "*"; Sleep(100);
	//cout << "*"; Sleep(100);
	//cout << "*"; Sleep(100);
	//cout << "*"; Sleep(100);
	//_getch();
	//system("cls");
	//if (a == 1)
	//{if (c == 1)
	//	{cout << sumMoney - st1*b<<endl;}
	//	else
	//	{cout << "| 2 | " << endl;
	//		Sleep(200);
	//		system("cls");
	//		Sleep(100);
	//		cout << "| 2 | " << endl;
	//		Sleep(200);
	//		system("cls");
	//		Sleep(100);
	//		cout << "| 2 | " << endl;
	//		Sleep(200);
	//		system("cls");
	//		Sleep(100);
	//		cout << "| 2 | " << endl;
	//		cout << sumMoney + st1*b << endl;}}
	//if (a == 2)
	//{if (c == 1)
	//	{cout << sumMoney - st2*b << endl;}
	//	else
	//	{cout << sumMoney + st2*b << endl;}}
	//if (a == 3)
	//{if (c == 1)
	//	{cout << sumMoney - st3*b << endl;}
	//	else
	//	{cout << sumMoney + st3*b << endl;}}
	//int a;
	//cout << "Введіть порядковий № дня тижня: ";
	//cin >> a;
	//switch (a)
	//{case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	cout << "Будній день.\n\n";
	//	break;
	//case 6:
	//case 7:
	//	cout << "Вихідний день.\n\n";
	//	break;
	//default:
	//	cout << "Помилка при введенні порядкового № дня тижня.\n\n";
	//	break;}
	//enum country { Ukraine=1, UK, Germany };
	//cout << "Ukraine 1, UK 2, Germany 3.\n";
	//int a;
	//cin >> a;
	//switch (a)
	//{case 1:
	//	cout << "Київ.\n";
	//	break;
	//case 2:
	//	cout << "Лондон.\n";
	//	break;
	//case 3:
	//	cout << "Берлін.\n";
	//	break;}
	//enum country { Ukraine = 1, UK, Germany };
	//cout << "Ukraine 1, UK 2, Germany 3.\n";
	//int a;
	//cin >> a;
	//switch (a)
	//{case 1:
	//	cout << "Київ.\n";
	//	break;
	//case 2:
	//	cout << "Лондон.\n";
	//	break;
	//case 3:
	//	cout << "Берлін.\n";
	//	break;}
	//double a;
	//int i=1;
	//cout << "Введіть число: ";
	//cin >> a;
	//while (i<11)
	//{cout <<left<<setw(2)<<i<<"*"<<a<<"="<< i*a<<endl;
	//	i++;}
	//char ch = _getch();
	//if ((int)ch >= 48 && (int)ch <= 57)
	//{cout << "Its digit!\n";}
	//else if ((int)ch >= 65 && (int)ch <= 90)
	//{cout << "Велика літера.\n";}
	//else if ((int)ch >= 97 && (int)ch <= 122)
	//{cout << "Мала літера.\n";}
	//else
	//{cout << "Інший символ.\n";}
	//int i = 1;
	//cout << "Введіть ім'я.\n";
	//char ch = _getch();
	//while (ch!=13)
	//{if (i==1&&(int)ch >= 65 && (int)ch <= 90)
	//{i++;
	//		cout << ch;}
	//	else
	//	{ch = _getch();
	//		cout << ch;
	//		if (!((int)ch >= 97 && (int)ch <= 122))
	//		{cout << "\nПомилка.\n";}}}
	//char a;
	//int b,c;
	//cout << "Введіть символ: ";
	//cin >> a;
	//cout << "Введіть кількість: ";
	//cin >> b;
	//cout << "1 - горизогтально.\n2 - вертикально.\n";
	//cin >> c;
	//if (c == 1)
	//{while (b!=0)
	//	{b--;
	//		cout << a;}
	//	cout << endl;}
	//if (c == 2)
	//{while (b != 0)
	//	{b--;
	//		cout << a<<endl;}}
	//int a,rez=1;
	//cout << "Введіть число: ";
	//cin >> a;
	//while (a!=0)
	//{cout << rez << "*"<<a<<endl;
	//	rez *= a;
	//	a--;}
	//cout <<"Факторіал числа = "<< rez<<endl;
	//int i, a,b=0;
	//char current, a1 = ' ', a2 = ' ', a3 = ' ', a4 = ' ', a5 = ' ', a6 = ' ', a7 = ' ', a8 = ' ', a9 = ' ', ch1 = 'O', ch2 = 'X';
	//while (1)
	//{b++;
	//	if (b % 2 == 0)
	//	{current = ch1;}
	//	else
	//	{current = ch2;}
	//	cout << "Поставте " << current<<endl;
	//	cout << "Оберіть клітинку:\n1|2|3\n4|5|6\n7|8|9\n";
	//	cin >> i;
	//	switch (i)
	//	{case 1: {a1 = current;break;}
	//	case 2: {a2 = current; break; }
	//	case 3: {a3 = current; break; }
	//	case 4: {a4 = current; break; }
	//	case 5: {a5 = current; break; }
	//	case 6: {a6 = current; break; }
	//	case 7: {a7 = current; break; }
	//	case 8: {a8 = current; break; }
	//	case 9: {a9 = current; break; }}
	//	cout << a1 << "|" << a2 << "|" << a3 << endl << "-----" << endl << a4 << "|" << a5 << "|" << a6 << endl << "-----" << endl << a7 << "|" << a8 << "|" << a9 << endl;}
//int a=0,sum1=0;
//while (a<=50)
//{sum1 = sum1+a;
//	a += 4;}
//cout << sum1 << endl;
//int a2 = 0, sum2 = 0;
//do
//{sum2 = sum2 + a2;
//	a2 += 4;} 
//while (a2<=50);
//cout << sum2 << endl;
//int a3 = 0, sum3 = 0;
//for (a3 == 0; a3 <= 50; a3 += 4)
//{sum3 = sum3 + a3;}
//cout << sum3 << endl<<endl;
//int  c=0,sum4=0, dob=1;
//for (int b = 1; b <= 10; b++)
//{c=(rand() % 17);
//	cout << c <<endl;
//	sum4 = sum4 + c;
//	dob = dob*c;}
//cout << sum4 << endl << dob<<endl<<endl;
//int d=0,e=0;
//while (d!=2)
//{e++;
//	d=(rand() % 5 + 1);}
//cout << e<<endl<<endl;
//int a, b;
//char c;
//cout << "Введіть довжину: ";
//cin >> a;
//cout << "Введіть висоту: ";
//cin >> b;
//cout << "Введіть символ: ";
//cin >> c;
//for (int i = 0; i < b; i++)
//{for (int j = 0; j < a; j++)
//	{cout << c;}
//	cout << endl;}
//for (int i = 1; i < 11; i++)
//{for (int j = 1; j < 11; j++)
//	{cout <<setw(4)<< i*j;}
//	cout << endl;}
//for (int i = 1; i < 10; i++)
//{double a;
//cout << "Введіть дійсне число: ";
//cin >> a;
//	cout << int(a)<<endl<<(a- int(a))*10*i;
//	cout << endl;}
//int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
//cout << "Введіть 10 оцінок:\n";
//cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10;
//int arr[10];
//for (int i = 0; i < 10; i++)
//{cin >> arr[i];
//	if (arr[i] < 0)
//	{arr[i] = 0;}}
//for (int i = 0; i < 10; i++)
//{cout << arr[i]<<" ";}
//int arr[10],temp=0,a,b;
//for (int i = 0; i < 10; i++)
//{arr[i] = rand() % 100;}
//for (int i = 0; i < 10; i++)
//{cout << arr[i] << endl;}
//cout << "Введіть номера елементів для заміни місцями в масиві з 10 елементів: \n";
//cin >> a >> b;
//cout << endl;
//temp = arr[a-1];
//arr[a-1] = arr[b-1];
//arr[b-1] = temp;
//for (int i = 0; i < 10; i++)
//{cout << arr[i] << endl ;}
//int arr[10], temp,a, ind = 0, min = arr[0];
//for (int i = 0; i < 10; i++)
//	{arr[i] = rand() % 100;
//cout << arr[i] << " ";}
//for (int i = 1; i < 10; i++)
//{if (arr[i] < min)
//	{min = arr[i];
//		ind = i;}}
//cout << "\nmin index " << ind << " value " << arr[ind] << endl;
//	temp = arr[0];
//	arr[0] = arr[ind];
//	arr[ind] = temp;
//	for (int i = 0; i < 10; i++)
//	{cout << arr[i] << " ";}
//	cout << endl;
//	cout << "Введіть кількість елементів для зміщення: ";
//	cin >> a;
//	for (int j = 0; j < a; j++)
//	{for (int i = 0; i < 9; i++)
//		{temp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = temp;}}
//	for (int i = 0; i < 10; i++)
//	{cout << arr[i] << " ";}
//	cout << endl;
	//int arr[8],a;
	//for (int i = 0; i < 8; i++)
	//{arr[i] = rand() % 10;}
	//for (int j = 5; j >0; j--)
	//{for (int i = 0; i < 8; i++)
	//	{cout << arr[i] << " ";}
	//	cout << endl;
	//	int time = j*1000;
	//	Sleep(time);
	//	system("cls");
	//	int ind = rand() % 8;
	//	cout << "Введіть число під номером " << ind << endl;
	//	cin >> a;
	//	if (a == arr[ind])
	//	{cout << "Вгадали.\n";
	//		break;}
	//	else
	//	{cout << "Не вгадали.\n";}}
	//int arr[100], sizeCur = 0, a = 0;
	//while (a != 3)
	//{cout << "1.Ввести\n2.Подивитись.\n";
	//	cin >> a;
	//	switch (a)
	//	{case 1:
	//	{cout << "Введіть оцінку: ";
	//		cin >> arr[sizeCur];
	//		sizeCur++;
	//		break;}
	//	case 2:
	//	{for (int i = 0; i < sizeCur; i++)
	//		{cout << arr[i]<<" ";}
	//		cout << endl;
	//		break;}}}
//int arr[4][5] = {};
//int a = 1;
//	for (int j = 0; j < 4; j++)
//	{for (int i = 0; i < 5; i++)
//		{arr[j][i] = a++;}}
//	for (int j = 0; j < 4; j++)
//	{for (int i = 0; i < 5; i++)
//		{cout <<setw(2)<< arr[j][i] << " ";}
//	cout << endl;}
	//int arr[3][4] = {},a;
	//cin >> a;
	//	for (int j = 0; j < 3; j++)
	//{for (int i = 0; i < 4; i++)
	//	{if (j == 0 && i == 0)
	//		{arr[j][i] = a;}
	//		else
	//		{arr[j][i] = (a *= 2);}}}
	//for (int j = 0; j < 3; j++)
	//{for (int i = 0; i < 4; i++)
	//	{cout << setw(4) << arr[j][i] << " ";}
	//	cout << endl;}
	//int arr[3][4] = {}, a;
	//cin >> a;
	//for (int j = 0; j < 3; j++)
	//{for (int i = 0; i < 4; i++)
	//	{arr[j][i] = a;
	//			a++;}}
	//for (int j = 0; j < 3; j++)
	//{for (int i = 0; i < 4; i++)
	//	{cout << setw(4) << arr[j][i] << " ";}
	//	cout << endl;}
	//int arr[3][6],m,temp;
	//for (int j = 0; j < 3; j++)
	//{for (int i = 0; i < 6; i++)
	//	{arr[j][i] = rand() % 20;}}
	//for (int j = 0; j < 3; j++)
	//{for (int i = 0; i < 6; i++)
	//	{cout << setw(4) << arr[j][i] << " ";}
	//	cout << endl;}
	//cout << "| - up\n"<< "| - down\n" << "<- - left\n"<< "-> - right\n"; 
	//bool isNotEnd = true; 	
	//while (isNotEnd) 
	//{ if (_getch() == 224)
	//{ switch (_getch())
	//{ case 72:
	//{cout << "you enter up"; 
	//break; } 		
	//case 80:
	//{cout << "you enter down";
	//break; } 		
	//case 75:
	//{cout << "you enter left\n"; 
	//cout << "Введіть кількість елементів для зміщення: ";
	//cin >> m;
	//for (int j = 0; j < 3; j++)
	//{for (int a = 0; a < m; a++)
	//	{for (int i = 0; i < 5; i++)
	//		{temp = arr[j][i];
	//			arr[j][i] = arr[j][i + 1];
	//			arr[j][i + 1] = temp;}}}
	//for (int j = 0; j < 3; j++)
	//{for (int i = 0; i < 6; i++)
	//	{cout << setw(4) << arr[j][i] << " ";}
	//	cout << endl;}
	//		break;} 		
	//case 77: {cout << "you enter right";
	//cout << "Введіть кількість елементів для зміщення: ";
	//cin >> m;
	//for (int j = 0; j < 3; j++)
	//{for (int a = 0; a < m; a++)
	//	{for (int i = 0; i < 5; i++)
	//		{temp = arr[j][5 - i];
	//			arr[j][5 - i] = arr[j][5 - i - 1];
	//			arr[j][5 - i - 1] = temp;}}}
	//for (int j = 0; j < 3; j++)
	//{for (int i = 0; i < 6; i++)
	//	{cout << setw(4) << arr[j][i] << " ";}
	//	cout << endl;}
	//	break; } } 		
	//cout << endl; } else { cout << "good bye!!!"; isNotEnd = false; break; } }
//const int col = 30;
//const int row = 10;
//char field[row][col] = {};
//for (int i = 0; i < col; i++)
//{field[0][i] = 1;
//	field[row - 1][i] = 1;
//	field[i][0] = 1;
//	field[i][col - 1] = 1;}
//for (int i = 0; i < row; i++)
//{for (int j = 0; j < col; j++)
//	{cout << field[i][j];}
//	cout << endl;}
//int x = rand() % (col - 2) + 1;
//int y = rand() % (row - 2) + 1;
//int a = rand() % (col - 2) + 1;
//int b = rand() % (row - 2) + 1;
//field[a][b] = 219;
//SetPos(a, b);
//cout << field[a][b];
//SetPos(x, y);
//cout << char(3);
//char ch = '1';
//while (true)
//{while ((!_kbhit())&&(x< col-1)&&(y< row-1)&&(x>0)&&(y>0))
//	{SetPos(x, y);
//		cout << ' ';
//		switch (ch)
//		{case 'w': {y--; break; }//up
//		case 's': {y++; break; }//down
//		case 'd': {x++; break; }//rigth
//		case 'a': {x--; break; }//left}
//		SetPos(x, y);
//		cout << char(3);
//		Sleep(200);}
//	ch = _getch();}
//Hello();
//Hello();
//Bye();
//Bye();
//Bye();
//int a;
//cout << "Введіть число: ";
//cin >> a;
//Sq(a);
int x, y;
cin >> x >> y;
cout<<x<< Func(x,y)<<y<<endl;

}
//void Hello()
//{cout << "Hello!\n";}
//void Bye()
//{cout << "Bye!\n";}
//void Sq(int a)
//{cout <<"Квадрат числа "<<a<<"="<< a*a<<endl;}
char Func(int x, int y)
{if (x > y)
	{return '>';}
	if (x < y)
	{return '<';}
	else	
	{return '=';}}

