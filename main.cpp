#include <iostream>
#include "LinkedList.h"
int main()
{
    LinkedList<int> list1;
    int arr[5] = {1,2,3,4,5};
    for(int element: arr) {
        list1.addToList(element);
    }
    list1.printlist();
    return 0;
}
