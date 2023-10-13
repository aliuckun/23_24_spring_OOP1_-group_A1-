// sum_prelab1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream readme("input.txt");
    int number;
    int sum = 0;
    readme >> number;
    while (readme >> number) {
        sum += number;
    }
    readme.close();
    cout << "sum is: " << sum << endl;
}
