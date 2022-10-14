package lab2;

import java.util.Scanner;

public class exp3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Number Of terms ");
		int n = sc.nextInt();
		int a = 0,b=1,c=0;
		System.out.print(a+" ");
		System.out.print(b+" ");
		for (int i = 0;i<n-2;i++)
		{
			c = a+b;
			a = b;
			b = c;
			System.out.print(c+" ");
		}
		sc.close();
		
		
	}

}
