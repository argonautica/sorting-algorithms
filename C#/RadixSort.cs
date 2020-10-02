/*
 * C# Program to Perform Radix Sort
 */
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
 
namespace ConsoleApplication2
{
    class Example
    {
        private int[] data;
        private IList<IList<int>> digits = new List<IList<int>>();
        private int maxLength = 0;
        public Example()
        {
            for (int i = 0; i < 10; i++)
            {
                digits.Add(new List<int>());
            }
            Console.Write("Enter the Number of Records : ");
            int count = int.Parse(Console.ReadLine());
            data = new int[count];
            Console.ReadLine();
            for (int i = 0; i < count; i++)
            {
                Console.Write("Enter Record {0} : ", i + 1);
 
                data[i] = int.Parse(Console.ReadLine());
 
                if (maxLength < data[i].ToString().Length)
                    maxLength = data[i].ToString().Length;
            }
        }
 
        public void RadixSort()
        {
            for (int i = 0; i < maxLength; i++)
            {
                for (int j = 0; j < data.Length; j++)
                {
                    int digit = (int)((data[j] % Math.Pow(10, i + 1)) / Math.Pow(10, i));
 
                    digits[digit].Add(data[j]);
                }
 
                int index = 0;
                for (int k = 0; k < digits.Count; k++)
                {
                    IList<int> selDigit = digits[k];
 
                    for (int l = 0; l < selDigit.Count; l++)
                    {
                        data[index++] = selDigit[l];
                    }
                }
                ClearDigits();
           }
           printSortedData();
        }
 
        private void ClearDigits()
        {
            for (int k = 0; k < digits.Count; k++)
            {
                digits[k].Clear();
            }
        }
 
        public void printSortedData()
        {
            Console.WriteLine("The Sorted Numbers are : ");
            for (int i = 0; i < data.Length; i++)
            {
                Console.WriteLine(data[i]);
            }
        }
        static void Main(string[] args)
        {
            new Example().RadixSort();
 
            Console.ReadLine();
        }
    }
}
