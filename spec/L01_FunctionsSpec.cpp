#include "stdafx.h"

#include "../src/L01_Functions.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class L01_FunctionsSpec
	{
	private:
		TestContext^ testContextInstance;

	public:
		/// <summary>
		///Gets or sets the test context which provides
		///information about and functionality for the current test run.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};


// place holders 
#define ___ -99  // 3 underscores;  fill in the blank with integer

		[TestMethod]
		void Test_gramsPerKg()
		{
			Assert::AreEqual(___, gramsPerKg(), L"gramsPerKg() failed", 1, 2);
		};
	};
}
