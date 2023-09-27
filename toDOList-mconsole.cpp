#include <iostream>
#include <vector>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "To-Do List" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter task description: ";
                string description;
                cin.ignore();
                getline(cin, description);
                tasks.push_back(Task(description));
                cout << "Task added!" << endl;
                break;
            }
            case 2: {
                cout << "Tasks:" << endl;
                for (size_t i = 0; i < tasks.size(); ++i) {
                    cout << i + 1 << ". ";
                    cout << (tasks[i].completed ? "[X] " : "[ ] ");
                    cout << tasks[i].description << endl;
                }
                break;
            }
            case 3: {
                cout << "Enter task number to delete: ";
                int taskNumber;
                cin >> taskNumber;

                if (taskNumber >= 1 && taskNumber <= static_cast<int>(tasks.size())) {
                    tasks.erase(tasks.begin() + taskNumber - 1);
                    cout << "Task deleted!" << endl;
                } else {
                    cout << "Invalid task number. No task deleted." << endl;
                }
                break;
            }
            case 4:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter 1, 2, 3, or 4." << endl;
        }
    }

    return 0;
}
