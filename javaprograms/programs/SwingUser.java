package programs;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class SwingUser {
    public static void main(String[] args) {
        JFrame f = new JFrame("LOGIN WINDOW");
        f.setSize(300, 250);
        f.setLayout(null);
        f.setVisible(true);

        JLabel l1 = new JLabel("Username");
        JLabel l2 = new JLabel("Password");
        JTextField t1 = new JTextField();
        JPasswordField t2 = new JPasswordField();
        JButton b = new JButton("Login");

        l1.setBounds(50, 50, 80, 20);
        l2.setBounds(50, 100, 80, 20);
        t1.setBounds(160, 50, 80, 20);
        t2.setBounds(160, 100, 80, 20);
        b.setBounds(80, 160, 100, 30);

        f.add(l1);
        f.add(l2);
        f.add(t1);
        f.add(t2);
        f.add(b);

        String str1 = "Krishna";
        String str2 = "Prableen";
        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (t1.getText().equals(str1) && t2.getPassword().equals(str2)) {
                    JOptionPane.showMessageDialog(f, "Successfully Logged In");
                } else
                    JOptionPane.showMessageDialog(f, "Wrong Credentials");

            }

        });

        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}