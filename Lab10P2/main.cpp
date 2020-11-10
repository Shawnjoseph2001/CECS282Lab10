// listplus.cpp

// demonstrates reverse(), merge(), and unique()

#include <iostream>

#include <list>

#include<algorithm>

using namespace std;



int main()

{

    //Create 2 lists called list1 and list2. Store integer numbers.



    int arr1[] = { 40, 30, 20, 10 };

    int arr2[] = { 15, 20, 25, 30, 35 };

    //Determine the array size of arr1 and arr2
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);



    //Push elements of array arr1 into list1
    list<int> list1(arr1, arr1 + size1);
    //Push elements of array arr1 into list1
    list<int> list2(arr2, arr2 + size2);



    // reverse list1: 10 20 30 40
    list1.reverse();

    // merge list2 into list1
    list1.merge(list2);

// remove duplicate 20 and 30
list1.resize(distance(list1.begin(), unique(list1.begin(), list1.end())));
list1.remove(30);
    //Diplay the content of list1 using iterator
    for(auto i = list1.begin(); i != list1.end(); i++) {
        cout << *i << ", ";
    }
    cout << endl;
    //Display the list1 in reverse
    for(auto i = list1.rbegin(); i != list1.rend(); i++) {
        cout << *i << ", ";
    }
    cout << endl;
    //Find 25 in the list. If it's found, display "Found 25";otherwise, display "Not found 25"
    if(find(list1.begin(), list1.end(), 25) == list1.end()) {
        cout << "Not ";
    }
    cout << "found 25" << endl;
    return 0;
}