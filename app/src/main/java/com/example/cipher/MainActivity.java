package com.example.cipher;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private EditText inputText;
    private Button encryptButton, decryptButton;
    private TextView outputText;

    private final int X = 5;
    private final int Y = 8;
    private final int M = 26;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        inputText = findViewById(R.id.inputText);
        encryptButton = findViewById(R.id.encryptButton);
        decryptButton = findViewById(R.id.decryptButton);
        outputText = findViewById(R.id.outputText);

        encryptButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String text = inputText.getText().toString().toUpperCase().replaceAll(" ", "");

                if (text.isEmpty()) {
                    outputText.setText("Please enter text to encrypt.");
                    return;
                }

                String encryptedText = encryptNative(text, X, Y, M);
                outputText.setText("Encrypted: " + encryptedText);
            }
        });

        decryptButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String text = inputText.getText().toString().toUpperCase().replaceAll(" ", "");

                if (text.isEmpty()) {
                    outputText.setText("Please enter text to decrypt.");
                    return;
                }

                String decryptedText = decryptNative(text, X, Y, M);
                outputText.setText("Decrypted: " + decryptedText);
            }
        });
    }

    public native String encryptNative(String text, int x, int y, int m);
    public native String decryptNative(String text, int x, int y, int m);

    static {
        System.loadLibrary("cipher");
    }
}
