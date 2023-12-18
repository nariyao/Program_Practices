using System;


namespace CSHARPPRACTICE
{
    internal sealed class BaseLib
    {
        public static int Factorial(int num)
        {
            int fact = 1;
            if (num < 0) return -1;
            else if (num > 1)
            {
                while (num > 0)
                {
                    fact *= num--;
                }
            }
            return fact;
        }
        public static int Power(int num, int exp)
        {
            int ans = 1;
            while (exp > 0) ans *= num;
            return ans;
        }
        public static int countDigits(int num)
        {
            int count = 0;
            while (num > 0)
            {
                count++;
                num /= 10;
            } 
            return count;
        }
    }
}
