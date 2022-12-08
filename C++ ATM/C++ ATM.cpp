#include <iostream>



void showMenu() {

    std::cout << "***** MENU *****" << std::endl;
    std::cout << "1). Check balance" << std::endl;
    std::cout << "2). Deposit" << std::endl;
    std::cout << "3). Withdraw" << std::endl;
    std::cout << "4). Exit" << std::endl;
    std::cout << "****************" << std::endl;
    
}



int main()
{

    int balance = 500;
    int deposit;
    int option;
    int withdraw;

    do{

    showMenu();
    std::cout << "Choose the option: ";
    std::cin >> option;

        if (option == 1) {
            std::cout << "Your balance is: " << balance << std::endl;
        }
        else if (option == 2) {
            std::cout << "How much money you want to deposit: ";
            std::cin >> deposit;
            balance += deposit;
            std::cout << "Your balance now is: " << balance << std::endl;
        }
        else if (option == 3) {
            std::cout << "How much money you want to withdraw: ";
            std::cin >> withdraw;
            balance -= withdraw;
            std::cout << "Your balance now is: " << balance << std::endl;
        }
    } while (option != 4);


    return 0;
}



