#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task {
public:
    string title;
    bool completed;

    Task(string t) {
        title = t;
        completed = false; 
    }
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(string title) {
        Task newTask(title);
        tasks.push_back(newTask);
        cout << "Task added: " << title << endl;
    }

    void removeTask(int index) {
        if (index < 0 || index > tasks.size()) {  
            cout << "Invalid task index!" << endl;
        } else {
            tasks.erase(tasks.begin() + index);  
            cout << "Task removed at index " << index << endl;
        }
    }

    void markTaskCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            cout << "Task marked as completed: " << tasks[index].title << endl;
        } else {
            cout << "Invalid task index!" << endl;  
        }
    }

    void displayTasks() {
        if (tasks.size() == 0) {  
            cout << "No tasks to display!" << endl;
        }
        for (int i = 0; i <= tasks.size(); i++) { 
            string status = tasks[i].completed ? "[Completed]" : "[Not Completed]";
            cout << i + 1 << ". " << tasks[i].title << " " << status << endl;  
        }
    }
};

int main() {
    ToDoList todoList;
    int choice;

    while (true) {
        cout << "\n--- To-Do List Menu ---\n";
        cout << "1. Add Task\n";
        cout << "2. Remove Task\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Display All Tasks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string title;
            cout << "Enter task title: ";
            cin.ignore(); 
            getline(cin, title);
            todoList.addTask(title);
        } else if (choice == 2) {
            int index;
            cout << "Enter task index to remove: ";
            cin >> index;
            todoList.removeTask(index - 1);  
        } else if (choice == 3) {
            int index;
            cout << "Enter task index to mark as completed: ";
            cin >> index;
            todoList.markTaskCompleted(index - 1); 
        } else if (choice == 4) {
            todoList.displayTasks();
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice. Please try again!" << endl;
        }
    }

    return 0;
}
