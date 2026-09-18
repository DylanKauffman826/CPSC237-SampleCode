#include <iostream>
using namespace std;

void writeArrayBackward(const int anArray[], int start, int end)
{
    // TODO: Implement the recursive function

}

int main()
{
    int anArray[] = {7, 3, 9, 2, 8, 5, 1};
    int size = 7;

    cout << "Original array: ";

    for (int i = 0; i < size; i++)
        cout << anArray[i] << " ";

    cout << endl;

    cout << "Array backward: ";

    writeArrayBackward(anArray, 0, size - 1);

    cout << endl;

    return 0;
}
