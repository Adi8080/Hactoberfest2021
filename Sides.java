abstract class Shape {
    abstract void NumberoFSides();
    
}
class Trapezoid extends Shape{
       public void NumberoFSides(){
           System.out.println("TRAPEZOID HAVE 4 SIDES:");
       }
}
class Triangle extends Shape{
    public void NumberoFSides(){
        System.out.println("TRIANGLE HAVE 3 SIDES:");
    }
}
class Pentagon extends Shape{
    public void NumberoFSides(){
        System.out.println("PENTAGON HAVE 5 SIDES:");
    }
}
class Hexagon extends Shape{
    public void NumberoFSides(){
        System.out.println("HEXAGON HAVE 6 SIDES:");
    }
}
public class Sides{ 
    public static void main(String[] args) {
    Trapezoid trap = new Trapezoid();
    Triangle tri = new Triangle();
    Pentagon pen = new Pentagon();
    Hexagon hexa = new Hexagon();
    trap.NumberoFSides();
    tri.NumberoFSides();
    pen.NumberoFSides();
    hexa.NumberoFSides();
}
}
