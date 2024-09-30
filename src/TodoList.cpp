#include "TodoList.h"

void TodoList::addTask(const std::string& task) {
    if (!task.empty()) {
        tasks.push_back(task);
        taskCompleted.push_back(false); 
    }
}

bool TodoList::completeTask(int index) {
    if (index >= 0 && index < taskCompleted.size()) {
        taskCompleted[index] = true;
        return true;
    }
    return false;
}

bool TodoList::deleteTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
        taskCompleted.erase(taskCompleted.begin() + index);
        return true;
    }
    return false;
}

std::vector<std::string> TodoList::getTasks() const {
    return tasks;
}
