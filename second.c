/*
 * second.c
 *
 *  Created: 6/8/2023 11:43:43 PM
 *  Author: Azza Saeed
 */

/*
	Function Name        : scan_Array
	Function Returns     : void
	Function Arguments   : array ,size of array
	Function Description : scan the elements of the array
*/
void scan_Array(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

}
/*
	Function Name        : print_Array
	Function Returns     : void
	Function Arguments   : array ,size of array
	Function Description : print the elements of the array
*/
void print_Array(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d \n",arr[i]);
    }
}
/*
	Function Name        : sortArray
	Function Returns     : void
	Function Arguments   : array ,size of array
	Function Description : sort the elements of the array
*/
void sortArr(int *arr, int size)
{
 int i, j, temp;
 for(i=0;i< size-1;i++)
 {
  for(j=i+1;j< size;j++)
  {
   if(arr[j]>arr[i])
   {
    temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
   }
  }
 }
}
/*
	Function Name        : Second element
	Function Returns     : int
	Function Arguments   : array
	Function Description : function to return second elements of the array
*/
int ScondElem(int *arr)
{
    int ret=arr[1];
    return ret;
}
