
#include <iostream>
#include <string>
struct bank_account
{
    int number_account = 0;
    std::string user_name;
    double balance = 0;
};
void replenishment_balance(bank_account& client, double new_balance)
{
    client.balance = new_balance;
}
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    bank_account client;
    double new_balance = 0;
    std::cout << "Введите номер счета: " << std::endl;
    std::cin >> client.number_account;
    std::cout << "Введите имя владельца: " << std::endl;
    std::cin >> client.user_name;
    std::cout << "Введите баланс: " << std::endl;
    std::cin >> client.balance;
    std::cout << "Введите новый баланс: " << std::endl;
    std::cin >> new_balance;
    replenishment_balance(client, new_balance);
    std::cout << "Ваш счет: " << client.user_name << " " << client.number_account << " " << client.balance << std::endl;
    return 0;
}

