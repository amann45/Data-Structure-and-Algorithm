#include<iostream>
using namespace std;

void selectionSort(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min]) min = j;
        int t = a[i]; a[i] = a[min]; a[min] = t;
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

    selectionSort(b,5);
}

