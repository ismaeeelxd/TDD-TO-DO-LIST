// TodoList.h
#pragma once
#include <string>
#include <vector>

class TodoList {
public:
    void addTask(const std::string& task);
    bool completeTask(int index);
    bool deleteTask(int index);
    std::vector<std::string> getTasks() const;
    
private:
    std::vector<std::string> tasks;
    std::vector<bool> taskCompleted;
};
