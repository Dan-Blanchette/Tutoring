#include <iostream>
using namespace std;

// function prototype
void selectSort(int *array, int size);
void showArr(const int *array, int);
const int SIZE = 6;

int main()
{
    int idNums[SIZE] = {222, 149, 147, 200, 199, 210};

    cout << "The values before being sorted are: ";
    showArr(idNums, SIZE);
    cout << endl;

    selectSort(idNums, SIZE);

    cout << "These are the values after being sorted: ";
    showArr(idNums, SIZE);
    cout << endl;
}

/**
 * @brief 
 * 
 * @param array 
 * @param size 
 */
void selectSort(int *array, int size)
{
    int startScan, minIndex, minValue;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];

        for (int i = (startScan + 1); i < size; i++)
        {
            if (array[i] < minValue)
            {
                minValue = array[i];
                minIndex = i;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

/**
 * @brief 
 * 
 * @param array 
 * @param size 
 */
void showArr(const int *array, int size)
{
    for (int i = 0; i < size;  i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}