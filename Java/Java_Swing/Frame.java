import javax.swing.*;
import java.awt.*;


public class Frame extends JFrame
{
    public static void main(String[] args) 
    {
        Frame frame = new Frame();
        frame.setVisible(true); //the default visiblity is false. true makes the frame visible
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //it closes the program every time we press the cross
        frame.setBounds(750,300,500,500); 
        frame.setTitle("First Frame");

        //Adding icon
        ImageIcon img = new ImageIcon(Frame.class.getResource("img.png"));
        frame.setIconImage(img.getImage());

        Container c = frame.getContentPane();
        c.setBackground(Color.ORANGE);
        c.setLayout(null);
    }
}