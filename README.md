# 🎨 Base Converter

## 🚀 Introduction

A number base is the number of digits or combination of digits that a system uses to represent numbers.

---

## Click to watch the demo usage video of the program

[![Experience the Demo](/Screenshot%20from%202024-08-12%2020-25-54.png)](https://drive.google.com/file/d/11TGBaWZGOnj6SsbfX1ROxfHs77vgbPKr/view?usp=sharing)


## 🔧 Overview

This **Base Converter** program allows you to convert numbers between different bases:

1. **Binary (Base-2)** to **Decimal (Base-10)**
2. **Decimal (Base-10)** to **Hexadecimal (Base-16)**
3. **Hexadecimal (Base-16)** to **Binary (Base-2)**
4. **Binary (Base-2)** to **Hexadecimal (Base-16)**
5. **Decimal (Base-10)** to **Binary (Base-2)**
6. **Hexadecimal (Base-16)** to **Decimal (Base-10)**

---

## 🌟 Number Systems

- **Binary Numbers (Base-2):** A number system using only two digits, `0` and `1`. Represents OFF and ON states in electronic systems.
- **Decimal Numbers (Base-10):** The standard number system consisting of digits `0` through `9`.
- **Hexadecimal Numbers (Base-16):** A base-16 system using symbols `0-9` and letters `A-F` to represent values from `0` to `15`. Useful for compactly representing large numbers.

---

## 🛠️ How to Compile and run

To compile the program, use the following command:

```bash
    gcc *.c -lm -o base_converter

```

## move the program to /usr/local/bin/ to make it globally accessible.

```bash
    sudo mv base_converter /usr/local/bin/
```

## Add the path to your bashrc or zshrc and reload the shell configuration file.

```bash
    nano ~/.bashrc  # or nano ~/.zshrc if using zsh

    export PATH="$HOME/my_programs:$PATH"

    source ~/.bashrc  # or source ~/.zshrc if using zsh
```
## 🚀 How to Run

```bash
    base_converter
```

## 📝 Usage Instructions

1. **Choose the format you are converting from:**
   - Enter `1` for Binary
   - Enter `2` for Decimal
   - Enter `3` for Hexadecimal
   - Enter `0` for Help

2. **Select the format you want to convert to:**
   - Enter `1` for Binary
   - Enter `2` for Decimal
   - Enter `3` for Hexadecimal

3. **Enter the number to be converted:**
   - For Binary to Decimal: Enter a binary number.
   - For Decimal to Binary: Enter a decimal number.
   - For Binary to Hexadecimal: Enter a binary number.
   - For Decimal to Hexadecimal: Enter a decimal number.
   - For Hexadecimal to Binary: Enter a hexadecimal number.
   - For Hexadecimal to Decimal: Enter a hexadecimal number.

4. **View the conversion result.**

5. **Decide if you want to perform another conversion or exit the program:**
   - Type `yes` to perform another conversion.
   - Type `no` to exit the program.

---

## 🎨 Additional Features

- **Clear Screen:** Automatically clears the terminal for a cleaner interface.
- **Loading Indicator:** Provides visual feedback during conversions.
- **Help Menu:** Easily accessible help instructions to guide users.


## 🤝 Contributing
Feel free to contribute to this project. Open an issue or submit a pull request on GitHub.