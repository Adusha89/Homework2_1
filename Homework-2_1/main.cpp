#include <iostream>

using namespace std;

//Объявление и инициализация целочисленной глобальной константы
const int CONST_A=5; //Можно так же объявить тип long, ulong, ll, unsigned

//Второе задание
enum cell//Перечисление ячейки поля
{
    X, O, EMPTY
};
typedef enum cell CELL ; //Переопределение имени

enum result {//Перечисление результатов игры
    flag, win_x, win_o, nobody
};
typedef enum result RESULT;

enum xod{//Перечисление очереди хода игроков
    x_X,x_O
};
typedef enum xod XOD;

//Четвертое задание
struct pole { //Структура поле для игры
    CELL p[3][3]={EMPTY}; //Само поле размером 3*3
    RESULT fl_res; //флаг результата
    XOD fl_xod; //флаг хода игрока
};
typedef struct pole POLE;

//Пятое задание
union type{
    int a;
    float b;
    char c;
};
typedef union type TYPE;
struct fl_type{
    bool is_int:1;
    bool is_float:1;
    bool is_char:1;
    TYPE num;
};

int main()
{
    //Первое задание
    //Обьявление и инициализация типа int
    int a=2;
    unsigned a1=2;
    long a2=3;
    unsigned long a3=5;
    long long a4=6;

    //Обьявление и инициализация типа char
    char b='b';
    unsigned char b1='c'; //Можно так же объявить тип long, ulong, ll

    //Обьявление и инициализация типа float
    float c=12.4;//Можно так же объявить тип long, ulong, ll, unsigned

    //Обьявление и инициализация типа double
    double d=123.4; //Можно так же объявить тип long, ulong, ll, unsigned

    //Объявление и инициализация целочисленной локальной константы
    const int CONST_A=5; //Можно так же объявить тип long, ulong, ll, unsigned

    //Объявление и инициализация переменной bool
    bool flag=false;

    //Объявление и инициализация переменной string
    string str="Hello!";


    //Третье задание
    int i,j;
    CELL arr[3][3]={X,O,EMPTY,X,O,X,EMPTY,O,O};//Создание и инициализация массива типа CELL
    for(i=0;i<3;i++)//Проверка массива
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==0) {cout << 'X';continue;};
            if(arr[i][j]==1) {cout << 'O';continue;};
            cout << ' ';
        }
        cout << endl;
    }



    return 0;
}
