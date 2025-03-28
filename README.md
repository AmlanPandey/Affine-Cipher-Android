# 🔐 Affine Cipher Android App  

<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8c/Cryptography.svg/512px-Cryptography.svg.png" width="120" height="120">
</p>

### **📌 About the Project**  
This is an Android application implementing **Affine Cipher encryption and decryption** using **Java & C++ (JNI)**.  
It allows users to:  

✔ **Encrypt** plaintext using the Affine Cipher algorithm  
✔ **Decrypt** ciphertext back into plaintext  
✔ **Use a simple UI** for easy text input and results  

This project integrates **Java with C++ (Native Code using JNI)** for efficient cryptographic operations.  

---

## 🔢 **What is the Affine Cipher?**  
The **Affine Cipher** is a monoalphabetic substitution cipher based on a mathematical function.  

### **🔐 Encryption Formula:**  
```math
C = (aP + b) \mod 26
