#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(FourSum)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 1, 0, -1, 0, -2, 2 };
					std::vector<std::vector<int>> expected = { { -2, -1, 1, 2 }, { -2, 0, 0, 2 }, { -1, 0, 0, 1 } };
					std::vector<std::vector<int>> actual = solution.fourSum(nums, 0);
					Assert::IsTrue(actual == expected);
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 2, 2, 2, 2 };
					std::vector<std::vector<int>> expected = { { 2, 2, 2, 2 } };
					std::vector<std::vector<int>> actual = solution.fourSum(nums, 8);
					Assert::IsTrue(actual == expected);
				}

				TEST_METHOD(MyTest1)
				{
					std::vector<int> nums = { -1, 0, 1, 2, -1, -4 };
					std::vector<std::vector<int>> expected = { { -4, 0, 1, 2 }, { -1, -1, 0, 1 } };
					std::vector<std::vector<int>> actual = solution.fourSum(nums, -1);
					Assert::IsTrue(actual == expected);
				}

				TEST_METHOD(MyTest2)
				{
					std::vector<int> nums = { -3, -1, 0, 2, 4, 5 };
					std::vector<std::vector<int>> expected = { { -3, -1, 2, 4 } };
					std::vector<std::vector<int>> actual = solution.fourSum(nums, 2);
					Assert::IsTrue(actual == expected);
				}
			};
		}
	}
}