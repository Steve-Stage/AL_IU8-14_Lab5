# Лабораторная работа 5

## Задание
Пусть есть структура `Student`
```cpp
struct Student
{
  std::string Name;
  std::string GroupId;
  std::vector<unsigned> Ratings;
  std::vector<std::string> Subjects;
};
```

В поле `Ratings` представлены оценки по соответсвующему предмету из поля `Subjects`.
Предположим есть список студентов `std::vector<Student> students`.
Ваше задание состоит в реализации ряда функций. Все прототипы функций необходимо разместить
в файле `include/header.hpp`.

Реазилуйте функции, которые выполяют следующие действия с этим списком:
* отсортирует всех студентов по именам. Прототип:
```cpp
void SortByName(std::vector<Student>&);
```

* отсортирует всех студентов по средней оценке;
```cpp
void SortByRating(std::vector<Student>&);
```

* вернет количество студентов имеющих неудовлетворительную оценку хотя бы по одному предмету;
```cpp
size_t CountTwoness(const std::vector<Student>&);
```

* определит, сколько студентов сдали все экзамены на 5.
```cpp
size_t CountExcellent(const std::vector<Student>&);
```

* создаст массив `std::vector<Student>`, в который войдут студенты имеющие отметку отлично, по предмету "Math";
```cpp
std::vector<Student> VectorMathExcellent(const std::vector<Student>&);
```

* вернет массив уникальных названий групп студентов из списка students
```cpp
std::vector<std::string> GroupsId(const std::vector<Student>&);
```

* сформирует список групп, т.е. создаст массив структур `Group`
```cpp
struct Group
{
    std::string Id;
    std::vector<Student> Students;
};
```

Прототип:
```cpp
std::vector<Group> Groups(const std::vector<Student>&);
```
