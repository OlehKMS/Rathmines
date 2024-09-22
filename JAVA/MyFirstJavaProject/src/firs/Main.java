//package firs;
//
//public class Main {
//
//	public static void main(String[] args) {
//		// TODO Auto-generated method stub
//		System.out.println("Hello, World!");
//	}
//
//}

import java.util.Scanner;

public class Main {
	public static void main (Sting[] args) {
//	Создаем объект Scanner для чтения ввода пользователя
	Scanner scanner = new Scanner(System.in);
	
	// Выводим сообщение для пользователя
	System.out.print("Enter your name");
	
	// Читаем ввод пользователя
	String name = scanner.nextLine();
	
	// Выводим приветствие
	System.out.println("Hello," + name + "!");
	
	// Закрываем Scanner, чтобы освободить ресурсы
	scanner.close();
	}
}
