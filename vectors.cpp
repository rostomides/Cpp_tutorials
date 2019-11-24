#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> list(5, 1); // initializes a vector with 5 elements all equal to 5

    // Get the size in memory
    cout << "The size of the vector is: " << sizeof(list) << " bytes." << endl;

    // Get the number of elements
    cout << "Number of elements: " << list.size() << endl;

    //Get the first element:
    cout << "The first element is " << list.front() << endl;

    //Get the first element:
    cout << "The last element is " << list.back() << endl;

    // Remove last element of the list
    list.pop_back();

    // Add an element at the end of the list
    list.push_back(9);

    // Insert 10000 once at front
    list.insert(list.begin(), 1, 10000);
    // Insert 30000 3 times at front
    list.insert(list.begin(), 3, 30000);

    // Iterating on vectors
    for (auto element : list)
    {
        cout << element << endl;
    }

    for (size_t i(0); i < list.size(); ++i)
    {
        cout << list[i] + 2 << endl;
    }

    for (int i = 0; i < list.size(); ++i)
    {
        cout << list[i] + 3 << endl;
    }

    // Copy a vector:

    vector<int> list2(list);

    for (auto element : list2)
    {
        cout << element << " from list 2" << endl;
    }

    // copy values from anonymous vector

    list = vector<int>(list.size(), 7); // the vector in the right has no name

    for (int element : list)
    {
        cout << element << " imported from anonymous vector" << endl;
    }

    // Change element by reference

    for (auto &element : list)
    {
        element += 2;
    }

    for (auto element : list)
    {
        cout << element << " after changes" << endl;
    }

    //Check if vector is empty
    cout << "Is list is empty: " << list.empty() << endl;

    //clear the list
    cout << "Clearing the table..." << endl;
    list.clear();

    //Check if vector is empty
    cout << "Is list is empty: " << list.empty() << endl;

    return 0;
}