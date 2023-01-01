#include <cstdio>

int main()
{
    // the printable asciis are 32 - 126
    
    char arr[1024];
    
    for(auto i = 0; i < 1024; i++)
    {
        if(i % 125 < 33)
        {
            arr[i] = (i % 125) + 33;
            continue;
        }
        
        arr[i] = i % 125;
    }
    
    for(auto i = 0; i < 1024; i++)
        printf("arr[%d] == %c\n", i, arr[i]);
}