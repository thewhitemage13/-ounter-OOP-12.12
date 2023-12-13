#include <iostream>
#include <windows.h>
using namespace std;

class Counter {

    unsigned int time = 0;//Изначальное значение счетчика
    unsigned int min_time = 0;//Минимальное значение
    unsigned int max_time = 99999;//Максимальное значение
    unsigned short one_step = 1;//На сколько будем увеличивать счетчик

public:

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
        while (time <= max_time)//цикл
        {
            if (time == max_time)//если текущее значение равно максимальному значению
            {
                time = min_time;//то мы присваем текущему значению счетчика минимальное значение
                Sleep(5000);//Добавил,чтоб когда число будет равно 99998,пользователь мог увидел это
            }
            time+=one_step;//увеличиваем текущее значенме счетчика
            cout << time << "\n";//вывидим текуще зачение счетчика
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
