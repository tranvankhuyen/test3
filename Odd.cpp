#include <iostream>
// max function
int Max_function(int a[], int n)
{
    int Max = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        Max = std::max(Max, a[i]);
    }
    return Max;
}
// Enter Array
void Enter_Array(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << "Arr [ " << i << " ] = ";
        std::cin >> a[i];
    }
}
// Print Array
void Out_Array(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << "Arr [ " << i << " ] = " << a[i] << std::endl;
    }
}
// Returns odd number that occurs the most
void Odd_number_detached(int a[], int n) // < ---------
{
    int b[100];
    int c[10];
    // Assign all values of array c to 1 --------------------------------
    for (int i = 0; i <= n - 1; i++)
    {
        c[i] = 1;
    }
    // Assign all values of array b to 0 --------------------------
    for (int i = 0; i <= n - 1; i++)
    {
        b[i] = 0;
    }

    // Split all odd numbers of array a and assign to array b.
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            if (a[j] % 2 != 0)
            {
                b[i] = a[j];
                break;
            }
            else if (a[j] % 2 == 0)
            {
                break;
            }
        }
    }

    // Create Array C as counter variable.
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (b[i] == b[j])
            {
                c[i]++;
            }
            else if (b[i] == 0)
            {
                c[i] = 0;
            }
        }
    }

    // Find max element in Array C.
    int max = Max_function(c, n);

    //
    for (int i = 0; i <= n - 1; i++)
    {
        if (c[i] == max)
        {
            std::cout << b[i] << std::endl;
        }
    }
}

// Main function
int main()
{
    int a[100];
    int n(5);
    Enter_Array(a, n);
    std::cout << "< ----------- >" << std::endl;
    Odd_number_detached(a, n);
    return 0;
}
