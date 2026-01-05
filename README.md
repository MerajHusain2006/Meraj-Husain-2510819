# Time Conversion Program in C

## 📌 Description
This C program converts a given number of seconds into **hours, minutes, and remaining seconds**.  
It demonstrates the use of both **`for` loops** and **`while` loops** to perform the same calculation and compares their **iteration counts**.

## 🧠 What the Program Does
- Takes total seconds as input from the user
- Converts seconds into:
  - Hours
  - Minutes
  - Remaining seconds
- Performs the conversion twice:
  - Once using `for` loops
  - Once using `while` loops
- Displays the number of iterations used in each method

## 🛠️ Concepts Used
- Variables and arithmetic operations
- `for` loops
- `while` loops
- Input and output using `scanf()` and `printf()`

## ▶️ How to Run the Program
1. Save the code in a file named `time_conversion.c`
2. Compile the program:
   ```bash
   gcc time_conversion.c -o time_conversion
Run the executable:

bash
Copy code
./time_conversion
Enter the number of seconds when prompted

🧪 Sample Input
yaml
Copy code
Enter Number of Seconds: 3661
📤 Sample Output
vbnet
Copy code
Using FOR Loop
Hours: 1
Minutes: 1
Seconds: 1
Iteration count (For Loop): 2

Using WHILE Loop
Hours: 1
Minutes: 1
Seconds: 1
Iteration count (WHILE loop): 2
📚 Notes
The program uses repeated subtraction instead of division to highlight loop usage.

Iteration count helps compare efficiency between for and while loops.

👨‍💻 Author
Written as a learning exercise for understanding loops in C.
<img width="1920" height="1080" alt="Screenshot 2026-01-05 100228" src="https://github.com/user-attachments/assets/62bd21ee-e419-4145-b5be-7bfed29572af" />
