#include <algorithm>
#include "include/header.hpp"

void SortByName(std::vector<Student>& v)
{
	std::sort(v.begin(), v.end(),
			  [](Student& a, Student& b) -> bool
			  {
				  return (a.Name < b.Name);
			  });
	return;
}

void SortByRating(std::vector<Student>& v)
{
	std::sort(v.begin(), v.end(),
			  [](Student& a, Student& b) -> bool
			  {
				  int avg1 = 0, avg2 = 0;
				  for (auto i : a.Ratings)
				  {
					  avg1 += i;
				  }
				  for (auto i : b.Ratings)
				  {
					  avg2 += i;
				  }
				  return ((double(avg1) / double(a.Ratings.size())) < (double(avg2) / double(b.Ratings.size())));
			  });
	return;
}

size_t CountTwoness(const std::vector<Student>& v)
{
	size_t ans = 0;
	bool chck;
	for (auto i : v)
	{
		chck = false;
		for (auto j : i.Ratings)
		{
			if (j < 3)
			{
				chck = true;
				break;
			}
		}
		if (chck)
			ans++;
	}
	return ans;
}

size_t CountExcellent(const std::vector<Student>& v)
{
	size_t ans = 0;
	bool chck;
	for (auto i : v)
	{
		chck = true;
		for (auto j : i.Ratings)
		{
			if (j != 5)
			{
				chck = false;
				break;
			}
		}
		if (chck)
			ans++;
	}
	return ans;
}

std::vector<Student> VectorMathExcellent(const std::vector<Student>& v)
{
	std::vector<Student> r;
	bool chck;
	r.reserve(v.size());
	for (auto i : v)
	{
		chck = false;
		auto sz = i.Subjects.size();
		for (int j = 0; j < sz; j++)
		{
			if (i.Subjects[j] == "Math" && i.Ratings[j] == 5)
			{
				chck = true;
				break;
			}
		}
		if (chck)
			r.push_back(i);
	}
	return r;
}

std::vector<std::string> GroupsId(const std::vector<Student>& v)
{
	std::vector<std::string> r;
	std::map<std::string, int> grps;
	for (auto i : v)
	{
		grps[i.GroupId] = 1;
	}
	r.reserve(grps.size());
	for (auto i : grps)
	{
		r.push_back(i.first);
	}
	return r;
}

std::vector<Group> Groups(const std::vector<Student>& v)
{
	std::vector<Group> r;
	std::map<std::string, Group> grps;
	for (auto i : v)
	{
		grps[i.GroupId].Id = i.GroupId;
		grps[i.GroupId].Students.push_back(i);
	}
	r.reserve(grps.size());
	for (auto i : grps)
	{
		r.push_back(i.second);
	}
	return r;
}