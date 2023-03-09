# StankinOOPLabs

Задача.
Готово:
Загрузить файл, наполняя созданную БД ( в стиле ООП ) элементами из файла. 
Вывести на консоль данные о всех инженерах, а затем в порядке возрастания года рождения данные о всех не председателях.
Не забывать освобождать ресурсы.
В процессе:
Создать два полиморфных класса общей иерархии: Parent и Child. В базовом классе разместить в динамической памяти член данных str, типа string .
В главной функции последовательно создать по 2 экземпляра базового и производного класса и поместить их в базу данных 1 (БД1) (можно использовать для БД контейнер типа vector), созданную в динамической памяти. В пользовательском конструкторе должен быть параметр  string- типа, чтобы можно было инициировать член-данных str.
Затем определить в динамической памяти БД2, и скопировать туда все объекты из БД1. (Реализовать виртуальную функцию copy для копирования объектов своего класса, используя уже непосредственно копирующий конструктор)
Удалить БД1.
Распечатать все члены-данных str для каждого объекта в БД2, используя итератор.
Добавить в программу все необходимое для правильной ее работы.
 
