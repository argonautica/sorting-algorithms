class Program{
 static void Main(){
 int[] arr = BubbleSort(new int[] { 64, 34, 25, 12, 22, 11, 90 });
        for (int i = 0; i < arr.Length; System.Console.WriteLine((arr[i++]))) ;}

 public static int[] BubbleSort(int[] arr)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                try
                {
                    int num = arr[i];
                    if (arr[i + 1] < num)
                    {
                        arr[i] = arr[i + 1];
                        arr[i + 1] = num;
                        BubbleSort(arr);
                    }
                }
                catch (IndexOutOfRangeException e)
                {
                    continue;
                }
            }
            return arr;
        }
        }
