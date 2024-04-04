#include "Manager.h"
#include <iostream>
using namespace std;

int main() {
	Student st1("Alex", 14, 9);
	Student st2("Alice", 13, 7);
	Student st3("Peter", 13, 6);
	Student st4("Potter", 13, 10);
	Student st5("Matvey", 15, 8);

	Student students[]{ st1, st2, st3, st4, st5 };

	Manager manager;

	cout << "Best mark is " << manager.getMaxMark(students, 5) << endl;
	cout << "Worst mark is " << manager.getMinMark(students, 5) << endl;

	return 0;
}

// Additional source:
// https://learn.microsoft.com/ru-ru/cpp/cpp/constructors-cpp?view=msvc-170