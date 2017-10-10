#include "Sort.h"
#include <iostream>
using namespace std;

Sort::Sort() {
	// TODO Auto-generated constructor stub

}

Sort::~Sort() {
	// TODO Auto-generated destructor stub
}

template <class Object>

void sort(Object *array, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j<n; ++j){
            if (array[i] > array[j]) {
                Object item;
                item = array[i];
                array[i] = array[j];
                array[j] = item;
            }
        }
    }
}

int main ()
 {
    int intarray[10]= {50, 10, 20, 15, 62, 32, 6, 80, 90, 100};
    float floatarray[10] = {5.5, 1.5, 2.2, 15.5, 62.75, 32.5, 6.5, 80.7, 90.5, 100.2};
    string stringarray[10]= {"just", "jelle", "celine", "frans", "sten", "trunks", "zwieber", "vegeta", "goku", "gohan"};

cout<<"Float array sorted: "<<endl;
sort(floatarray, 10);
for (int i=0; i<10; i++)
    cout<<floatarray[i]<<endl;

cout<<"Int array sorted: "<<endl;
sort(intarray, 10);
for (int i=0; i<10; i++)
    cout<<intarray[i]<<endl;

cout<<"String array sorted: "<<endl;
sort(stringarray, 10);
for (int i=0; i<10; i++)
    cout<<stringarray[i]<<endl;

return 0;
}
