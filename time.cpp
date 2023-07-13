// Author Philip Wells
// Lab 03
// Program to calculate time since 00:00:00 on Jan. 1, 1970
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;
const float DAYS_PER_MONTH = 30.42;
const int MONTHS_PER_YEAR = 12;

int main()
{

    // variables
    time_t currentTime;
    float min;
    float hour;
    int shour;
    float day;
    int sday;
    float month;
    int smonth;
    float year;
    int syear;
    int sec;
    // s(name) variables describe seconds per (name)
    cout << currentTime << " seconds have passed since 00:00:00 GMT, Jan 1, 1970" << endl;

    // Vaiable computations
    currentTime = time(NULL);
    syear = MONTHS_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE;
    smonth = DAYS_PER_MONTH * HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE;
    sday = HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE;
    shour = MINUTES_PER_HOUR * SECONDS_PER_MINUTE;

    // output computations
    year = currentTime / syear;
    currentTime = currentTime % syear;
    month = currentTime / smonth;
    currentTime = currentTime % smonth;
    day = currentTime / sday;
    currentTime = currentTime % sday;
    hour = currentTime / shour;
    currentTime = currentTime % shour;
    min = currentTime / SECONDS_PER_MINUTE;
    currentTime = currentTime % SECONDS_PER_MINUTE;
    sec = currentTime;

    // output
    cout << "years = " << year << endl;
    cout << "months = " << month << endl;
    cout << "hours = " << hour << endl;
    cout << "days = " << day << endl;
    cout << "minutes = " << min << endl;
    cout << "seconds = " << sec << endl;
    return 0;
}
