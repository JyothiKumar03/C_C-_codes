/*importing modules for performing io operations,
 stdc++.h is used to access Standard library of CPP*/
#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

// Function prototypes
void printIntroMenu();
void printMainMenu();
void start(map<string, pair<string, double>> &users);
void login(map<string, pair<string, double>> &users);
void createAccount(map<string, pair<string, double>> &users);
void deposit(map<string, pair<string, double>> &users, const string &userId);
void withdraw(map<string, pair<string, double>> &users, const string &userId);
void requestBalance(map<string, pair<string, double>> &users, const string &userId);

// Global variables
char menuInput;

// Main function
int main()
{
    // Welcome message
    cout << "Welcome to the ATM Machine!\n";

    // User storage (username -> (password, balance))
    map<string, pair<string, double>> users;

    // Call the function start
    start(users);

    return 0;
}

void printIntroMenu()
{
    cout << "Please select an option from the menu below:\n";
    cout << "l -> Login\n";
    cout << "c -> Create New Account\n";
    cout << "q -> Quit\n";
    cout << "> ";
}

void printMainMenu()
{
    cout << "d -> Deposit Money\n";
    cout << "w -> Withdraw Money\n";
    cout << "r -> Request Balance\n";
    cout << "q -> Quit\n";
    cout << "> ";
}

void start(map<string, pair<string, double>> &users)
{
    cout << "Please select an option from the menu below: \n";

    // Display the introduction menu
    printIntroMenu();

    // Program halts and waits for user input
    cin >> menuInput;

    // Use a switch statement
    switch (menuInput)
    {
    case 'l':
        login(users);
        break;
    case 'c':
        createAccount(users);
        break;
    case 'q':
        exit(0); // Terminate the program
        break;
    default:
        cout << "Invalid input. Valid commands are 'l', 'c', and 'q'.\n";
        start(users); // Restart the menu if the input is invalid
    }
}

bool isSecurePassword(const string &password)
{
    bool hasCapital = false;
    bool hasSpecialChar = false;
    bool hasNumber = false;

    for (char ch : password)
    {
        if (isupper(ch))
        {
            hasCapital = true;
        }
        else if (ispunct(ch))
        {
            hasSpecialChar = true;
        }
        else if (isdigit(ch))
        {
            hasNumber = true;
        }
    }

    return hasCapital && hasSpecialChar && hasNumber;
}

void createAccount(map<string, pair<string, double>> &users)
{
    string userId, password;
    double initialBalance;

    cout << "Please enter your user id: ";
    cin >> userId;

    // Check if the user already exists
    if (users.find(userId) != users.end())
    {
        cout << "User already exists. Please try a different user id.\n";
        start(users);
        return;
    }

    // Prompt the user for a secure password
    do
    {
        cout << "Please enter a secure password (one capital letter, one special character, and at least one number): ";
        cin >> password;

        if (!isSecurePassword(password))
        {
            cout << "Password does not meet the criteria. Please try again.\n";
        }
    } while (!isSecurePassword(password));

    cout << "Please enter initial balance: $";
    cin >> initialBalance;

    users[userId] = make_pair(password, initialBalance);

    cout << "Thank You! Your account has been created!\n";

    // Ask the user if they want to log in
    cout << "Do you want to log in now? (y/n): ";
    char choice;
    cin >> choice;

    if (choice == 'y')
    {
        login(users);
    }
    else
    {
        start(users);
    }
}
void login(map<string, pair<string, double>> &users)
{
    string userId, password;

    cout << "Please enter your user id: ";
    cin >> userId;

    // Check if the user exists
    if (users.find(userId) == users.end())
    {
        cout << "User not found. Please check your user id.\n";
        start(users); // Restart the menu
        return;
    }

    cout << "Please enter your password: ";
    cin >> password;

    // Check if the password matches
    if (users[userId].first == password)
    {
        cout << "Access Granted!\n";
        printMainMenu();
        // Additional logic for transaction handling can be added here
        char transactionChoice;
        cin >> transactionChoice;
        switch (transactionChoice)
        {
        case 'd':
            deposit(users, userId);
            break;
        case 'w':
            withdraw(users, userId);
            break;
        case 'r':
            requestBalance(users, userId);
            break;
        case 'q':
            exit(0); // Terminate the program
            break;
        default:
            cout << "Invalid input. Returning to the main menu.\n";
            start(users); // Restart the menu if the input is invalid
        }
    }
    else
    {
        cout << "******** LOGIN FAILED! ********\n";
        start(users); // Restart the menu
    }
}

void deposit(map<string, pair<string, double>> &users, const string &userId)
{
    double depositAmount;

    cout << "Amount of deposit: $";
    cin >> depositAmount;

    users[userId].second += depositAmount;

    cout << "Deposit successful. Your new balance is: $" << users[userId].second << "\n";
    start(users);
}

void withdraw(map<string, pair<string, double>> &users, const string &userId)
{
    double withdrawalAmount;

    cout << "Amount of withdrawal: $";
    cin >> withdrawalAmount;

    if (withdrawalAmount > users[userId].second)
    {
        cout << "Insufficient funds. Your current balance is: $" << users[userId].second << "\n";
    }
    else
    {
        users[userId].second -= withdrawalAmount;
        cout << "Withdrawal successful. Your new balance is: $" << users[userId].second << "\n";
    }

    start(users);
}

void requestBalance(map<string, pair<string, double>> &users, const string &userId)
{
    cout << "Your balance is: $" << users[userId].second << "\n";
    start(users);
}
