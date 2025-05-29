#include <iostream>
#include <iomanip>
int main()       
/* {
    double a, b, square, perimetr;
    std::cin>>a>>b;
    square = a * b;
    perimetr = 2 * (a + b);
    std::cout<<std::setw(7)<<std::setfill('$')<<square<<" "<<perimetr<<std::endl;
    return 0;
} */
/* int main()
{
    system("chcp 65001");
    setlocale(LC_ALL, "Russian2");
    int a, b, sum;
    std::cout << "Введите число в 8-й системе: ";
    std::cin >> std::oct >> a;
    std::cout << "Введите число в 16-й системе: ";
    std::cin >> std::hex >> b;
    sum = a + b;
    std::cout << "Сумма в десятичной системе: " << std::dec << sum << std::endl;
    return 0;
} */

/* {
    int a;
    std::cin >> std::oct >> a;
    std::cout << std::dec << a;
    return 0;
} */
{
    double a, b, c, sum, prod, average;
    std::cin >> a >> b >> c;
    sum = a + b + c;
    prod = a * b * c;
    average = sum / 3;
    std::cout<<std::fixed<<std::setprecision(3)<<sum<<std::endl;
    std::cout<<std::fixed<<std::setprecision(3)<<prod<<std::endl;
    std::cout<<std::fixed<<std::setprecision(3)<<average<<std::endl;
    return 0;
}