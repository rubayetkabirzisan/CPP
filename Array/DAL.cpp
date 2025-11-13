#include <iostream>
#include <cmath>

using namespace std;

class DynamicArray
{
private:
    int *d_array;
    int max_size;
    int length;

public:
    DynamicArray()
    {
        max_size = 2;
        d_array = new int[max_size];
        length = 0;
    }

    void add(int item)
    {
        if (isFull())
        {
            max_size = 2 * max_size;
            int *temp_d_array = new int[max_size];
            cout << "\nDAL Limit reached, new array created, values copied\n" << endl;

            for (int i = 0; i < length; i++)
            {
                temp_d_array[i] = d_array[i];
            }

            delete[] d_array;
            d_array = temp_d_array;
        }

        d_array[length] = item;
        length++;
    }

    void printd_array()
    {
        for (int i = 0; i < length; i++)
        {
            cout << d_array[i] << ' ';
        }
        cout << endl;
    }

    bool isFull()
    {
        return length == max_size;
    }

    void del(int pos)
    {
        if (pos < 0 || pos > length)
        {
            cout << "Invalid index, enter a valid one.\n";
            return;
        }

        int val = d_array[pos];
        for (int i = pos; i < length - 1; ++i)
        {
            d_array[i] = d_array[i + 1];
        }
        length--;

        printf("\nDeleted the value in position %d which was %d\n", pos, val);
        cout << "The current Array is: ";
        printd_array();
    }

    void insert(int pos, int val)
    {
        if (pos < 0 || pos > length)
        {
            cout << "Invalid index, enter a valid one.\n";
            return;
        }

        for (int i = length; i >= pos; --i)
        {
            d_array[i] = d_array[i - 1];
        }

        d_array[pos] = val;
        length++;

        printf("\nInserted '%d' at position %d\n", val, pos);
        cout << "The current Array is: ";
        printd_array();
    }

    void del_all(int val)
    {
        bool f = false; // Flag to track if the value was found
        int c = 0; // Counter for the number of deletions

        // Iterate through the array
        for (int i = 0; i < length; ++i)
        {
            if (d_array[i] == val) // If the current element matches the value to be deleted
            {
                f = true; // Set the flag to true, indicating value found
                ++c; // Increment the deletion counter
                // Shift the elements after the current index one position to the left
                for (int j = i; j < length - 1; ++j)
                {
                    d_array[j] = d_array[j + 1];
                }
                length--; // Decrease the length of the array
            }
        }

        // Check if the last element of the array is the value to be deleted
        if (d_array[length - 1] == val)
        {
            length--; // Decrease the length of the array
            ++c; // Increment the deletion counter
        }

        // Calculate the new maximum size of the array based on the updated length
        int tmp = log2(length) + 1;
        max_size = pow(2, tmp);

        // Create a new temporary array with the updated maximum size
        int *tmp_array = new int[max_size];

        // Copy the elements from the original array to the temporary array
        for (int i = 0; i < length; ++i)
        {
            tmp_array[i] = d_array[i];
        }

        // Delete the original array
        delete[] d_array;

        // Assign the temporary array as the new array
        d_array = tmp_array;

        if (!f) // If the value was not found in the array
        {
            cout << "\nElement already deleted or not present.\n";
        }
        else // If the value was found and deleted
        {
            printf("\nDeleted all occurrences of '%d'. Total %d items were deleted. Array resized.\n", val, c);
            cout << "Array size: " << sizeof(d_array) << endl;
            cout << "The current Array is:\n";
            printd_array();
        }
    }
    void replace(int val, int r_val)
    {
        bool f = false;
        int c = 0;

        for (int i = 0; i < length; ++i)
        {
            if (d_array[i] == val)
            {
                f = true;
                ++c;
                d_array[i] = r_val;
            }
        }

        if (!f)
            printf("No occurrence of %d was found. No items were replaced.", val);
        else
        {
            printf("\n%d replaced with '%d'. Total %d replacements.\n", val, r_val, c);
            cout << "The current Array is:\n";
            printd_array();
        }
    }

    bool is_sorted(int order)
    {
        if (order == 0)
        {
            for (int i = 0; i < length - 1; ++i)
            {
                if (d_array[i] > d_array[i + 1])
                    return false;
            }
        }
        else
        {
            for (int i = 0; i < length - 1; ++i)
            {
                if (d_array[i] < d_array[i + 1])
                    return false;
            }
        }
        return true;
    }

    void sort(int order)
    {
        if (order == 0)
        {
            for (int i = 0; i < length - 1; ++i)
            {
                if (d_array[i] > d_array[i + 1])
                {
                    swap(d_array[i], d_array[i + 1]);
                    i = -1;
                }
            }
        }
        else
        {
            for (int i = 0; i < length - 1; ++i)
            {
                if (d_array[i] < d_array[i + 1])
                {
                    swap(d_array[i], d_array[i + 1]);
                    i = -1;
                }
            }
        }

        cout << "Array was sorted first. Below is the current array list.\n";
        for (int i = 0; i < length; ++i)
        {
            cout << d_array[i] << " ";
        }
        cout << endl;
    }

    int lower_bound(int val, int order)
    {
        if (length == 0)
        {
            cout << "Array is empty.";
            return -1;
        }

        if (!(is_sorted(order)))
            sort(order);

        int low = 0, high = length, mid;

        while (low <= high)
        {
            mid = low + (high - low) / 2;

            if (d_array[mid] == val)
                return mid;
            else if (d_array[mid] > val)
                (order == 0) ? high = mid - 1 : low = mid + 1;
            else
                (order == 0) ? low = mid + 1 : high = mid - 1;
        }

        if (d_array[low] != val)
            cout << "Value not present. The closest index we could find: ";
        else
            printf("The element %d was found at position: ", val);

        return low;
    }

    ~DynamicArray()
    {
        delete[] d_array;
    }
};

int main()
{
    DynamicArray dal;
    int a, choice;
    printf("\t\tDynamic Array d_array Implementation using Template Class.\n\t\t\t");
    while (1)
    {
        printf("\n1. Add an element\n2. See current elements\n3. Delete an element\n4. Insert element at position\n5. Delete all matching values\n6. Replace matching values\n7. Sort & Search for element\n8. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nEnter a num to add: ");
            scanf("%d", &a);
            dal.add(a);
            cout << "The current dynamic array is: ";
            dal.printd_array();
        }
        else if (choice == 2)
        {
            cout << "The current dynamic array is: ";
            dal.printd_array();
        }
        else if (choice == 3)
        {
            cout << "Enter position to delete from: ";
            int pos;
            cin >> pos;
            dal.del(pos);
        }
        else if (choice == 4)
        {
            cout << "Enter position to insert into: ";
            int pos;
            cin >> pos;
            cout << "Enter the value to insert: ";
            int val;
            cin >> val;
            dal.insert(pos, val);
        }
        else if (choice == 5)
        {
            cout << "Enter value to delete: ";
            int val;
            cin >> val;
            dal.del_all(val);
        }
        else if (choice == 6)
        {
            cout << "Enter value to replace: ";
            int val, r_val;
            cin >> val;
            cout << "Enter value to be replaced by: ";
            cin >> r_val;
            dal.replace(val, r_val);
        }
        else if (choice == 7)
        {
            cout << "Enter value to search for: ";
            int val;
            cin >> val;
            cout << "Enter order of sorting.\n 0 for ascending & 1 for descending: ";
            int order;
            cin >> order;
            cout << dal.lower_bound(val, order);
        }
        else
        {
            printf("\n\t\tProgram Terminated\n\n");
            break;
        }
    }

    return 0;
}
