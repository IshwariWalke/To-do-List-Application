# To-Do List Application

Overview:
This project is a simple To-Do List Application implemented in C++. It allows users to manage tasks efficiently by providing the following features:

1. Add Tasks with a title.
2. Remove Tasks by index.
3. Mark Tasks as Completed.
4. View All Tasks along with their completion status.
5. The application runs using a menu-driven interface where users can interact with the list through various options.

Key Features:
1. Add Task: Users can input a task title to add it to the list.
2. Remove Task: Users can delete a task by specifying its index.
3. Mark Task as Completed: Users can complete tasks by selecting them through an index.
4. Display Tasks: The app displays all tasks, showing whether they are completed or not.
   
Sample Menu:
--- To-Do List Menu ---
1. Add Task
2. Remove Task
3. Mark Task as Completed
4. Display All Tasks
5. Exit
   
Getting Started:
To run the project, follow these steps:

Prerequisites
You need a C++ compiler such as:

g++ (GCC)
Clang
Installation
Clone the Repository:

bash
Copy code
git clone https://github.com/your-username/todo-list-app.git
Navigate to the Project Directory:

bash
Copy code
cd todo-list-app
Compile the Code: Use the following command to compile the application:

bash
Copy code
g++ todo_list.cpp -o todo_list
Run the Program: Run the application using:

bash
Copy code
./todo_list
Running the Application
Once the program starts, you will be presented with the menu. From here, you can:

Add new tasks.
Remove tasks by index.
Mark a task as completed.
Display all tasks.
Exit the application.

Example Walkthrough:
Start by adding a few tasks.
View the list of tasks to see what has been added.
Mark one task as completed.
Remove a task from the list.
Exit the program.

Sample Interaction:
--- To-Do List Menu ---
1. Add Task
2. Remove Task
3. Mark Task as Completed
4. Display All Tasks
5. Exit

Enter your choice: 1
Enter task title: Complete project report
Task added: Complete project report

Enter your choice: 1
Enter task title: Study for exams
Task added: Study for exams

Enter your choice: 4
1. Complete project report [Not Completed]
2. Study for exams [Not Completed]

Enter your choice: 3
Enter task index to mark as completed: 1
Task marked as completed: Complete project report
