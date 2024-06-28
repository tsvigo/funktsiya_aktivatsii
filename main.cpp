// #include <QCoreApplication>

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     return a.exec();
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

// Предполагаем, что giperparametr должен быть целым числом
unsigned long long giperparametr =200;//2;//1; // 0;//100; // Пример значения, вы можете задать любое подходящее

void activationFunction(std::vector<long long>& list_of_neurons, int var) {
    if (list_of_neurons.at(var) > 0) {
        // Значение нейрона остается неизменным
    } else {
        // Пример целочисленного вычисления
        long long base = 2721;
        long long divisor = 1001;
        long long exponent = list_of_neurons.at(var);

        // Вычисляем степень целочисленным способом
        long long power_result = 1;
        for (long long i = 0; i < -exponent; ++i) {
            power_result *= base;
        }
        for (long long i = 0; i < -exponent; ++i) {
            power_result /= divisor;
        }

        list_of_neurons.at(var) = list_of_neurons.at(var) * giperparametr * (power_result - 1);
    }
}

int main() {
    std::vector<long long> list_of_neurons = {50000000, -200000000, 300, -440975454435, 0, -100, -1}; // Пример значений
    int var = 1; // Индекс нейрона для применения функции активации

    activationFunction(list_of_neurons, var);

    // Вывод результата для проверки
    for (long long neuron : list_of_neurons) {
        std::cout << neuron << " ";
    }
    std::cout << std::endl;

    return 0;
}
