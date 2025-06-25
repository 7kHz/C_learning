#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
/* {
int n = {10};
char x = {300};
cout << x << endl;
} */
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
{
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
}