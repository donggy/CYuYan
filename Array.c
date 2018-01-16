// 冒泡排序法
void sortByBubble(int array[], int arrayLength)
{
   int temp = 0;
   for(int i = 0; i < arrayLength; i++)
   {
      for(int j=0;j < arrayLength-1; j++)
      {
         if(array[j] > array[j+1])
         {
             temp = array[j];
             array[j] = array[j+1];
             array[j+1] = temp;
         }
      }
   }
}

// 选择排序法
void sortBySelection(int array[], int arrayLength)
{
   int temp = 0;
   for(int i = 0; i< arrayLength; i++)
   {
      for(int j=i+1; j<arrayLength; j++)
      {
         if(array[i] > array[j])
         {
             temp = array[i];
             array[i] = array[j];
             array[j] = temp;
         }
 
      }
   }

}
