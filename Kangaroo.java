import java.io.*;
import java.util.*;

class solution
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        long x1=sc.nextLong();
        long v1=sc.nextLong();
        long x2=sc.nextLong();
        long v2=sc.nextLong();
        long ctr1,ctr2;
        ctr1=ctr2=0;
        int temp=0;
        int temp1=2;
        if(x1<x2&&v1<v2)
            System.out.println("NO");
        else
        {
            for(int i=0;i<Integer.MAX_VALUE;i++)
            {
                x1=x1+v1;
                ctr1=ctr1+1;
                x2=x2+v2;
                ctr2=ctr2+1;
                if(x1==x2&&ctr1==ctr2)
                {
                    System.out.println("YES");
                    temp1=1;
                    break;
                }
                temp=0;
            }
            if(temp==0&&temp1!=1)
                System.out.println("NO");
        }
        
    }
}
