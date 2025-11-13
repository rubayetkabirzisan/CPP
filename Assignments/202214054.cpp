#include <bits/stdc++.h>
using namespace std;

class Line
{
    int num_points;     // number of points constructing the line
    double *x_coords;   // array to store x-coordinates of points
    double *y_coords;   // array to store y-coordinates of points

public:
    Line(int n)         // constructor to set the number of points and allocate memory for arrays
    {
        num_points = n;
        x_coords = new double[num_points];
        y_coords = new double[num_points];
    }

    double calculate_length()       // method to calculate the length of the line
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

    void set_point(int i, double x, double y)    // public function to set coordinates for a point
    {
        x_coords[i] = x;
        y_coords[i] = y;
    }

    ~Line()         // destructor to deallocate memory for arrays
    {
        delete[] x_coords;
        delete[] y_coords;
    }
};

int main()
{
    int n1, n2;
    cout << "Number of points in Line 1: ";
    cin >> n1;
    Line line1(n1);
    cout << "Enter coordinates:\n";
    for (int i = 0; i < n1; i++)
    {
        double x, y;
        cin >> x >> y;
        line1.set_point(i, x, y);
    }
    double len1 = line1.calculate_length();
    cout << "Length of Line 1: " << len1 << endl;

    cout << "Number of points in Line 2: ";
    cin >> n2;
    Line line2(n2);
    cout << "Enter coordinates:\n";
    for (int i = 0; i < n2; i++)
    {
        double x, y;
        cin >> x >> y;
        line2.set_point(i, x, y);
    }
    double len2 = line2.calculate_length();
    cout << "Length of Line 2: " << len2 << endl;

    if (len1 < len2)
    {
        cout << "Line 2 > Line 1" << endl;
    }
    else if (len1 > len2)
    {
        cout << "Line 1 > Line 2" << endl;
    }
    else
    {
        cout << "Line 1 = Line 2" << endl;
    }

    return 0;
}
