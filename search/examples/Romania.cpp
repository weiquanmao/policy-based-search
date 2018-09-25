#include "examples/Romania.h"
#include "search.h"

#include <iostream>

using namespace jsearch;
using namespace std;

int main(int, char **)
{
	Romania::state const Sibiu("Sibiu");

	Problem<Romania, Distance, Neighbours, Visit, GoalTest> const Bucharest(Sibiu); // Use Sibiu as initial state.
	Evaluation<EuclideanDistance> const evaluation;

	auto const solution = jsearch::search(Bucharest, evaluation);

	cout << "SOLUTION >>> State: " << solution.state << ", Parent: " << solution.parent->state << ", path cost: " << solution.path_cost << endl;
}
