import javax.swing.JOptionPane;
public class menu {
public static void main(String[] args) {
int opcion = 0;
String nombre, valor;
do {
valor = JOptionPane.showInputDialog("1.Saludar\n2.Despedida\n3.Salir");
opcion = Integer.parseInt(valor);
if (opcion == 1) {
nombre = JOptionPane.showInputDialog("Introduzca Nombre");
JOptionPane.showMessageDialog(null, "Hola " + nombre);
} else if (opcion == 2) {
JOptionPane.showMessageDialog(null, "Adios");
}
} while (opcion != 3);
}
}