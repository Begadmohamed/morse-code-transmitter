# Morse Code Transmitter 🚨

This project implements a **Morse Code Transmitter** using an **Arduino** microcontroller. It converts text input into Morse code signals, visually represented through LED flashes. The project showcases the simplicity and effectiveness of embedded systems in translating text to Morse code.

---

## Features 🌟

1. **Text to Morse Code Conversion**
   - Converts user-provided text into Morse code sequences.

2. **LED Signal Output**
   - Translates each Morse code sequence into LED flashes for visual representation.
   - Differentiates between dots (`.`), dashes (`-`), and spaces with distinct flash durations.

3. **Interactive and Customizable**
   - Supports user-defined text inputs.
   - Easily extendable to other output mechanisms like buzzers or displays.

---

## How It Works ⚙️

1. **Input:**
   - A text string is entered in the Arduino code or via serial communication.

2. **Processing:**
   - Each character is translated into its Morse code equivalent.
   - Timings for dots (`.`), dashes (`-`), and spaces are calculated.

3. **Output:**
   - LED flashes are generated:
     - Short flash for a dot (`.`).
     - Long flash for a dash (`-`).
     - Delays for spaces and character separation.

---

## Components Used 🔧

- **Arduino Uno** or compatible microcontroller.
- **LED** (for Morse code signaling).
- **Resistor** (to limit current to the LED).
- **Breadboard and Jumper Wires** (for prototyping).

---

## Demonstration 🔍

### Online Simulation:
View the project in action on **TinkerCAD**:  
[Click here to access the simulation](https://www.tinkercad.com/things/3YkgMiRL9bQ-morse-code-by-bigm?sharecode=FlTUby99scJDtZNyPDDYAOxUgNzFAUCHx6uYAUkFvvw)

---

## How to Use 🚀

1. **Set Up the Circuit:**
   - Connect the LED and resistor to the Arduino according to the schematic provided in the simulation.

2. **Upload the Code:**
   - Open the provided Arduino sketch in the Arduino IDE.
   - Enter the desired text for transmission in the `textToMorse` variable.
   - Upload the code to the Arduino board.

3. **Observe the LED Flashes:**
   - The LED will flash Morse code signals corresponding to the input text.

---

## Learning Outcomes 📚

- Gained practical experience in **embedded systems development**.
- Learned the fundamentals of **Morse code translation**.
- Improved proficiency in **Arduino programming** and **hardware interfacing**.

---


## Author ✍️

**Begad Mohamed**  
- 📫 Email: es-begad.mohamed2027@alexu.edu.eg  
- 🌐 [LinkedIn](https://linkedin.com/in/begad-mohamed)
