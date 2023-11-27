#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// 14.11.23 Практика 1

//int main() 
//{
//    setlocale(LC_ALL, "Russian");
//    const int SIZE = 5;
//    string logins[SIZE] = { "user1", "user2", "user3", "user4", "user5" };
//    string passwords[SIZE] = { "pass1", "pass2", "pass3", "pass4", "pass5" };
//
//    string inputLogin, inputPassword;
//    cout << "Введите логин: ";
//    cin >> inputLogin;
//    cout << "Введите пароль: ";
//    cin >> inputPassword;
//
//    bool loggedIn = false;
//    for (int i = 0; i < SIZE; ++i) {
//        if (inputLogin == logins[i] && inputPassword == passwords[i]) {
//            loggedIn = true;
//            break;
//        }
//    }
//
//    if (loggedIn) {
//        cout << "доступ разрешен";
//    }
//    else {
//        cout << "отказано в доступе";
//    }
//
//    return 0;
//}

// 14.11.23 Практика 2

//bool isPalindrome(const string& str) {
//    string formattedStr;
//    for (char c : str) {
//        if (isalpha(c)) {
//            formattedStr += tolower(c);
//        }
//    }
//
//    string reversedStr = formattedStr;
//    reverse(reversedStr.begin(), reversedStr.end());
//
//    return formattedStr == reversedStr;
//}
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    string userInput;
//    cout << "Введите строку: ";
//    getline(cin, userInput);
//
//    if (isPalindrome(userInput)) {
//        cout << "Это палиндром!" << "\n";
//    }
//    else {
//        cout << "Это не палиндром." << "\n";
//    }
//
//    return 0;
//}

 //12.10.23 Практика 1

//int function1(int a) {
//    if (a > 0 && a <= 3) {
//        int arr[3] = { 1, 2, 3 };
//        return arr[a - 1];
//    }
//    else {
//        return -1;
//    }
//}
//
//int function2(int a, int b) {
//    if (b != 0) {
//        return a / b;
//    }
//    else 
//    {
//        return 5;
//    }
//}
//
//int function3(int a) {
//    if (a == 0) {
//    }
//    else {
//        return 42;
//    }
//}
//
//int function4(int n) {
//    if (n <= 0) {
//        return 1;
//    }
//    else {
//        return function4(n - 1) * n;
//    }
//}
//
//int function5(int a, int b) {
//    if (a < b) {
//        return a;
//    }
//    else {
//        return b;
//    }
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "Russian");
//    int result1 = function1(1);
//    std::cout << "Результат 1: " << result1 << std::endl;
//
//    int num1 = 10;
//    int num2 = 0;
//    int result2 = function2(num1, num2);
//    std::cout << "Результат 2: " << result2 << std::endl;
//
//    int result3 = function3(0);
//    std::cout << "Результат 3: " << result3 << std::endl;
//
//    int result4 = function4(1000);
//    std::cout << "Результат 4: " << result4 << std::endl;
//
//    int result5 = function5(5, 3);
//    std::cout << "Результат 5: " << result5 << std::endl;
//
//    return 0;
//}

// 10.10.23 Практика 1

//int fibo(int index) 
//{
//    if (index <= 1) 
//    {
//        return 1;
//    }
//    else 
//    {
//        return fibo(index - 1) + fibo(index - 2);
//    }
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "Russian");
//    int n;
//    cout << "Введите индекс числа Фибоначчи: ";
//    cin >> n;
//
//    if (n < 0) 
//    {
//        cout << "Индекс должен быть неотрицательным числом." << "\n";
//    }
//    else 
//    {
//        int result = fibo(n);
//        cout << "Число Фибоначчи для индекса " << n << ": " << result << "\n;
//    }
//
//    return 0;
//}

// 10.10.23 Практика 2

//int fibo(int index, int& count) {
//    count++;
//    if (index <= 1) 
//    {
//        return 1;
//    }
//    else 
//    {
//        return fibo(index - 1, count) + fibo(index - 2, count);
//    }
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "Russian");
//    int n = 5;
//    int count = 0;
//    int result = fibo(n, count);
//    cout << "Число Фибоначчи для индекса " << n << ": " << result << "\n";
//    cout << "Количество рекурсивных вызовов: " << count << "\n";
//
//    return 0;
//}

// 05.10.23 Практика 1

//void printNumbers(int n) 
//{
//    if (n > 0) 
//    {
//        cout << n << " ";
//        printNumbers(n - 1);
//    }
//}
//
//int main() 
//{
//    int start = 10;
//    printNumbers(start);
//
//    return 0;
//}

// 05.10.23 Практика 2

//void printNumbers(int n) 
//{
//    if (n >= 1) 
//    {
//        printNumbers(n - 1);
//        cout << n << " ";
//    }
//}
//
//int main() 
//{
//    printNumbers(10);
//    return 0;
//}

// Не нашёл практику 1 за 19.09.23 
