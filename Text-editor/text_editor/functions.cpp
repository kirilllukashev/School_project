#include "functions.h"
#include "error.h"

#include <algorithm>
#include <vector>
#include <string>
#include <iterator>

using iter_vstr = std::vector<std::u16string>::iterator;
using iter_str = std::u16string::iterator;

std::vector<std::u16string> my_data;
bool gCrush = false;
int gBeg = 0, gEnd = my_data.size();

void errors() {
    Error window;
    window.setModal(true);
    window.exec();
}

bool is_string_num(QString s) {
  bool correct = true;
  for (auto& c : s.toStdU16String()) {
      if (!std::isdigit(c)) correct = false;
    }
  return correct;
}

void insert_string(int place, std::u16string str) {
  my_data.insert(my_data.begin() + place, str);
  gBeg = 0, gEnd = my_data.size();

}

void insert_string(int place, iter_vstr beg, iter_vstr end) {
  my_data.insert(my_data.begin() + place, beg, end);
  gBeg = 0, gEnd = my_data.size();

}

void delete_string_func(int place) {
  my_data.erase(my_data.begin() + place);
  gBeg = 0, gEnd = my_data.size();

}

void insert_substr(int num_str, int num_char, std::u16string str) {
  my_data[num_str].insert(my_data[num_str].begin() + num_char, str.begin(), str.end());
  gBeg = 0, gEnd = my_data.size();

}

void change_char(int place, int str_place, char c) {
  my_data[place][str_place] = c;
  gBeg = 0, gEnd = my_data.size();

}

void context_change(std::u16string from_str, std::u16string to_str, int beg = 0, int end = my_data.size()) {
  for (; beg < end; ++beg) {
    std::vector<int> findings;
    int dif = to_str.size() - from_str.size();
    iter_str it = my_data[beg].begin();
    while (int(it - my_data[beg].begin() + from_str.size()) - 1 < int(my_data[beg].size())) {
      int j = 0;
      while (j < int(from_str.size()) && *(it + j) == from_str[j])
        ++j;
      if (j == int(from_str.size()))
        findings.push_back(it - my_data[beg].begin());
      if (j == 0)
        ++it;
      else
        it += j;
    }

    for (auto& it : findings) {
      my_data[beg].insert(my_data[beg].begin() + it, to_str.begin(), to_str.end());
      my_data[beg].erase(my_data[beg].begin() + it + to_str.size(), my_data[beg].begin() + it + to_str.size() + from_str.size());
      for (auto& val : findings)
        val += dif;
    }
  }
  gBeg = 0, gEnd = my_data.size();
}

void delete_leading_zeros(int beg = 0, int end = my_data.size()) {
  for (; beg < end; ++beg) {
    if (my_data[beg].size() > 0) {
      bool is_same_num = std::isdigit(my_data[beg][0]) && my_data[beg][0] != '0';
      for (iter_str it = my_data[beg].begin() + 1; it < my_data[beg].end();) {
        if (!std::isdigit(*it) || !std::isdigit(*(it - 1))) {
          is_same_num = false;
          ++it;
          continue;
        }
        if (is_same_num) {
          ++it;
          continue;
        }
        if (std::isdigit(*(it - 1)) && std::isdigit(*it)) {
          if (!is_same_num && *(it - 1) == '0') my_data[beg].erase(it - 1);
          if (std::isdigit(*(it - 1)) && *(it - 1) != '0') is_same_num = true;
          continue;
        }
      }
    }
  }
  gBeg = 0, gEnd = my_data.size();
}

void delete_groups(int beg = 0, int end = my_data.size()) {
  for (; beg < end; ++beg) {
    iter_str l = my_data[beg].begin(), r = my_data[beg].begin();
    while (l < my_data[beg].end()) {
      if (std::isdigit(*l)) {
        while (r < my_data[beg].end() && std::isdigit(*r))
          ++r;
        bool is_increasing = true;
        for (iter_str i = l + 1; i < r; ++i)
          if (*i <= *(i - 1))
            is_increasing = false;
        if (r - l == 1)
          is_increasing = false;
        if (!is_increasing) {
          my_data[beg].erase(l, r);
          r = l;
        }
        else {
          l = r;
        }

      }
      else {
        ++l;
        r = l;
      }
    }
  }
  gBeg = 0, gEnd = my_data.size();

}

void stars_changer(int beg = 0, int end = my_data.size()) {
  for (; beg < end; ++beg) {
    iter_str l = my_data[beg].begin(), r = my_data[beg].begin();
    while (l < my_data[beg].end()) {
      if (*l == '*') {
        while (r < my_data[beg].end() && *r == '*')
          ++r;
        int dif = r - l;
        if (dif > 1) {
          my_data[beg].erase(l, r);
          std::u16string temp(dif / 2, '+');
          insert_substr(beg, l - my_data[beg].begin(), temp);
        }
        l += dif / 2;
        r = l;
      }
      else {
        ++l;
        r = l;
      }
    }
  }
  gBeg = 0, gEnd = my_data.size();
}

void braces_killer(int beg = 0, int end = my_data.size()) {
  for (; beg < end; ++beg) {
    iter_str l = my_data[beg].begin(), r = my_data[beg].begin();
    while (l < my_data[beg].end()) {
      if (*l == '{') {
        while (*r != '}')
          r++;
        my_data[beg].erase(l, r + 1);
      }
      else {
        ++l;
        r = l;
      }
    }
  }
  gBeg = 0, gEnd = my_data.size();
}
