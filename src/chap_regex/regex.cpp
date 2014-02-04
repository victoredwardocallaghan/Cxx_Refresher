// Copyright © 2014 Edward O'Callaghan. All Rights Reserved.
// See LICENSE file.

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <regex>
using std::regex;
using std::smatch;

int main()
{
  string pattern("[^c]ei");
  pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";

  regex r(pattern);
  smatch results;

  string test_str = "receipt friend thief receive";

  if(regex_search(test_str, results, r))
    cout << results.str() << endl;
}
