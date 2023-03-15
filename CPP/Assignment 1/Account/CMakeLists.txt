cmake_minimum_required(VERSION 3.23)
project(Account)

set(CMAKE_CXX_STANDARD 14)

add_executable(Account main.cpp Account.h Account.cpp CheckingAccount.cpp CheckingAccount.h SavingsAccount.cpp SavingsAccount.h)
