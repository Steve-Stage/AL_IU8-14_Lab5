#include <vector>
#include <string>

struct Student;

struct Group
{
	std::string Id;
	std::vector<Student> Students;
};

struct Student
{
	std::string Name;
	std::string GroupId;
	std::vector<int> Ratings;
	std::vector<std::string> Subjects;
	Student(std::string name, std::string gid, std::vector<int>& rts, std::vector<std::string>& sbj)
		: Name(name), GroupId(gid), Ratings(rts), Subjects(sbj) {};
};

void SortByName(std::vector<Student>&);
void SortByRating(std::vector<Student>&);
size_t CountTwoness(const std::vector<Student>&);
size_t CountExcellent(const std::vector<Student>&);
std::vector<Student> VectorMathExcellent(const std::vector<Student>&);
std::vector<std::string> GroupsId(const std::vector<Student>&);
std::vector<Group> Groups(const std::vector<Student>&);