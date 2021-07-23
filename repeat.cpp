#include <iostream>


// main function
int main(){
    int a[10] = {1,2,2,3,3,4,5,5};
    int n(8);
    for(int i = 0; i <= n- 1; i++)
    {
        for(int j = i + 1; j <= n - 1; j++)
        {
            if(a[i] == a[j])
            {
                std::cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}