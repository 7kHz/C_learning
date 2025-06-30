#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
/* {
    int x;
    scanf("%o", &x);
    printf("--------------------------------\n");
    printf(u8"| десятичная        |%-10d|\n| восьмеричная      |%-10o|\n| шестнадцатеричная |%-10x|\n", x, x, x);
    printf("--------------------------------\n");
    return 0;
} */
/* {
    int rub, kop;
    scanf("%d %d", &rub, &kop);
    rub = (kop < 100) ? rub : rub + kop / 100;
    //kop = (kop < 100) ? kop : kop % 100;
    kop %= 100;
    printf(u8"%d р. %d к.", rub, kop);
    return 0;
} */
/* {
    int gb, movie, clip, music, doc;
    scanf("%d", &gb);
    gb *= 1024;
    movie = gb / 760;
    clip = gb % 760 / 95;
    music = gb % 760 % 95 / 7;
    doc = (gb % 760 % 95 % 7) * 1024 / 350;
    printf("%d %d %d %d", movie, clip, music, doc);
    return 0;
} */
/* {
    float distance, min, sec, speed;
    scanf("%d %d:%d", &distance, &min, &sec);
    speed = distance / (min * 60 + sec) * 3600 / 1000;
    printf("%.2f", speed);
    return 0;
} */
/* {
    int hour_start, min_start, sec_start, hour_end, min_end, sec_end, sec_start_sum, sec_end_sum, delta_sec;
    float price;
    scanf("%d-%d-%d %d-%d-%d", &hour_start, &min_start, &sec_start, &hour_end, &min_end, &sec_end);
    sec_start_sum = hour_start * 3600 + min_start * 60 + sec_start;
    sec_end_sum = hour_end * 3600 + min_end * 60 + sec_end;
    delta_sec = sec_end_sum - sec_start_sum >= 0 ? sec_end_sum - sec_start_sum: 24 * 3600 - sec_start_sum + sec_end_sum;
    price = delta_sec % 60 == 0 ? delta_sec / 60 * 0.07: delta_sec / 60 * 0.07 + 0.07;
    printf("%.2f", price);
    return 0;
} */
/* {
   float x, y;
   scanf("%f", &x);
   y = pow(cos(x), 2) + 1.0 / 2 * pow(cos(x), 4);
   printf("%.3f", y);
   return 0;
} */
/* {
    float a, b, c;
    scanf("%f %f", &a, &b);
    c = sqrt(pow(a,2) + pow(b, 2));
    printf("%.3f", c);
    return 0;
} */
/* {
    float l1, l2, l3, r1, r2, r3, PI;
    PI = atan(1.0) * 4;
    scanf("%f %f %f", &r1, &r2, &r3);
    l1 = 2 * PI * r1;
    l2 = 2 * PI * r2;
    l3 = 2 * PI * r3;
    printf("%7.2f\n%7.2f\n%7.2f\n", l1, l2, l3);
    return 0;
} */
/* {
    char message, key;
    int mask;
    key = '$';
    mask = 1 << 2;
    cin >> message;
    message = message ^ key;
    if (message & mask) {
        cout << u8"Nastupaem";
    }
    else {
        cout << u8"Oshidaem";
    }
    return 0;
} */
/* {
    int a, b, c;
    cin >> a >> b;
    if (b!= 0) {
        c = a / b;
        cout << c;
    }
    else {
        cout << u8"Devizion by zerro!";
    }
    return 0;
} */
/* {
    int a;
    cin >> a;
    if (a % 2 == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
} */
/* {
    double x, y;
    cin >> x;
    y = 2 * pow(x, 2);
    if (x >= - 2) {
        y = sin(x);
    }
    if (x >= 5) {
        y = pow(log10(2 * x), 2);
    }
    cout << fixed << setprecision(2) << y << endl;
} */
/* {
    int num;
    cin >> num;
    if (num < 100000 || num > 999999) {
        cout << "ERROR" << endl;
    }
    else {
    int digit1 = num % 10;
    num /= 10;
    int digit2 = num % 10;
    num /= 10;
    int digit3 = num % 10;
    num /= 10;
    int digit4 = num % 10;
    num /= 10;
    int digit5 = num % 10;
    num /= 10;
    int digit6 = num % 10;
    if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
} */
/* {
    double distance1, distance2, weight, litres1, litres2, litres3, expense;
    cin >> distance1 >> distance2 >> weight;
    if (weight > 2000) {
        cout << "ERROR" <<endl;
    }
    else {
        if (weight <= 500) {
            expense = 1;
        }
        else if (weight > 500 && weight <= 1000) {
            expense = 4;
        }
        else if (weight > 1000 && weight <= 1500) {
            expense = 7;
        }
        else if (weight > 1500 && weight <= 2000) {
            expense = 9;
        }
        litres1 = distance1 * expense;
        if (litres1 > 300) {
            cout << "ERROR" << endl;
        }
        else {
        litres2 = distance2 * expense;
        if (litres2 > 300) {
            cout << "ERROR" << endl;
        }
        else {
            litres3 = litres2 - (300 - litres1);
        if (litres3 < 0) {
            litres3 = 0;
        }
        cout << fixed << setprecision(2) << litres3 << endl;
    }
    }
    }
} */
/* {
    int a, b, c, d, e, max;
    cin >> a >> b >> c >> d >> e;
    max = a;
    if (max > b) {
        max = b;
    }
    if (max > c) {
        max = c;
    }
    if (max > d) {
        max = d;
    }
    if (max > e) {
        max = e;
    }
    cout << max << endl;
} */
/* {
int num;
cin >> num;
switch (num)
{
case 12: case 1: case 2:
    cout << u8"Зима" << endl; break;
case 3: case 4: case 5:
    cout << "Весна" << endl; break;
case 6: case 7: case 8:
    cout << "Лето" << endl; break;
case 9: case 10: case 11:
    cout << "Осень" << endl; break;
default:
    cout << "Ошибка" << endl;
    break;
}
} */
/* {
int num;
cin >> num;
switch (num)
{

case 1 ... 5: cout << "Working day" << endl; break;
case 6: cout << "Saturday" << endl; break;
case 7: cout << "Sunday" << endl; break;
default: cout << "Error" << endl;
}
} */
{
    char letter;
    cin >> letter;
    switch(letter) {
        case 'J': cout << "январь\n"; break;
        case 'F': cout << "февраль\n"; break;
        case 'D': cout << "декабрь\n"; break;
        default: cout << "Ошибка\n";
    }
}