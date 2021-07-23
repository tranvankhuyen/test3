#include <iostream>

// Enter Array function
void Enter_Array(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        std::cin >> a[i];
    }
}
// Print Array function
void Print_Array(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        std::cout << a[i] << " ";
}
// Cut function
void Cut(int a[], int n)
{
    int check = 1;
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (a[i] == a[j])
            {
                check = 0;
                break;
            }
            else if (a[i] != a[j])
            {
                check = 1;
            }
        }
        if (check == 1)
        {
            std::cout << a[i] << " ";
        }
    }
    std::cout << a[n - 1]<<std::endl;
}

// main function
int main()
{
    int a[] = {1, 2, 3, 4, 4};
    int n(5);
    Cut(a, n);
    std::cout<<sizeof(a)/ sizeof(a[0]);
    return 0;
}