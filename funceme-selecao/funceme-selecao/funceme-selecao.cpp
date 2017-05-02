// funceme-selecao.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "funceme-lib\ProvaDLL.h"



int main()
{
	Prova prova;
	std::ofstream file;
	file.open("emails.txt");
	file << prova.getEmail();
	std::cout << prova.getEmail() << std::endl;	
    return 0;
}

