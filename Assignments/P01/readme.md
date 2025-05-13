# 📁 P01 – Public Key Cryptography: ElGamal Algorithm

## 🧠 Overview

This project explains the core principles of **Public Key Cryptography (PKC)** with a special focus on the **ElGamal encryption algorithm**. Public key cryptography, also called asymmetric cryptography, allows for secure communication by using mathematically linked **public** and **private keys**.

Data encrypted with a public key can only be decrypted by its paired private key. Similarly, data signed with a private key can be verified by the corresponding public key, enabling both **confidentiality** and **authenticity**.

## 🔐 Algorithms Covered

| Algorithm | Security Basis             | Key Size (Typical) | Time Complexity    | Use Cases                          |
|-----------|-----------------------------|--------------------|--------------------|-------------------------------------|
| RSA       | Integer Factorization       | 2048+ bits         | O(log³ n)          | SSL/TLS, digital signatures         |
| ECC       | Elliptic Curve Log Problem  | 256+ bits          | O(n)               | Mobile crypto, blockchain (e.g. BTC)|
| ElGamal   | Discrete Logarithm Problem  | 2048+ bits         | O(log³ p)          | GPG, secure messaging               |

## 🛠️ How ElGamal Works

1. **Key Generation**:
   - Choose a large prime \( p \) and generator \( g \)
   - Select private key \( x \in [1, p-2] \)
   - Compute public key: \( h = g^x \mod p \)

2. **Encryption**:
   - For message \( m \) and random \( k \):
     - \( c_1 = g^k \mod p \)
     - \( c_2 = m \cdot h^k \mod p \)

3. **Decryption**:
   - Compute \( s = c_1^x \mod p \)
   - Recover \( m = c_2 \cdot s^{-1} \mod p \)

## 📍 Where It's Used

- Secure communication (HTTPS, email)
- Digital signatures (blockchain, document integrity)
- Key exchange (TLS, VPNs)

## 📄 Sources

- TechTarget – [Public Key Encryption](https://www.techtarget.com/searchsecurity/definition/public-key)
- GeeksForGeeks – [ElGamal Algorithm](https://www.geeksforgeeks.org/elgamal-encryption-algorithm/)
- Khan Academy – [Encryption Techniques](https://www.khanacademy.org/computing/computers-and-internet/xcae6f4a7ff015e7d:online-data-security/xcae6f4a7ff015e7d:data-encryption-techniques/a/public-key-encryption)
- ChatGPT (for code clarification and summary formatting)

---

## ❓ Exam Questions

### 📝 Multiple Choice (3)

1. **Which of the following is true about public key cryptography?**  
   A) Both keys must be kept private  
   B) It uses one key for both encryption and decryption  
   C) Public and private keys are mathematically linked ✅  
   D) It is less secure than symmetric cryptography

2. **What mathematical problem is ElGamal based on?**  
   A) Integer Factorization  
   B) Elliptic Curve Logarithms  
   C) Prime Counting  
   D) Discrete Logarithms ✅

3. **Why is ECC often preferred for mobile applications?**  
   A) It's less secure  
   B) It uses longer keys  
   C) It’s faster and requires smaller keys ✅  
   D) It doesn't use public keys

### ✍️ Fill in the Blank (2)

1. In ElGamal encryption, the shared secret \( s \) is computed as \( c_1^x \mod p \), where \( x \) is the __________.  
   **Answer:** private key

2. Public key cryptography allows for secure communication without prior __________ of secret information.  
   **Answer:** exchange

---

## 🎯 Goal

This project demonstrates an understanding of **public key cryptography** by explaining ElGamal — a secure, elegant, and widely used encryption algorithm based on modular arithmetic and the discrete logarithm problem.

The final goal is to teach and clarify how public key encryption works, why it's useful, and where it applies in real-world systems.

---

