package project_v1;

//public class main {
//
//	public static void main(String[] args) {
//		// TODO Auto-generated method stub
//		System.out.println("Hellow World!");
//
//	}
//
//}


import java.util.Scanner;

public class main{
		public static void main (String[] args) {
			Scanner scanner = new Scanner (System.in);
			System.out.print("Enter yor name");
			String name = scanner.nextLine();
			System.out.println("Hello, " + name + "!");
			scanner.close();
			}
}


