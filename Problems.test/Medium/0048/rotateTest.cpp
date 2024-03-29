#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(Rotate)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<std::vector<int>> matrix = {
						{ 1, 2, 3 },
						{ 4, 5, 6 },
						{ 7, 8, 9 } };
					std::vector<std::vector<int>> expected = {
						{ 7, 4, 1 },
						{ 8, 5, 2 },
						{ 9, 6, 3 } };
					solution.rotate(matrix);
					Assert::IsTrue(expected == matrix);
				}

				TEST_METHOD(Example2)
				{
					std::vector<std::vector<int>> matrix = {
						{ 5, 1, 9, 11 },
						{ 2, 4, 8, 10 },
						{ 13, 3, 6, 7 },
						{ 15, 14, 12, 16 } };
					std::vector<std::vector<int>> expected = {
						{ 15, 13, 2, 5 },
						{ 14, 3, 4, 1 },
						{ 12, 6, 8, 9 },
						{ 16, 7, 10, 11 } };
					solution.rotate(matrix);
					Assert::IsTrue(expected == matrix);
				}
			};
		}
	}
}