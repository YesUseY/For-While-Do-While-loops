#include <iostream>

using namespace std;

int main()
{
    for (int i=1; i<=7; i++) {

        cout << "Siandien yra diena numeris: " << i << endl;
    }
    int j = 1;
    while (j<8) {

        cout << "Siandien yra diena numeris: " << j << endl;
        j++;
    }
    int k=1;

    do{

        cout << "Siandien yra diena numeris: " << k << endl;
        k++;
    }
    while (k<8);
    return 0;
}
