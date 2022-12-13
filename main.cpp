#include <iostream>
#include <vector>

struct Car{
    Car(std::string name, double radiusOfWheel) {}
};


void outArray(std::vector<int> array, int n) {
    int len = array.size();
    std::cout << n <<"." << " " ;
    for (int i = 0; i < len; i++) {
        std::cout << array[i] << " ";     /// по индексу достаем(обращаемся к элементу) элемент
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> testArray;
    std::vector<Car> circles;
    for (int i = 16; i > 0; i--) {
        testArray.push_back(i);                             /// push_back() добавляет в конец массива(vector) эллемент
    }
    outArray(testArray, 1);
    testArray.erase(testArray.begin() + 7);         /// erase Удаляет элемент или диапазон элементов в векторе из заданных позиций
    outArray(testArray, 2);                         // исчезла 9
    testArray.insert(testArray.begin() + 7, 9);  /// insert Вставляет элемент или несколько элементов в вектор по заданному индексу
    outArray(testArray, 3);                         // вернулась 9
    circles.emplace_back("Nissan",20);   /// emplace_back Добавляет элемент, созданный на месте (т.е. мы создаем новый объект указанного типа (здесь Car)), в конец вектора.
    testArray.emplace_back(20);                             /// Добавляет элемент, созданный на месте (т.е. мы создаем новый объект указанного типа (здесь int)), в конец вектора.
    outArray(testArray, 4);
    testArray.resize(20, 6);                     /// resize изменяет размер vector до нужного размера
    outArray(testArray, 4);
    std::cout <<testArray.capacity() << std::endl;          /// capacity показывает текущую длину хранилища, выделенного(зарезервираваного) для вектора.
    testArray.reserve(63);                               /// reserve Изменяем размер памяти, выделеной для вектора(здесь мы увеличваем с 32 до 63):
    std::cout << testArray.capacity() << std::endl;         /// Текущая длина хранилища, выделенного вектору.
    testArray.shrink_to_fit();                              /// Удаляет лишнюю часть(емкость) (т.е. с 63 уменьшил до 20 (== колличество элементов)).
    std::cout << testArray.capacity() << std::endl;
    outArray(testArray, 5);
    testArray[0] = 9999;                                    /// оператор присваивания
    outArray(testArray, 5);
    std::cout <<"Size of array: " << testArray.size() << std::endl;
    testArray.clear();                                      /// clear Очищает vector (т.е. в нем ничего не лежит, он пустой)
    std::cout << "Size of array: " << testArray.size();



    return 0;
}