#include <iostream>
#include <windows.h>
using namespace std;

class Counter {
    unsigned int time = 0;//Изначальное значение счетчика
    unsigned int min_time = 0;//Минимальное значение
    unsigned int max_time = 99999;//Максимальное значение
    unsigned short one_step = 1;//На сколько будем увеличивать счетчик

public:

    void ToTime(unsigned int t)//ToTime() - Сделал,чтоб приравнять счетчик к миниамальному числу
    {
        time = t;
    }
    void AddTime(unsigned int t)//AddTime() - Чтоб складывать текущее значение счетчика к числу на сколько будем увеличивать счетчик
    {
        time += t;
    }
    void SetTime(unsigned int t)//Изначальное значение счетчика
    {
        time = t;
    }
    unsigned int GetTime()//Изначальное значение счетчика
    {
        return time;
    }
    void SetMax(unsigned int m)//Максимальное значение
    {
        max_time = m;
    }
    unsigned int GetMax()//Максимальное значение
    {
        return max_time;
    }
    void SetMin(unsigned int mi)//Минимальное значение
    {
        min_time = mi;
    }
    unsigned int GetMin()//Минимальное значение
    {
        return min_time;
    }
    void SetOne(unsigned int o)//На сколько будем увеличивать счетчик
    {
        one_step = o;
    }
    unsigned short GetOne()//На сколько будем увеличивать счетчик
    {
        return one_step;
    }
    //Работа счетчика
    void TimeStart()
    {
        while (GetTime() <= GetMax())//цикл
        {
            if (GetTime() == GetMax())//если текущее значение равно максимальному значению
            {
                ToTime(GetMin());//то мы присваем текущему значению счетчика минимальное значение
                Sleep(5000);//Добавил,чтоб когда число будет равно 99998,пользователь мог увидел это
            }
            AddTime(+GetOne());//увеличиваем текущее значенме счетчика
            cout << GetTime() << "\n";//вывидим текуще зачение счетчика
            Sleep(3);//Добавил,чтоб цикл не так быстро работал и была возможность просмотреть текущее значение
        }
    }
};

int main()
{
    //запуск
    Counter c;
    c.TimeStart();
}
