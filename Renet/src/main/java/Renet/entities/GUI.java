package Renet.entities;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Locale;

public class GUI extends JFrame{

private JPanel mainPanel;
private JTextArea messageBox;
private JTextField promptField;
private JLabel userLabel;
private String osTheme;

public GUI(){
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    setTitle("Renet");
    setSize(800, 600);
    setLocationRelativeTo(null);

    osTheme =  System.getProperty("os name").toLowerCase();
    if(osTheme.contains("darwin")){
        setDarwinTheme();
    } else if(osTheme.contains("linux")){
        setLinuxTheme();
    } else {
        JOptionPane.showMessageDialog(this, "Error! Unsupported OS!", "Error!", JOptionPane.ERROR_MESSAGE);
        System.exit(1);
    }
    mainPanel = new JPanel();
    mainPanel.setLayout(new BorderLayout());


}

    private void setLinuxTheme() {
    }

    private void setDarwinTheme() {
    }
}
