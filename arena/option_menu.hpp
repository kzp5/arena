#pragma once

#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>

using std::string;
class option_menu {
public:
	void run();


private:
	bool scroll(char ch);
	void show();
	const static int options = 3;
	const string strings[options];
	uint8_t position = 0;
	HANDLE hconsole;
};