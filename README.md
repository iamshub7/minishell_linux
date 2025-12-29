Minishell (msh)
📌 Description

Minishell (msh) is a minimalistic Linux shell implemented in C, designed to explore core Linux system programming concepts.
The shell provides a custom command prompt, accepts user commands, and executes them using Linux system calls, offering hands-on experience with process creation, command parsing, signal handling, and basic job control.

This project was developed as part of the Linux Internals module to gain a deeper understanding of how Unix shells work internally.

⚙️ Features
🔹 Custom Command Prompt

Default prompt: msh>

Displays prompt before every command execution

🔹 Command Execution

Supports external commands using fork() and execvp()

Supports internal commands:

cd

pwd

exit

🔹 Process Management

Foreground process execution

Background execution using &

Parent–child synchronization using wait()

🔹 Signal Handling

Ctrl+C → Sends SIGINT

Ctrl+Z → Sends SIGTSTP

Prevents shell termination on signal interrupts

🔹 Modular Design

Separate source files for:

Command parsing

Internal commands

External commands

Signal handling

🛠 Technologies Used

C Programming

Linux OS

Linux System Calls

fork()

execvp()

wait()

signal()

📦 Installation

Clone the repository:

git clone https://github.com/iamshub7/mini-linux-shell.git


Navigate to the project directory:

cd mini-linux-shell


Compile the project:

make

▶️ Usage

Run the shell:

./msh


Start entering commands at the msh> prompt.

🧪 Example Commands
msh> ls -l
msh> pwd
msh> cd /home
msh> sleep 10 &

📂 Project Structure
.
├── main.c
├── scan_input.c
├── command.c
├── internal_cmds.c
├── external_cmds.c
├── signals.c
├── header.h
├── Makefile
└── README.md

📚 Learning Outcomes

Understanding how Linux shells work internally

Process creation and execution using system calls

Signal handling and process synchronization

Command parsing and modular program design

Hands-on experience with Linux internals

🚧 Limitations

No support for command piping or I/O redirection

Limited internal commands

No command history or tab completion

👨‍💻 Author

Shubham Shinde

📜 License

This project is open-source and available for educational purposes.

🙏 Acknowledgements

Developed as part of the Linux Internals module at Emertxe Information Technologies.