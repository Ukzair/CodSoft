
#include <iostream>
#include <vector>
using namespace std;
struct Task {
    string description;
    bool completed;
};

void AddTask(vector<Task> &taskList, const string &description) {
    taskList.push_back({description, false});
    cout << "Task added successfully!" << endl;
}

void ViewTasks(const vector<Task> &taskList) {
    if (taskList.empty()) {
        cout << "No tasks in the list." << endl;
        return;
    }

    cout << "Task List:" << endl;
    for (size_t i = 0; i < taskList.size(); ++i) {
        cout << i + 1 << ". ";
        if (taskList[i].completed) {
            cout << "[X] ";
        } else {
            cout << "[ ] ";
        }
        cout << taskList[i].description << endl;
    }
}

void markTaskAsCompleted(vector<Task> &taskList, int taskIndex) {
    if (taskIndex >= 0 && taskIndex < static_cast<int>(taskList.size())) {
        taskList[taskIndex].completed = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

void removeTask(vector<Task> &taskList, int taskIndex) {
    if (taskIndex >= 0 && taskIndex < static_cast<int>(taskList.size())) {
        taskList.erase(taskList.begin() + taskIndex);
        cout << "Task removed successfully!" << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

int main() {
    vector<Task> taskList;

    while (true) {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        
        int choice;
        cin >> choice;
        cin.ignore(); 
        
        switch (choice) {
            case 1:
                {
                    cout << "Enter task description: ";
                    string description;
                    getline(cin, description);
                    AddTask(taskList, description);
                }
                break;
            case 2:
                ViewTasks(taskList);
                break;
            case 3:
                {
                    ViewTasks(taskList);
                    cout << "Enter task index to mark as completed: ";
                    int taskIndex;
                    cin >> taskIndex;
                    markTaskAsCompleted(taskList, taskIndex - 1);
                }
                break;
            case 4:
                {
                    ViewTasks(taskList);
                    cout << "Enter task index to remove: ";
                    int taskIndex;
                    cin >> taskIndex;
                    removeTask(taskList, taskIndex - 1);
                }
                break;
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }
}
