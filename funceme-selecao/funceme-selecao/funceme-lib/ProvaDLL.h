#pragma once

#include <string>

#ifdef PROVADLL_EXPORTS
#define PROVADLL_API __declspec(dllexport) 
#else
#define PROVADLL_API __declspec(dllimport) 
#endif
// This class is exported from the MathFuncsDll.dll
	class PROVADLL_API Prova
	{
	private:
		std::string encryptDecrypt(std::string toEncrypt);
	public:
		std::string getEmail();
	};
