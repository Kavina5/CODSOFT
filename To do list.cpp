#include <iostream>
#include <vector>
#include <string>
using namespace std;
void displayMenu() {
    cout << "To-Do List Manager"<<endl;
    cout << "1. Add Task"<<endl;
    cout << "2. View Tasks"<<endl;
    cout << "3. Remove Task"<<endl;
    cout << "4. Exit"<<endl;

}

int main() {
    vector<string> tasks;
    int choice;
    string task;
    int taskNumber;
    displayMenu();

    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added!"<<endl;
                break;
            case 2:
                cout << "Your Tasks:"<<endl;
                if (tasks.empty()) {
                    cout << "No tasks available."<<endl;
                } else {
                    for (size_t i = 0; i < tasks.size(); ++i) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;
            case 3:
                cout << "Enter task number to remove: ";
                cin >> taskNumber;
                if (taskNumber > 0 && taskNumber <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskNumber - 1);
                    cout << "Task removed successfully"<<endl;
                } else {
                    cout << "Invalid task number."<<endl;
                }
                break;
            case 4:
                cout << "Thank You"<<endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again."<<endl;
                break;
        }
    }

    return 0;
}
