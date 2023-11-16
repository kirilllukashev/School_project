#pragma once
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>

#include "error.h"

using iter_vstr = std::vector<std::u16string>::iterator;
using iter_str = std::u16string::iterator;

extern std::vector<std::u16string> my_data;
extern int gBeg, gEnd;

void errors();
bool is_string_num(QString);

void insert_string(int, std::u16string);
void insert_string(int, iter_vstr, iter_vstr);

void delete_string_func(int);

void insert_substr(int, int, std::u16string);
void change_char(int, int, char);
void context_change(std::u16string, std::u16string, int, int);

void delete_leading_zeros(int, int);
void delete_groups(int, int);
void stars_changer(int, int);
void braces_killer(int, int);
