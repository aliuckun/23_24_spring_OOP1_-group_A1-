// product_Prelab1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream readme("input.txt");
    int number;
    int product = 1;
    readme >> number;
    while (readme >> number) {
        product *= number;
    }
    readme.close();
    cout << "product is: " << product << endl;
}

