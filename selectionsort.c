#include <stdio.h>
#include <stdio.h>

void selectionsort(int []);
int binarysearch(int [],int);

int main()
{
  int arr[5] = {32,5,7,3,72};
  int num, result, i;
  selectionsort(arr);
  
  
   for(i=0;i<=4;i++)
    {
        printf("%d \n",arr[i]);
    }
  printf("Enter number to be searched \n");
  scanf("%d",&num);
  
  result = binarysearch(arr,num);
  if(result == -1)
  {
            printf("Not found \n");
  }
  else
  {
      printf("Found at index %d \n",result);
  }
  
  return 0;
}

// selection sort
void selectionsort(int arr[])
{
    int min,i,j,temp;
    for(i=0;i<4;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
    if(min!=i)
    {
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

int binarysearch(int arr[], int num)
{
    int low=0, up=4, mid;

    while(low <= up)
    {
              mid = (low+up)/2;
              if(arr[mid] == arr[num])
              {
                          return mid;
              }
              if(arr[mid] < arr[num])
              {
                          low = mid+1;
              }
             else if(arr[mid] > arr[num])
              {
                          up = mid+1;
              }
     return -1;
    }
}
