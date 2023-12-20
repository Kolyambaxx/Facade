// Facade.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Subsystem1 {
public:
    void operation1() const {
        std::cout << "Subsystem 1: Operation 1" << std::endl;
    }

    void operation2() const {
        std::cout << "Subsystem 1: Operation 2" << std::endl;
    }
};


class Subsystem2 {
public:
    void operation1() const {
        std::cout << "Subsystem 2: Operation 1" << std::endl;
    }

    void operation2() const {
        std::cout << "Subsystem 2: Operation 2" << std::endl;
    }
};

class Facade {
public:
    Facade() : subsystem1(), subsystem2() {}


    void operation() const {
        std::cout << "Facade: Operation" << std::endl;
        subsystem1.operation1();
        subsystem1.operation2();
        subsystem2.operation1();
        subsystem2.operation2();
    }

private:
    Subsystem1 subsystem1;
    Subsystem2 subsystem2;
};

int main() {

    Facade facade;
    facade.operation();

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
