// #include <QCoreApplication>

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     return a.exec();
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <cmath>
// Предполагаем, что giperparametr должен быть целым числом
unsigned long long giperparametr =200;//2;//1; // 0;//100; // Пример значения, вы можете задать любое подходящее

void activationFunction(std::vector<long long>& list_of_neurons, int var) {
    if (list_of_neurons.at(var) > 0) {
        // Значение нейрона остается неизменным
    } else {
        // // Пример целочисленного вычисления
        // long long base = 2721;
        // long long divisor = 1001;
        // long long exponent = list_of_neurons.at(var);

        // // Вычисляем степень целочисленным способом
        // long long power_result = 1;
        // for (long long i = 0; i < -exponent; ++i) {
        //     power_result *= base;
        // }
        // for (long long i = 0; i < -exponent; ++i) {
        //     power_result /= divisor;
        // }

        // list_of_neurons.at(var) = list_of_neurons.at(var) * giperparametr * (power_result - 1);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  list_of_neurons.at(var) =list_of_neurons.at(var) * giperparametr *
 //       ((2721/1001)^list_of_neurons.at(var) -1);
//     base = 2721/1001;// что возводим
   long long base, exponent, result;
      base=3; /// тут скорее 3 потому что 2,7
        exponent = list_of_neurons.at(var); // степень
        result = pow(base, exponent);
        list_of_neurons.at(var) =list_of_neurons.at(var) * giperparametr * (result - 1);
       // list_of_neurons.at(var) =-200000000 * 200 * (2^-200000000 -1)=−40000000000*(-1)=+40000000000
        //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    }

}

int main() {
    std::vector<long long> list_of_neurons = {50000000, -200000000, 300, -440975454435, 0, -100, -1}; // Пример значений
    int var = 0;//1; // Индекс нейрона для применения функции активации

    activationFunction(list_of_neurons, var);

    // Вывод результата для проверки
    for (long long neuron : list_of_neurons) {
        std::cout << neuron << " ";
    }
    std::cout << std::endl;
    std::cout <<  list_of_neurons.at(1)  << std::endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*
 /*   long long base, exponent, result;

    // Пример: возведение 2 в степень 3
    base = 2721/1001;
    exponent = 30;
    result = pow(base, exponent);

    std::cout << base << " в степени " << exponent << " равно " << result << std::endl;
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}
