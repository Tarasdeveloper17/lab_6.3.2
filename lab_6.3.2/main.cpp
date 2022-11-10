#include <iostream>
#include <iomanip>
#include <time.h>


using namespace std;

template<typename T>
void createArr(T* arr, const T size, const T Low, const T High, T i)
{
    arr[i] = Low + rand() % (High-Low+1);
    
    if(i < size - 1)
    {
        createArr(arr, size, Low, High, i+1);
    }
    
}

void Print(int* arr, const int size, int i)
{
    cout << arr[i]<< " ";
    
    if(i < size - 1)
    {
        Print(arr, size, i+1);
    }
    else
   cout << endl;
}

void sortedArray(int *arr, const int  size, int i)
{
    
    for(int j = i + 1; j < size; ++j)
        
        if(arr[i] >= arr[j])
        {
            int tmp;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    
    if(i < size - 1)
    {
        sortedArray(arr, size, i+1);
    }
    
}
    

int main ()
{
    
    srand((unsigned)time(NULL));
    const int n=5;
    int arr[n];
    int Low = 4;
    int High = 16;
    createArr<int>(arr, n, Low, High,0);
    Print(arr, n,0);
    sortedArray(arr, n,0);
    Print(arr, n,0);
    
    return 0;
}

