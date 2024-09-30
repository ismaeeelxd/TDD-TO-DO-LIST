#include "TodoList.h"
#include <iostream>

int main() {
    TodoList todoList;
    todoList.addTask("Write code");
    std::cout << "First task: " << todoList.getTasks()[0] << std::endl;
    return 0;
}
