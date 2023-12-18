using System;
using System.Diagnostics.CodeAnalysis;
using System.Text.RegularExpressions;

namespace CSHARPPRACTICE.Answers
{
    internal class SatTest02Dec
    {
        /*---------Question 1 : Start ---------*/

        public void Strong(int start_num, int end_num)
        {
            for (int i = start_num; i <= end_num; i++)
            {
                if (isStrong(i))
                    Console.WriteLine(i);
            }
        }
        public bool isStrong(int num) {
            int temp = num,sum=0;
            while (temp > 0)
            {             
                sum += BaseLib.Factorial(temp%10);
            temp /= 10;
            }
            return (sum == num)? true:false;
        }
        /*-----------Question 1:End ----------*/

        /*-----------Question 2:Start-----------*/
        public void armStrong(int start_num, int end_num)
        {
            for(int i = start_num;i <= end_num; i++)
            {
                if(isArmStrong(i))
                    Console.WriteLine(i);
            }
        }
        public bool isArmStrong(int num)
        {
            int temp = num, sum = 0;
            int c=BaseLib.countDigits(num);
            while (temp > 0)
            {
                sum += BaseLib.Power(temp % 10, c); 
            }
            return (sum == num)? true:false;
        }
        /*-----------Question 2:End ----------*/

    }
}
