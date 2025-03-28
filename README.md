# 🔐 Affine Cipher Android App  

## 📌 Overview  
This **Android application** implements the **Affine Cipher**, a classical encryption technique used to secure text messages. The app allows users to **encrypt** and **decrypt** messages using a mathematical function, enhancing security while maintaining simplicity.  

---

## 🔢 What is the Affine Cipher?  
The **Affine Cipher** is a type of **monoalphabetic substitution cipher** that transforms each letter in the plaintext using a mathematical function:  

### 🔐 **Encryption Formula:**  
\[
C = (aP + b) \mod 26
\]
- **P** = Plaintext character index (0-25)  
- **C** = Ciphertext character index (0-25)  
- **a** = Multiplicative key (must be coprime with 26)  
- **b** = Additive key  

### 🔓 **Decryption Formula:**  
\[
P = a^{-1} (C - b) \mod 26
\]
- **a⁻¹** = Modular inverse of **a** (exists if **gcd(a,26) = 1**)  

This cipher relies on the **secrecy of (a, b)** for encryption and decryption.

---

## 📱 Features  
✅ **Encrypt & Decrypt** text using the Affine Cipher  
✅ **Simple and user-friendly Android UI**  
✅ **Implemented using Java & C++ (JNI for performance boost)**  
✅ **Uses modular arithmetic for security**  

---

## ⚙️ How It Works  
1. **User inputs plaintext**  
2. **App applies the Affine encryption formula**  
3. **Encrypted text is displayed**  
4. **User can decrypt it back using the Affine decryption formula**  

Example:  
| **Plaintext** | H | I | M | Y | N | A | M | E |  
|--------------|---|---|---|---|---|---|---|---|  
| **Numeric**  | 7 | 8 | 12 | 24 | 13 | 0 | 12 | 4 |  
| **Ciphertext** | J | A | Q | M | H | U | Q | K |  

---

## 🔧 Technologies Used  
- **Java & XML** → Android UI Development  
- **C++ (JNI)** → Efficient encryption & decryption logic  
- **Android NDK** → Native code integration  

---

## 🚀 Installation & Usage  
1. Clone the repository:  
   ```bash
   git clone https://github.com/AmlanPandey/Affine-Cipher-Android.git
