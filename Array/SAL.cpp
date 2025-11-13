#include <iostream>
using namespace std;

const int MAX_SIZE = 4;
int current_array_size = 0;
int arr[MAX_SIZE];

void insertElement()
{
    if (current_array_size >= MAX_SIZE)
    {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }

    int pos, val;

    cout << "Enter the element to insert: ";
    cin >> val;

    cout << "Enter index position to insert (current array length is: " << current_array_size << ", so choose an index between 0 and " << current_array_size << "): ";
    cin >> pos;

    if (pos < 0 || pos > current_array_size)
    {
        cout << "Invalid index position. Please enter a value between 0 and " << current_array_size << endl;
        return;
    }

    for (int i = current_array_size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = val;
    current_array_size++;

    cout << val << " is inserted at position " << pos << endl;
}

void deleteElement()
{
    if (current_array_size == 0)
    {
        cout << "Array is empty. Nothing to delete." << endl;
        return;
    }

    int pos;
    cout << "Enter index to delete from: ";
    cin >> pos;

    if (pos < 0 || pos >= current_array_size)
    {
        cout << "Incorrect position value" << endl;
        return;
    }

    for (int i = pos; i < current_array_size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    current_array_size--;

    cout << "Deleted from position " << pos << endl;
}

void searchElement()
{
    if (current_array_size == 0)
    {
        cout << "Array is empty. Cannot perform search." << endl;
        return;
    }

    int key;
    cout << "Enter the Search Key: ";
    cin >> key;

    for (int i = 0; i < current_array_size; i++)
    {
        if (arr[i] == key)
        {
            cout << "The search key " << key << " is at index " << i << endl;
            return;
        }
    }

    cout << "The search key " << key << " is not found in the array." << endl;
}

void printArray()
{
    if (current_array_size == 0)
    {
        cout << "Array is empty. Nothing to print." << endl;
        return;
    }

    cout << "The Current Array list is: ";
    for (int i = 0; i < current_array_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void replaceDuplicates()
{
    if (current_array_size == 0)
    {
        cout << "Array is empty. Nothing to replace." << endl;
        return;
    }

    int rep, rep_with;
    int count = 0;

    cout << "Enter the value to replace: ";
    cin >> rep;
    cout << "Enter the value to replace with: ";
    cin >> rep_with;

    for (int i = 0; i < current_array_size; i++)
    {
        if (arr[i] == rep)
        {
            count++;
        }
    }

    if (count < 2)
    {
        cout << "The value " << rep << " doesn't exist or doesn't have duplicates." << endl;
    }
    else
    {
        cout << "Replaced duplicates of " << rep << " with " << rep_with << endl;

        for (int i = 0; i < current_array_size; i++)
        {
            if (arr[i] == rep)
            {
                arr[i] = rep_with;
            }
        }

        cout << "The new array is: ";
        for (int i = 0; i < current_array_size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    count = 0;
}

int main()
{
    int menu;

    while (true)
    {
        cout << "Max size of SAL is set to 4" << endl << endl;
        cout << "Menu" << endl;
        cout << "1. Insert New Element in the array" << endl;
        cout << "2. Delete element from the array" << endl;
        cout << "3. Search any element" << endl;
        cout << "4. Print The array" << endl;
        cout << "5. Replace duplicates" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> menu;

        if (menu == 6)
        {
            break;
        }

        switch (menu)
        {
        case 1:
            insertElement();
            break;
        case 2:
            deleteElement();
            break;
        case 3:
            searchElement();
            break;
        case 4:
            printArray();
            break;
        case 5:
            replaceDuplicates();
            break;
        default:
            cout << "Wrong input." << endl;
            break;
        }
    }

    return 0;
}
