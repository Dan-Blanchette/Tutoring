#include <iostream>
#include <iomanip>
#include <string>

// using namespace std;
using std::cin;
using std::cout;
using std::string;

const int SIZE = 20;

// Functions
int binarySearch(const int *, int, int);

int main()
{
    // array of assigned 20 assigned values
    int IDnums[SIZE] = {101, 142, 147, 189, 199, 207, 222,
                        234, 289, 296, 310, 319, 388, 394,
                        417, 429, 447, 521, 536, 600};

    int empID, results;

    cout << "Enter the employee ID you wish to search for: ";
    cin >> empID;
    cout << "\n";

    results = binarySearch(IDnums, SIZE, empID);

    if (results == -1)
    {
        cout << "ID not found!\n";
    }
    else
    {
        cout << "ID " << empID << " was found in element " << results << " of the array.\n";
    }

    return 0;
}

/**
 * @brief conducts a binary search on the elements within an array and returns the element number that
 * stores the results on success and -1 if the search is unsuccessful.
 * 
 * @return int 
 */
int binarySearch(const int *array, int size, int value)
{
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;

    // while the entered number is not found AND the first array possition is less than or equal to size - 1  [19]
    while (!found && (first <= last))
    {
        middle = (first + last) / 2; // calculate the midpoint
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}