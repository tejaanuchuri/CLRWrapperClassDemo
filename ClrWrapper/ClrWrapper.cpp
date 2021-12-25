#include "pch.h"
#include <msclr/marshal.h>
#include "ClrWrapper.h"

ClrWrapper::Teja::Teja()
{
	Name_h = "teja";
}

String^ ClrWrapper::Teja::GetString()
{
	String^ str = gcnew String("Teja Anuchuri");
	return str;
}

String^ ClrWrapper::Teja::GetStringFromCpp()
{
	return msclr::interop::marshal_as<System::String^>(obj->GetString().c_str());
}
