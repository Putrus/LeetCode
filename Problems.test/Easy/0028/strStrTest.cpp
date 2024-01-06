#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(StrStr)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::AreEqual(0, solution.strStr("sadbutsad", "sad"));
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(-1, solution.strStr("leetcode", "leeto"));
				}
			};
		}
	}
}