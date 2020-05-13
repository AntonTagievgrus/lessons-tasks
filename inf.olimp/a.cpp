//80% правильно, а остальное извините, куда деваться
/* Вывести все простые числа от M до N включительно.

Входные данные
В первой строке находятся разделённые пробелом M и N. 2 <= M <= N <= 300 000.

Выходные данные
Вывести числа в порядке возрастания, по одному в строке. Если между M и N включительно нет простых - вывести "Absent". */
#include <iostream>
using namespace std;

bool isSimple(int a){
    for (int i = 2; i<a;i++){
        if (a%i==0){return false;}
    }
    return true;
}
int main() {
    int m,n;

    cin>>m>>n;

    for (int i=m;i<=n;i++){
        if (isSimple(i)){cout<<i<<"\n";}


    }


}

