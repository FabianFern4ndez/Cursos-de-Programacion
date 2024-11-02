import javax.swing.JOptionPane;
public class FabianProg2 {
public static void main(String[] args) {
int suma, opcion, n1=0, n2=0;
String entrada;
double b_mayor, b_menor, altura, area;
//objeto
ClaseFabian ob = new ClaseFabian();


entrada = JOptionPane.showInputDialog("1.Suma dos Enteros\n2.Calcular Area Trapecio\n3.Salir\n");
opcion = Integer.parseInt(entrada);

//la entrada la realice por el principal porque en la clase no me deja

switch(opcion)
{
case 1:
	try
		{
			entrada= JOptionPane.showInputDialog("Numero 1: \n");
            n1 = Integer.parseInt(entrada);
            entrada= JOptionPane.showInputDialog("entre altura triangulo\n");
            n2 = Integer.parseInt(entrada);

		}
		catch(Exception e)
		{
			System.out.println("\nSolo puedes insertar números enteros. ");
		}

		suma = ob.sumaNumeros(n1,n2);
		JOptionPane.showMessageDialog(null,"La suma de "+n1+" + "+n2+" es = "+suma);
        break;


case 2:
	        entrada= JOptionPane.showInputDialog("Base menor: \n");
            b_menor = Integer.parseInt(entrada);
            entrada= JOptionPane.showInputDialog("Base mayor: \n");
            b_mayor = Integer.parseInt(entrada);
            entrada= JOptionPane.showInputDialog("Altura\n");
            altura = Integer.parseInt(entrada);

            area = ob.areaTrapecio(b_mayor,b_menor,altura);
            JOptionPane.showMessageDialog(null,"El area de dicho trapecio es: "+area);
            break;
case 3:
	JOptionPane.showMessageDialog(null," Gracias por Usar");
	break;
default:
JOptionPane.showMessageDialog(null,"Opcioninvalida (1-3) \n");
break;

}

}}
