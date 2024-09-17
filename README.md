# Knight's Tour in C

## Description

This project implements the **Knight's Tour** problem in C, a classical problem in the domain of mathematics and computer science. The Knight's Tour is a sequence of moves of a knight on a chessboard such that the knight visits every square exactly once. In this implementation, the algorithm recursively attempts to find a tour on a 5x5 chessboard.

The knight follows standard chess movement rules: moving in an "L" shape (either two squares in one direction and then one square perpendicular, or one square in one direction and then two squares perpendicular).

---

## Features

- **Recursive Backtracking Algorithm**: 
  - The algorithm recursively explores all possible knight moves from a given starting position, attempting to complete a tour.
  
- **Safe Move Check**: 
  - Before each move, the algorithm ensures that the target square is within the board's boundaries and has not already been visited.

- **5x5 Chessboard**: 
  - The program simulates the Knight's Tour on a 5x5 chessboard.
  
- **Output**: 
  - The program outputs a sequence of moves that complete the Knight's Tour if one is found.

---

## Controls and Execution

### Requirements

- **gcc compiler** to compile the C code.

### Build Instructions

1. **Clone the repository** and navigate into the project folder:
    ```bash
    git clone <repository-url>
    cd <repository-folder>
    ```

2. **Compile the program** using the `make` command:
    ```bash
    make
    ```

3. **Run the program**:
    ```bash
    ./KnightsTour
    ```

### Sample Output

Upon execution, the program will print the sequence of moves that make up the Knight's Tour:

1, 4, 9, 14, 19, 22, 17, 12, 7, 2, ...

Each number represents a position on the 5x5 chessboard, and the program attempts to find a valid sequence where each square is visited exactly once.

---

## Code Breakdown

### Main Components

- **safeToGo(int x, int y)**:
  - Checks if the move is valid by ensuring the knight stays within the chessboard boundaries and hasn't visited the square yet.

- **tour(int x, int y, int tourOrder, int board[COL][ROW])**:
  - This recursive function performs the knight’s movement. It tries all possible moves from the current position and checks if a full tour can be completed from that point.

- **startTour(int board[COL][ROW])**:
  - Initializes the board and begins the knight's tour from each possible starting square.

---

## Troubleshooting

- Ensure you have `gcc` installed on your system.
- Use `make clean` to remove compiled binaries if needed.
- If the program fails to run or compile, ensure that you have set up the C development environment correctly on your system.
