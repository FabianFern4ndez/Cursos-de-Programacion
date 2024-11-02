import java.util.Scanner;

public class OperacionMatematica{

       //desclaracion de variables
         float A, B;
         float Tsuma, Tresta, Tdiv, Tmult;

  
  public void LeerDatos(){
    Scanner lee = new Scanner(System.in);
    System.out.print("Ingrese el valor A: ");
    A = lee.nextFloat();
    System.out.print("Ingrese el valor B: ");
    B = lee.nextFloat();

  }

  public void SumarDatos(){
    Tsuma = A + B;
  }
  public void RestarDatos(){
    Tresta = A - B;
  }
  public void MultiplicarDatos(){
    Tmult = A * B;
  }
  public void DividirDatos(){
    Tdiv = A / B;
  }

  public void ImprimirDatos(){
    System.out.println("La suma es "+ Tsuma);
    System.out.println("La resta es "+ Tresta);
    System.out.println("La multiplicacion es "+ Tmult);
    if(B!= 0)
    {
      System.out.println("La division es "+ Tdiv);
    }
    else
    {
      System.out.println("Division entre cero no permitida");
    }
    
  }

}//llave final