#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
void task1(){
    double b1, b2, h;
    std::cout << "Enter information about the trapezoid separated by space. First the bases, then the heights.(Double): ";
    std::cin >> b1 >> b2 >> h;
    std::cout << "\nArea of trapezoid: " << (b1 + b2) * h / 2<<"\n";
}
void task2() {
    double r;
    std::cout << "Enter information about the circle. Only radius.(Double): ";
    std::cin >> r;
    std::cout << "\nCircumference: " << 2*M_PI*r<< "\nArea of circle: "<< M_PI*r*r<<"\n";
}
void task3() {
    double a1,a2;
    std::cout << "Enter information about right triangle separated by space. Two sides.(Double): ";
    std::cin >> a1 >> a2;
    std::cout << "\nArea of triangle: " << a1 * a2 / 2 << "\nHypotenuse: " << sqrt(a1*a1+a2*a2) << "\n";
}
void task4() {
    int number;
    std::cout << "Enter decimal four digit number. (Int): ";
    std::cin >>number;
    std::cout << "\nSum of digits: " << (number%10) + (number/10) % 10 + (number / 100) % 10 + (number/1000) << "\n";
}
void task5() {
    double x, y;
    std::cout << "Enter information about coordinate in the Cartesian system, x and y separated by space.(Double): ";
    std::cin >> x >> y;
    std::cout << "\nR: " << sqrt(x*x+y*y) << "\nAngle in radians: " << atan(y/x) << "\n";
}
void task6() {
    double r, angle;
    std::cout << "Enter information about coordinate in polar coordinate system, radius and angle in radians separated by space.(Double): ";
    std::cin >> r >> angle;
    std::cout << "\nX: " << r*cos(angle)   << "\nY: " << r * sin(angle) << "\n";
}
void task7() {
    double a, b, c;
    double discr;
    std::cout << "Enter information about the equation. A, b, c separated by space.(Double; ax^2 + bx + c = 0): ";
    std::cin >> a >> b >> c;
    discr = b * b - 4 * a * c;
    if (discr < 0) {                    // Различные условия для квадратного уравнения.
        std::cout << "\nno valid solution\n";
    }
    else {
        if (((a == 0) && (b == 0))) {
            std::cout << "\nAny value x\n";
        }
        else {
            if (a == 0) {
                std::cout << "\nx=" << -c / b << "\n";
            }
            else {
                if (discr == 0) {
                    std::cout << "\nx=" << -b / (2 * a) << "\n";
                }
                else {
                    std::cout << "\nx1=" << (-b + sqrt(discr)) / (2 * a) << "\nx2=" << (-b - sqrt(discr)) / (2 * a) << "\n";
                }
            }
        }

    };
}
void task8() {
    double a, b, c;
    std::cout << "Enter information about triangle separated by space. Three sides.(Double): ";
    std::cin >> a >> b >> c;
    std::cout << "\nMedians: " << 0.5 * (sqrt(2 * b * b + 2 * c * c - a * a)) << " " << 0.5 * (sqrt(2 * a * a + 2 * c * c - b * b)) << " " << 0.5 * (sqrt(2 * b * b + 2 * a * a - c * c)) << "\n";
}
void task9() {
    int sec,h;
    std::cout << "Enter seconds.(Int): ";
    std::cin >> sec;
    h = sec / 3600;
    std::cout << "\nHours:" << h << "\nMinutes:" << sec / 60 - h * 60  << "\n";
}
void task10() {
    double a, b, c;
    std::cout << "Enter information about triangle separated by space. Three sides.(Double): ";
    std::cin >> a >> b >> c;
    if ((a == b) || (a == c) || (b == c)) {
        std::cout << "\nIt is a isosceles triangle\n";
    }
    else {
        std::cout << "\nIt is not a isosceles triangle\n";
    }
}
void task11() {
    double cost;
    std::cout << "Enter purchase price.(Double): ";
    std::cin >> cost;
    if (cost > 1000) {
        std::cout << "\nFinal purchase price: " << cost * 0.9<<"\n";
    }
    else {
        std::cout << "\nFinal purchase price: " << cost<< "\n";
    }
}
void task12() {
    double height, weight;
    std::cout << "Enter height, weight separated by space.(Double): ";
    std::cin >> height >> weight;
    if (height - 100 < 0){
        std::cout << "\nYou too small.\n";
    }
        else {
            if (height - 100 < weight) {
                std::cout << "\nYou should lose weight.\n";
            }
            else {
                std::cout << "\nYou should not lose weight.\n";
            }
        }

}
void task13() {
    std::srand(std::time(nullptr));
    int a = std::rand() % 10, b = std::rand() % 10;
    int ans;
    std::cout << "Solve this product of two numbers: " << a << " * " << b << " = (type in Int): ";
    std::cin >> ans;
    if (ans == a * b) {
        std::cout << "\nTrue\n";
    }
    else {
        std::cout << "\nFalse\n";
    }
}
void task14() {
    int hours, day;         // Не указано откуда брать стоимость, по умолчанию делаю её равной 1 за час.
    std::cout << "Enter the duration of the conversation in hours and the day of the week separated by a space.(Int): ";
    std::cin >> hours >> day;
    if ((day == 6) || (day == 7)) {
        std::cout << "\nPrice of negotiations with discount(Price is 1 per hour): " << hours * 0.8 << "\n";
    }
    else {
        std::cout << "\nPrice of negotiations without discount(Price is 1 per hour): " << hours << "\n";
    }
}
void task15() {
    enum Months {
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December,
    };
    int month;
    std::cout << "Enter month number (Int): ";
    std::cin >> month;
    switch (month - 1) {
    case January:
        std::cout << "\nMonth is January, winter\n";
        break;
    case February:
        std::cout << "\nMonth is February, winter\n";
        break;
    case March:
        std::cout << "\nMonth is March, spring\n";
        break;
    case April:
        std::cout << "\nMonth is April, spring\n";
        break;
    case May:
        std::cout << "\nMonth is May, spring\n";
        break;
    case June:
        std::cout << "\nMonth is June, summer\n";
        break;
    case July:
        std::cout << "\nMonth is July, summer\n";
        break;
    case August:
        std::cout << "\nMonth is August, summer\n";
        break;
    case September:
        std::cout << "\nMonth is September, autumn\n";
        break;
    case October:
        std::cout << "\nMonth is October, autumn\n";
        break;
    case November:
        std::cout << "\nMonth is November, autumn\n";
        break;
    case December:
        std::cout << "\nMonth is December, winter\n";
        break;
    default:
        std::cout << "\nWrong number\n";
        break;
    }

}
void task16() {
    int number; //Назовём шестизначное число счастливым, если сумма его первых трёх цифр равна сумме последних трёх цифр.
    std::cout << "Enter decimal six digit number. (Int): ";
    std::cin >> number;
    if (((number % 10) + (number / 10) % 10 + (number / 100) % 10) == (((number / 100000) % 10) + (number / 10000) % 10 + (number / 1000) % 10)){
        std::cout << "\nLucky number\n";
    }
    else {
        std::cout << "\nUnlucky number\n";
    }
}
void task17() {
    setlocale(LC_ALL, "Russian");           //Русский язык для консоли.
    int number; 
    std::cout << "Введите число копеек. (Int): ";
    std::cin >> number;
    if (number % 10 == 1 && (number < 10 || number > 20)) {
        std::cout << "\n" << number << " копейка\n";
    }
    else {
        if (number % 10 > 1 && number % 10 < 5) {
            std::cout << "\n" << number << " копейки\n";
        }
            else {
                   std::cout << "\n" << number << " копеек\n";
            }
    }
}
void task18() {
    int number; //Палиндро́м, пе́ревертень — число, буквосочетание, слово или текст, одинаково читающееся в обоих направлениях.
    std::cout << "Enter decimal four digit number. (Int) : ";
    std::cin >> number;
    if (((number % 10)*1000 + ((number / 10) % 10)*100 + ((number / 100) % 10)*10 +number/1000) == number) {
        std::cout << "\nIt is a palindrome\n";
    }
    else {
        std::cout << "\nIt is not a palindrome\n";
    }
}
void task19() {
    int number,b; 
    std::cout << "Enter decimal three digit number. (Int) : ";
    std::cin >> number;
    std::cout << "\nEnter number b for comparison. (Int) : ";
    std::cin >> b;
    if ((number % 10) * ((number / 10) % 10) * ((number / 100) % 10)>b) {
        std::cout << "\nMultiplication of numerics is higher than number b.";
    }
    else {
        std::cout << "\nMultiplication of numerics is lower than number b.";
    }
    if (((number % 10) + (number / 10) % 10 + (number / 100) % 10)%7==0) {
        std::cout << "\nSum of numerics is a multiple of seven\n";
    }
    else {
        std::cout << "\nSum of numerics is not a multiple of seven\n";
    }
}
void task20() {
    double a, b, c, d;
    std::cout << "Enter information about rectangles separated by space. Four numbers: a, b, c, d.(Double): ";
    std::cin >> a >> b >> c >> d;
    if (((a < c) && (b < d)) || ((a < d) && (b < c))) {
        std::cout << "\nYes, it is possible to fit a rectangle with sides a and b into a rectangle with sides c and d under given conditions\n";
    }
    else {
        std::cout << "\nNo, you cannot fit a rectangle with sides a and b into a rectangle with sides c and d under the given conditions\n";
    }
}
int main()
{
    task20();
}