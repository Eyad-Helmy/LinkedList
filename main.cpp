#include <iostream>
#include <string>
#include "LinkedList.h"
int main()
{
    std::cout << "List of integers: \n";
    LinkedList<int> list1;
    int arr[] = {1,2,3,4,5};
    for(const int &element: arr) {
        list1.addToList(element);
    }
    list1.addToStart(78);
    list1.printlist();

    std::cout<< "list of string: \n";
    LinkedList<std::string> list2;
    std::string arr2[] = {"Hello" , "world" , "this" , "a" , "test" , "run!"};
    for(const std::string &element : arr2) {
        list2.addToList(element);
    }
    list2.printlist();
    return 0;
}
