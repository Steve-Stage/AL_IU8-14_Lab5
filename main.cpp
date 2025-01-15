#include <iostream>
#include "include/header.hpp"

int main()
{
	std::vector<int> Ratings1 = { 3, 5, 4, 5, 5, 4 };
	std::vector<int> Ratings2 = { 5, 5, 5, 5, 5, 5 };
	std::vector<int> Ratings3 = { 3, 3, 3, 4, 3, 3 };
	std::vector<int> Ratings4 = { 4, 4, 5, 4, 4, 4 };
	std::vector<int> Ratings5 = { 4, 4, 5, 5, 5, 4 };
	std::vector<int> Ratings7 = { 3, 5, 3, 3, 5, 4 };
	std::vector<int> Ratings8 = { 5, 4, 5, 4, 5, 4 };
	std::vector<int> Ratings9 = { 5, 2, 5, 4, 5, 4 };
	std::vector<int> Ratings10 = { 2, 2, 5, 4, 5, 4 };
	std::vector<std::string> Subjects1 = { "Math", "Physics", "IT", "English", "Ecology", "Literature" };
	std::vector<std::string> Subjects2 = { "Physics", "Russian", "Politology", "Biology", "History", "Jurisprudence" };
	std::vector<std::string> Subjects3 = { "IT", "English", "Math", "PE", "Electronic", "IT" };
	Student student1("Asya", "iu8-34", Ratings2, Subjects1);	// 30	5
	Student student2("Romka", "iu8-34", Ratings2, Subjects1);	// 30	5
	Student student3("Petya", "iu9-54", Ratings1, Subjects3);	// 26	4.333
	Student student4("Vasya", "iu9-54", Ratings7, Subjects3);	// 23	3.833
	Student student5("Alice", "iu9-54", Ratings8, Subjects3);	// 27	4.5
	Student student6("Anton", "ibm3-12", Ratings3, Subjects2);	// 19	3.166
	Student student7("Robert", "ibm3-12", Ratings4, Subjects2); // 25	4.166
	Student student8("Vanya", "ibm3-12", Ratings5, Subjects2);	// 27	4.5
	Student student9("Uma", "ibm3-12", Ratings9, Subjects2);	// 25	4.166
	Student student10("Inga", "ibm3-12", Ratings10, Subjects2); // 22	3.666
	std::vector<Student> v { student1, student2, student3, student4, student5,
							 student6, student7, student8, student9, student10 };
	std::cout << "\n1:" << std::endl;
	SortByName(v);
	for (auto i : v)
	{
		std::cout << i.Name << ' ';
	}
	std::cout << "\n2:" << std::endl;
	SortByRating(v);
	for (auto i : v)
	{
		int sm = 0;
		for (auto j : i.Ratings)
			sm += j;
		std::cout << i.Name << ' ' << (double(sm)/double(i.Ratings.size()));
	}
	std::cout << "\n3:" << std::endl;
	std::cout << CountTwoness(v);
	std::cout << "\n4:" << std::endl;
	std::cout << CountExcellent(v);
	std::cout << "\n5:" << std::endl;
	{
		auto arr = VectorMathExcellent(v);
		for (auto i : arr)
		{
			std::cout << i.Name << ' ';
		}
	}
	std::cout << "\n6:" << std::endl;
	{
		auto arr = GroupsId(v);
		for (auto i : arr)
		{
			std::cout << i << ' ';
		}
	}
	std::cout << "\n7:" << std::endl;
	{
		auto arr = Groups(v);
		for (auto i : arr)
		{
			std::cout << i.Id << std::endl;
			for (auto j : i.Students)
			{
				std::cout << j.Name << ' ';
			}
			std::cout << std::endl;
		}
	}
	return 0;
}