import javax.swing.*;
import java.awt.*;

public class FrameIntro extends JFrame
{
    JLabel userlabel, passlabel;
    JPanel panel;
    JTextField userField, passField;
    JPasswordField passEnc;
    JCheckBox c1,c2,c3,c4;
    JButton login, exit;
    JRadioButton r1,r2,r3,r4;
    ButtonGroup b1,b2;
    Font myfont;
    JComboBox combo;

    public FrameIntro()
    {
        super("My first GUI");
        this.setSize(800,450);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        panel = new JPanel();
        panel.setLayout(null);
        panel.setBackground(Color.cyan);
        this.add(panel);


        JLabel userlabel = new JLabel("User Name : ");
        userlabel.setBounds(120,115,160,30);
        userlabel.setBackground(Color.LIGHT_GRAY);
        userlabel.setOpaque(true);
        panel.add(userlabel);

        //JLabel userpass = new JLabel("User Password : ");
        //userpass.setBounds(120,115,160,90);
        //panel.add(userpass);

        userField = new JTextField();
        userField.setBounds(195,115,100,30);
        panel.add(userField);

        //passField = new JTextField();
        //passField.setBounds(220,150,100,30);
        //panel.add(passField);

        passEnc = new JPasswordField();
        passEnc.setBounds(195,150,100,30);
        passEnc.setEchoChar('*');
        panel.add(passEnc);

        passlabel = new JLabel("Password : ");
        passlabel.setBounds(120,150,100,30);
        passlabel.setBackground(Color.LIGHT_GRAY);
        passlabel.setOpaque(true);
        panel.add(passlabel);

        c1 = new JCheckBox("FST");
        c1.setBounds(570,120,100,20);
        panel.add(c1);

        c2 = new JCheckBox("FE");
        c2.setBounds(570,150,100,20);
        panel.add(c2);

        c3 = new JCheckBox("FBA");
        c3.setBounds(570,180,100,20);
        panel.add(c3);
        
        c4 = new JCheckBox("FASS");
        c4.setBounds(570,210,100,20);
        panel.add(c4);

        login = new JButton("LogIn");
        login.setBounds(195,200,100,30);
        panel.add(login);

        exit = new JButton("Exit");
        exit.setBounds(310,200,100,30);
        panel.add(exit);

        r1 = new JRadioButton("OOP1");
        r1.setBounds(450,120,100,20);
        panel.add(r1);

        r2 = new JRadioButton("DM");
        r2.setBounds(450,150,100,20);
        panel.add(r2);

        r3 = new JRadioButton("PHYSICS");
        r3.setBounds(450,180,100,20);
        panel.add(r3);

        r4 = new JRadioButton("MATH");
        r4.setBounds(450,210,100,20);
        panel.add(r4);

        // b1 = new ButtonGroup();
        // b1.add(r1);
        // b1.add(r2);
        // b1.add(r3);
        // b1.add(r4);

        b2 = new ButtonGroup();
        b2.add(c1);
        b2.add(c2);
        b2.add(c3);
        b2.add(c4);

        String items[] = {"Maruf","Anik","Tasuf","Shawon"};
        combo = new JComboBox(items);
        combo.setBounds(100,50,100,10);
        panel.add(combo);
    }
}
