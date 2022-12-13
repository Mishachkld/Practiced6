#include <iostream>
#include <vector>

struct Car{
    Car(std::string name, double radiusOfWheel) {}
};


void outArray(std::vector<int> array) {
    int len = array.size();
    for (int i = 0; i < len; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> testArray;
    std::vector<Car> circles;
    for (int i = 16; i > 0; i--) {
        testArray.push_back(i);   // добавляем в конец массива эллемент - .push_back()
    }
    outArray(testArray);
    testArray.erase(testArray.begin() + 7);  /// erase Удаляет элемент или диапазон элементов в векторе из заданных позиций
    outArray(testArray);                       // исчезла 9
    testArray.insert(testArray.begin() + 7, 9);  /// insert Вставляет элемент или несколько элементов в вектор по заданному индексу
    outArray(testArray);                       // вернул 9
    circles.emplace_back("Nissan",20);  /// emplace_back Добавляет элемент, созданный на месте (т.е. мы создаем новый объект указанного типа (здесь Car)), в конец вектора.
    testArray.emplace_back(20);                            /// Добавляет элемент, созданный на месте (т.е. мы создаем новый объект указанного типа (здесь int)), в конец вектора.
    outArray(testArray);
    testArray.resize(20, 6);                    /// resize изменяет размер vector до нужного размера
    outArray(testArray);
    std::cout <<testArray.capacity() << std::endl;        /// capacity показывает текущую длину хранилища, выделенного(зарезервираваного) для вектора.
    testArray.reserve(63);                              /// reserve Изменяем размер, выделеный для вектора:
    std::cout << testArray.capacity() << std::endl;        /// Текущая длина хранилища, выделенного вектору.
    return 0;
}



//void random(, int n) {
//    for (int i = 0; i < n; i++) {
//        array->push_back(i);
//    }
//}