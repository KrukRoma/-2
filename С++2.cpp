#include <iostream>

using namespace std;

int main()
{
    /*1*/
    float V, t, l, t1;
    cout << "Enter the distance to the airport(in km): ";
    cin >> l;
    cout << "Enter your travel time to the airport(in minute): ";
    cin >> t;
    t1 = t / 60;
    V = l / t1;
    cout << "Speed: " << V << "km/h" << endl;

    /*2*/
    float h, m, s, suma, h1, m1, s1;
    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;
    cout << "Enter the number of seconds: ";
    cin >> s;
    h1 = h * 120;
    m1 = m * 2;
    s1 = s / 30;
    suma = h1 + m1 + s1;
    cout << "Sum: " << suma << " grn" << endl;

    /*3*/
    float v, C, S, S1, S2, S3;
    const float D = 51.50;
    const float A95 = 52.50;
    const float A92 = 50;
    cout << "Enter the amount of fuel per 100 km(liter): ";
    cin >> C;
    cout << "Enter the route traveled(km): ";
    cin >> v;
    S = (v * C) / 100;
    S1 = S * D;
    S2 = S * A95;
    S3 = S * A92;
    cout << "The cost of a diesel trip: " << S1 << " grn" << endl;
    cout << "The cost of the trip on A-92: " << S3 << " grn" << endl;
    cout << "The cost of the trip on A-95: " << S2 << " grn" << endl;

    /*4*/
int allTime = 86400;
    int leftTime;
    int minutes;
    int seconds;
    cin >> leftTime;
    int currentSec = leftTime;

    cout << "Current seconds : " << currentSec << endl;
    int hours = currentSec / (60 * 60);
    cout << "Hours : " << hours << endl;
    minutes = (currentSec / 60) % 60;
    cout << "Minutes : " << minutes << endl;
    seconds = currentSec % 60;
    cout << "Seconds : " << seconds << endl;

    int remainingTime = allTime - leftTime;
    int remainingHours = remainingTime / (60 * 60);
    int remainingMinutes = (remainingTime / 60) % 60;
    int remainingSeconds = remainingTime % 60;

    cout << "Time remaining until midnight: " << remainingHours << " hours, " << remainingMinutes << " minutes, " << remainingSeconds << " seconds" << endl;

    /*5*/
    int workingDaySeconds = 8 * 3600; 
    int passedSeconds;
    cout << "Enter the number of seconds that have passed: ";
    cin >> passedSeconds;

    int Sec = workingDaySeconds - passedSeconds;
    int Hour = Sec / 3600;
    cout << "Hours left at work: " << Hour << endl;



}