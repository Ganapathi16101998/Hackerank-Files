import java.io.*;
import java.util.*;
import java.math.*;

class solution
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]<38)
                System.out.println(a[j]);
            else
            {
                if((a[j]+1)%5==0)
                    System.out.println(a[j]+1);
                else if((a[j]+2)%5==0)
                    System.out.println(a[j]+2);
                else 
                    System.out.println(a[j]);
            }
        }
    }
}
