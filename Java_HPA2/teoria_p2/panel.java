import javax.swing.JOptionPane;
public class MenuSencillo {
public static void main(String[] args) {
int opcion = 0; String valor; int base=0, altura=0;

valor = JOptionPane.showInputDialog("1.Areatriangulo\n2.Area Rectangulo\n3.Volumen Cubo\n4.AreaCirculo\n5.Salir");
opcion = Integer.parseInt(valor);
switch(opcion) {
case 1:
valor= JOptionPane.showInputDialog("entre Base triangulo\n");
base = Integer.parseInt(valor);
valor= JOptionPane.showInputDialog("entre altura triangulo\n");
altura = Integer.parseInt(valor);
JOptionPane.showMessageDialog(null,"el area trianguloes=\n"+ base*altura*0.5);
break;
case 2:
valor= JOptionPane.showInputDialog("Base rectangulo \n");
base = Integer.parseInt(valor);
valor= JOptionPane.showInputDialog("altura rectangulo \n");
altura = Integer.parseInt(valor);
JOptionPane.showMessageDialog(null,"area rectangulo es=\n" + base*altura );
break;
case 3:
valor= JOptionPane.showInputDialog("Entre Lado Cubo ?\n");
base = Integer.parseInt(valor);
JOptionPane.showMessageDialog(null,"Volumen Cubo es= \n"+ base*base*base );
break;
case 4:
valor = JOptionPane.showInputDialog("EntreRadio Circulo?\n");
base = Integer.parseInt(valor);
JOptionPane.showMessageDialog(null,"AreaA=pi*r²= \n"+ base*base*3.1416 );
break;
case 5:
JOptionPane.showMessageDialog(null," Salir del sistema");
break;
default:
JOptionPane.showMessageDialog(null,"Opcioninvalida (1-4) \n");
break;
}
} }
// // flotante parseFloat(valor);
//String cadena = Float.toString(flotante);