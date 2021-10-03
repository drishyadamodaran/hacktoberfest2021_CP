# Question is how to find a element in an array

using System;
using System.Linq;


public static class Extensions
{
    public static bool find<T>(this T[] array, T target) {
        return array.Contains(target);
    }
}

public class FindElement
{
    public static bool Find(int target, int[] array)
    {
        bool exists = array.find(target);
        return exists;
    }
    
    public static void Test() 
    {
        int[] array = { 1, 2, 3, 4, 5 };
        
        if(Find(4, array))
        {
          Console.WriteLine("Found Element");
        }
    }
}
