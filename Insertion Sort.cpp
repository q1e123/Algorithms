#include<fstream>

std::ifstream INPUT_FILE("input.in");
std::ofstream OUTPUT_FILE("output.out");

void insertionSort(int arr[], int sizeOfArray){
   for (int i = 1; i < sizeOfArray; i++)
   {
       int key = arr[i];
       int j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = key;
   }
}

int main()
{
    int sizeOfArray;
    INPUT_FILE>>sizeOfArray;
    int arr[sizeOfArray];
    for(int i=0;i<sizeOfArray;i++) INPUT_FILE>>arr[i];
    insertionSort(arr,sizeOfArray);
    for(int i=0;i<sizeOfArray;i++) OUTPUT_FILE<<arr[i]<<" ";
    return 0;
}
