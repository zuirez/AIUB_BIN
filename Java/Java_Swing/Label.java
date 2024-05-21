import javax.swing.*;
import java.awt.*;

public class Label extends JFrame
{
    public static void main(String[] args) 
    {
        //Creating a frame which is a visible window
        JFrame frame = new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(750, 300, 500, 500);
        frame.setTitle("Label");

        /* A container holdes other components and allow them to positon as the user wants
        c.setLayout(null); disables layout management, which gives complete control over components size and position within the container */

        Container c = frame.getContentPane();
        c.setLayout(null); 
        c.setBackground(Color.white);

        //Creating a font
        Font font = new Font("Arial",Font.BOLD, 14);

        //Creating a label
        JLabel name = new JLabel();
        name.setText("Enter username : ");
        name.setBounds(20,20,150,20);
        name.setFont(font);
        c.add(name);

        //2nd label(Multiple label)
        JLabel pass = new JLabel("Enter password : ");
        pass.setBounds(20,40,150,20);
        pass.setFont(font);
        c.add(pass);
    }
}
