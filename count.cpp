#include <iostream>
//Print Array function
void Out_Array(int a[], int n)
{
    for(int i = 0; i <= n- 1; i++)
    {
        std::cout<<a[i]<<" ";
    }
}
// count function
void count(int a[], int n)
{   
    int b[20];
    for(int i = 0; i<=n-1; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i <=n - 1;i++)
    {
        for(int j = 0; j <= n - 1; j++)
        {
            if (a[i] == a[j])
            {
                b[i]++;
            }
        }

    }
    int k;
    std::cout<<"Enter element need to be checked : "; 
    std::cin>>k;
    for(int i = 0; i <= n; i++)
    {
        if(k == a[i])
        {
            std::cout<<b[i];
            break;
        }
    }
    
}
// main function
int main(){
    int a[] = {1,2,3,3,4};
    int n(5);
    count(a, n);
    return 0;
}