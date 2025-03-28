// Created by amlan on 28-03-2025.


#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string removeSpaces(const string &text) {
    string result;
    for (char c : text) {
        if (c != ' ') {
            result += c;
        }
    }
    return result;
}


int modInverse(int a, int m) {
    a = a % m;
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1;
}

string encrypt(string plainText, int x, int y, int m) {
    plainText = removeSpaces(plainText);
    string cipherText = "";

    for (char c : plainText) {
        if (isalpha(c)) {
            bool isLower = islower(c);
            char base = isLower ? 'a' : 'A';
            int num = c - base;
            int encryptedNum = (x * num + y) % m;
            cipherText += (char)(encryptedNum + base);
        } else {
            cipherText += c;
        }
    }
    return cipherText;
}


string decrypt(string cipherText, int x, int y, int m) {
    string plainText = "";
    int inv = modInverse(x, m);
    if (inv == -1) {
        return "Decryption not possible, modular inverse does not exist.";
    }

    for (char c : cipherText) {
        if (isalpha(c)) {
            bool isLower = islower(c);
            char base = isLower ? 'a' : 'A';
            int num = c - base;


            int decryptedNum = (inv * ((num - y + m) % m)) % m;

            plainText += (char)(decryptedNum + base);
        } else {
            plainText += c;
        }
    }
    return plainText;
}

int main() {
    string message;
    int x = 5, y = 8, m = 26;

    cout << "Enter plaintext: ";
    getline(cin, message);

    string encrypted = encrypt(message, x, y, m);
    cout << "Encrypted Text: " << encrypted << endl;

    string decrypted = decrypt(encrypted, x, y, m);
    cout << "Decrypted Text: " << decrypted << endl;

    return 0;
}

//CIPHER_AFFINECIPHER_H
