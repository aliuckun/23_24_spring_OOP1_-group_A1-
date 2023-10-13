// OOP_PreLab_1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream readme("input.txt");
    float count;
    float number;
    float sum = 0;
    float average = 0;
    float product = 1;
    float smallest;
    readme >> count;
    readme >> number;
    sum += number;
    average += number / count;
    product *= number;
    smallest = number;
    while (readme >> number) {
        sum += number;
        product *= number;
        average += number / count;
        if (number <= smallest) smallest = number;
    }
    cout << "Sum is: " << sum << endl;
    cout << "Product is: " << product << endl;
    cout << "Average is: " << average << endl;
    cout << "Smallest is: " << smallest << endl;
}

