// smallest_Prelab1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.

#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream readme("input.txt");
    int number;
    int smallest;
    readme >> number;
    readme >> number;
    smallest = number;
    while (readme >> number) {
        if (number < smallest) smallest = number;
    }
    readme.close();
    cout << "smallest is: " << smallest << endl;
}
