#include "gtest/gtest.h"
#include "TodoList.h"

TEST(TodoListTest, AddValidTask) {
    TodoList todoList;
    todoList.addTask("Buy groceries");

    std::vector<std::string> tasks = todoList.getTasks();
    EXPECT_EQ(tasks.size(), 1); 
    EXPECT_EQ(tasks[0], "Buy groceries");
}
TEST(TodoListTest, AddInvalidTask_EmptyTask) {
    TodoList todoList;
    todoList.addTask("");

    std::vector<std::string> tasks = todoList.getTasks();
    EXPECT_EQ(tasks.size(), 0);
}
TEST(TodoListTest, CompleteTask) {
    TodoList todoList;
    todoList.addTask("Do homework");

    bool success = todoList.completeTask(0);
    EXPECT_TRUE(success);
}
TEST(TodoListTest, DeleteTask) {
    TodoList todoList;
    todoList.addTask("Wash the car");

    bool success = todoList.deleteTask(0);  
    EXPECT_TRUE(success);

    std::vector<std::string> tasks = todoList.getTasks();
    EXPECT_EQ(tasks.size(), 0); 
}
