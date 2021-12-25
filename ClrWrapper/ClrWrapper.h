#pragma once
#include <string>
#include "../Cpp/Teja.h"
using namespace std;
using namespace System;

namespace ClrWrapper {
	public ref class Teja
	{
	public: 
		Teja();
	public:
		String^ GetString();
		String^ GetStringFromCpp();
		String^ Name_h;
	private:
		TejaCpp *obj;
	};
}
