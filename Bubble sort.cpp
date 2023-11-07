#include<iosstrem>
using namespace std;
void bubblesort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			{if(a[j]>a[j+1])
				{swap(a[j],a[j+1]);
	            }
	        }
        }
}
void printArray(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
		cout<<a[i]<<" ";
	cout<<endl;	
}
int main()
{
    int a[] = { 5, 1, 4, 2, 8};
    int N = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, N);
    cout << "Sorted array: \n";
    printArray(a, N);
    return 0;
}

