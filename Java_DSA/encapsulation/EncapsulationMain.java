package encapsulation;

class Laptop
{
		private int ram;
		private int price;
		
		public void setPrice(int price)
		{
				//is the user an Admin
				this.price = price;
		}
		public void getPrice()
		{
				System.out.println("Price of laptop is " + this.price);
		}
		public void getRam() 
		{
				System.out.println("Ram of laptop is " + this.ram);
		}
		public void setRam(int ram) 
		{
				this.ram = ram;
		}
}

public class EncapsulationMain {

		public static void main(String[] args) {
				
				EncapsulationIntro obj = new EncapsulationIntro();
				
				//obj.doWork(); -> cannot do this by writing the private keyword
				
				//Encapsulation - encapsulate the methods and properties of a particular class
				//data hiding is achieved here
				
					
				Laptop l1 = new Laptop();
				
				l1.setRam(8);
				l1.setPrice(67000);
				
				l1.getPrice();
				l1.getRam();
			
		}
}
