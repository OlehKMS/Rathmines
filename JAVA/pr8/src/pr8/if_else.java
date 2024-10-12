package pr8;

public class if_else {

//	public static void main(String[] args) {
//		// TODO Auto-generated method stub
//int number = 10;
///// check if numbers is less than 0
//if(number < 0) {
//	System.out.println("The number is negative.");
//}
//else {
//	System.out.println("The number is  positive.");
//}
//}
	public static void main(String[] args) {
		String coffeSize = "medium";//Custumers choise of coffe size
		int price;
		switch(coffeSize) {
		case "small":
			price = 4; //Price for small size
			break;
		case "medium":
			price = 7; //Price for medium size
			break;
		case "large":
			price =12; //Price for medium size
			break;
			default:
				price = 0; //DEfault case if no size matches
                System.out.println("Invalid size selected.");
		}
	}
	}


