#include <bits/stdc++.h>
using namespace std;

class Line
{
    string name;
    int num_points;
    double *x_coords;
    double *y_coords;

public:
    Line(string n, int np)
    {
        name = n;
        num_points = np;
        x_coords = new double[num_points];
        y_coords = new double[num_points];
    }

    double calculate_length()
    {
        double length = 0.0;
        for (int i = 0; i < num_points - 1; i++)
        {
            double dx = x_coords[i+1] - x_coords[i];
            double dy = y_coords[i+1] - y_coords[i];
            length += sqrt(dx*dx + dy*dy);
        }
        return length;
    }

    void read_coordinates()
    {
        cout << "Enter coordinates:" << endl;
        for (int i = 0; i < num_points; i++)
        {
            cin >> x_coords[i] >> y_coords[i];
        }
    }

    void print_length()
    {
        double len = calculate_length();
        cout << "Length of " << name << ": ";
        printf("%.5f\n", len);
    }

    string get_name()
    {
        return name;
    }

    ~Line()
    {
        delete[] x_coords;
        delete[] y_coords;
    }
};

int main()
{
    int n;
    cout << "Number of lines: ";
    cin >> n;
    Line *lines[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        int num_points;
        cout << "Name of Line " << i+1 << ": ";
        cin >> name;
        cout << "Number of points in " << name << ": ";
        cin >> num_points;
        lines[i] = new Line(name, num_points);
        lines[i]->read_coordinates();
        lines[i]->print_length();
    }


    // sort the lines by length using bubble sort
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (lines[j]->calculate_length() > lines[j+1]->calculate_length())
            {
                Line *temp = lines[j];
                lines[j] = lines[j+1];
                lines[j+1] = temp;
            }
        }
    }


    // print the sorted order of lines
    cout << "Order of Lines:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << lines[i]->get_name();
        if (i != n-1)
        {
            cout << "<";
        }
    }
    cout << endl;

    // deallocate memory for the lines
    for (int i = 0; i < n; i++)
    {
        delete lines[i];
    }

    return 0;
}


