#include<iostream>
using namespace std;

void insertionSort(int a[], int n) 
{
    for (int i = 1; i <n; i++) 
    {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) 
        {
            a[j + 1] = a[j];
            j--;
            
        }
        a[j + 1] = key;
        for (int k=0; k<5; k++)
                {
                    cout<<a[k]<<"\t";
                }
                cout<<endl;
    }
}

int main()
{
    int n=5;
    int b[n]={20,21,3,5,7};
    insertionSort(b,5);
}
