# Rock Paper Scissors Game 🎮

A simple command-line Rock Paper Scissors game written in C, built with CLion.

## Features ✨
- Play against the computer
- Score tracking (wins, losses, draws)
- Input validation
- Play again option
- Clean, modular code structure

## How to Play 🎯
1. Choose your move:
   - `1` for Rock
   - `2` for Paper
   - `3` for Scissors
   - `0` to quit
2. The computer randomly chooses its move
3. Winner is determined and displayed
4. Score is updated each round

## Setup with CLion 🛠️

### Prerequisites
- CLion (2023.1 or later)
- C compiler (GCC, Clang, or MSVC)

### Opening in CLion
1. Open CLion
2. Click "Open" and select the project folder
3. CLion will automatically detect the CMakeLists.txt file
4. Wait for CMake to finish loading

### Building and Running
- Click the green "Run" button (▶) in the toolbar
- Or use the shortcut: `Shift+F10`

### Debugging
- Set breakpoints by clicking in the gutter
- Click the green "Debug" button (🐞)
- Or use the shortcut: `Shift+F9`

## Project Structure 📁
```
.
├── CMakeLists.txt   # Build configuration
├── main.c           # Program entry point / game loop
├── game.c           # Game logic (winner logic, I/O, scoring)
├── game.h           # Function prototypes and constants
└── README.md
```

## Building from the command line 💻
If you don't want to use CLion, you can build with CMake directly:
```bash
mkdir build && cd build
cmake ..
cmake --build .
./RockPaperScissors
```

## License 📄
This project is licensed under the [MIT License](LICENSE).
