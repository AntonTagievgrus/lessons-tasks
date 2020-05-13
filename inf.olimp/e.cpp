/* Даны размеры прямоугольных открытки и конверта. Требуется определить, поместится ли открытка в конверт.

Входные данные
В первой строке находятся размеры открытки, во второй - размеры конверта. Pазмеры открытки и конверта - целые положительные числа, не превосходящие 100.

Выходные данные
Если открытку можно вложить в конверт, вывести "Possible", если нет - вывести "Impossible". */
#include<math.h>
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int f = max(c, d);
    c= min(c, d);
    d = f;
    f=max(a,b);
    a = min(a, b);
    b = f ;

    if (a <= c && b <= d) {
        cout << "Possible";
    }
    else if ((c * sqrt(a * a + b * b - d * d) + d * sqrt(a * a + b * b - c * c)) <= (b * b - a * a)) {
        cout << "Possible";
    }  else {
        cout << "Impossible";
    }

    return 0;
}
