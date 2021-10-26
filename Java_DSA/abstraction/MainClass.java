package abstraction;

abstract class Car //cannot make object of this class
{
		//Car is a concept
		int price;
		
		abstract void start(); //abstract class needed here
		
		void breaking()
		{
				//concrete methods
				System.out.println("Car is breaking");
		}
}

class Audi extends Car
{
		@Override
		void start() 
		{
				System.out.println("Audi is starting");
		}
}

class BMW extends Car
{
		@Override
		void start() 
		{
				System.out.println("BMW is starting");
		}
}

public class MainClass {

		public static void main(String[] args) {
				
				
				//Car c1 = new Car(); //we cannot make a object for the abstract car class
		
        		Audi a1 = new Audi();
        		a1.start();
        		
        		BMW b1 = new BMW();
        		b1.start();
				
        		
				

		}
}
