#include <iostream>
using namespace std;
class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time()
    {
        hr = 10;
        min = 20;
        sec = 34;
    }
    Time(int hr, int min, int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    void printTime()
    {
        cout << "the hour is " << hr << endl;
        cout << "the minute is " << min << endl;
        cout << "the second is " << sec << endl;
    }

    int get_Hour()
    {
        return hr;
    }
    int get_min()
    {
        return min;
    }
    int get_sec()
    {
        return sec;
    }

    int set_hour(int hr)
    {
        this->hr = hr;
    }
    int set_min()
    {
        this->min = min;
    }

    int set_sec()
    {
        this->sec = sec;
    }
};

int main()
{
    //Time *arr=new Time[5]{Time(10,34,56),Time(12,8,56),Time(5,36,59),Time(),Time()};

    Time t1(10,39,14);

    t1.printTime();
}