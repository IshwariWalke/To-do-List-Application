To-Do List Application

Overview:

This project is a simple To-Do List Application implemented in C++. The application allows users to manage their tasks efficiently by providing features such as adding tasks, removing tasks, marking tasks as completed, and viewing all tasks.

Key Features:

Add a Task: Users can add new tasks with a title.
Remove a Task: Users can remove tasks by specifying the task index.
Mark a Task as Completed: Users can mark tasks as completed based on the task index.
Display All Tasks: Users can view a list of all tasks along with their status (completed or not).

The program runs via a menu-driven interface where the user can select operations to perform on their to-do list.
How the Application Works

Adding a Task:
When a user adds a task, they provide a task title. The new task is added to the list with a default status of "Not Completed."
Removing a Task:
The user can remove any task from the list by providing the index number of the task. Once removed, the task is no longer available in the list.
Marking a Task as Completed:
Users can mark a task as completed by providing the corresponding task index. The task's status is updated to "Completed."

Displaying All Tasks:
This option shows all tasks in the list along with their completion status. Users can view tasks in order of creation.

Sample Output:

--- To-Do List Menu ---
1. Add Task
2. Remove Task
3. Mark Task as Completed
4. Display All Tasks
5. Exit
Enter your choice: 1
Enter task title: Finish coding assignment
Task added: Finish coding assignment

Enter your choice: 4
1. Finish coding assignment [Not Completed]

Enter your choice: 3
Enter task index to mark as completed: 1
Task marked as completed: Finish coding assignment

Getting Started:

To run the program, follow these simple steps.
Prerequisites
You need to have a C++ compiler installed on your system. Some common compilers include:
g++ (GCC)
Clang
Installation
Clone the Repository:
First, clone the repository to your local machine using Git or download the code as a ZIP file.
bash
Copy code
git clone https://github.com/your-username/todo-list-app.git


Navigate to the Project Directory:
bash
Copy code
cd todo-list-app


Compile the Code:
Use a C++ compiler to compile the code. Here’s an example using g++:
bash
Copy code
g++ todo_list.cpp -o todo_list


Run the Program:
After compiling, you can run the program as follows:
bash
Copy code
./todo_list


Running the Program:

Once the program starts, you will be presented with a menu of options:
1. Add Task: You can add tasks by selecting this option and providing a task title.
Remove Task: Remove tasks by providing their index number from the list.
Mark Task as Completed: Mark a specific task as completed using its index number.
2. Display All Tasks: View all the tasks in the list along with their status.
3. Exit: Exit the program.
 
Example Walkthrough:

1.Start by adding a few tasks.
2.Display the list of tasks to check what you have added.
3.Mark one of the tasks as completed and verify by displaying the tasks again.
4.Remove a task from the list and display the updated task list.
5.Exit the program once you are done.

Example Interaction:

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

Enter your choice: 4
1. Complete project report [Completed]
2. Study for exams [Not Completed]

