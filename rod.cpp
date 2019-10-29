#include <iostream>

using namespace std;

int max(int a, int b);

int rod(int price[], int size);

int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout<<"Maximo valor obtenido: "<< rod(arr, size) << endl;
    return 0;
}

int max(int a, int b) {
    if(a < b)
        return b;
    else
        return a;
}


int rod(int price[], int size)
{
   int val[size+1];
   val[0] = 0;
   int i, j; 
   for (i = 1; i<=size; i++){
       int maxVal = 0;
       for (j = 0; j < i; j++)
         maxVal = max(maxVal, price[j] + val[i-j-1]);
       val[i] = maxVal;
   }
   return val[size];
}

