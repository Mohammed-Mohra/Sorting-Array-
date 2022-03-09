#include "Sorter.h"
#include "Person.h"
#include <iostream>
void swap(unsigned char& xp, unsigned char& yp);
using namespace std;
void Sorter::BubbleSort(IComparable** pItems, unsigned itemCount) {
    unsigned char Temp;
    for (int i = 0; i < itemCount; i++) {
        Person& temp = (Person&)(*pItems[i]);

        for (int j = i + 1; j < itemCount; j++) {
            Person& temp1 = (Person&)(*pItems[j]);

            if (temp > temp1) {
                Temp = temp.age;
                temp.age = temp1.age;
                temp1.age = Temp;
            }
        }

    }
}
