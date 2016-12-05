#include "draw.hpp"
#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

uint8_t Width = 0;
uint8_t Height = 0;
	void draw::draw_map(HANDLE hconsole, int info[]) {
		enum symbol { trawa1, trawa2, gleba };

		for (int h = 0; h < Height; ++h) {
			for (int w = 0; w < Width; ++w) {
				switch (info[w + h*Height]) {
				case 0:
					draw_grass1(hconsole);
					break;
				case 1:
					draw_grass2(hconsole);
					break;
				case 2:
					draw_ground(hconsole);
					break;
				}
			}
			cout << endl;
		}
	}
	void draw::set_parameters(uint8_t w, uint8_t h) {
		Width = w;
		Height = h;
	}


	void draw::draw_grass1(HANDLE hconsole) {
		SetConsoleTextAttribute(hconsole, 2);
		cout << ".";
	}

	void draw::draw_grass2(HANDLE hconsole) {
		SetConsoleTextAttribute(hconsole, 2);
		cout << ",";
	}

	void draw::draw_ground(HANDLE hconsole) {
		SetConsoleTextAttribute(hconsole, 6);
		cout << ".";
	}