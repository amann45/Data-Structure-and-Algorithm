#include<iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) 
            {
                int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
                for (int i=0; i<5; i++)
                {
                    cout<<a[i]<<"\t";
                }
                cout<<endl;
            }
}

int main()
{
    int n=5;
    int b[n]={20,21,3,5,7};
    
    
    bubble_sort(b,5);
}

