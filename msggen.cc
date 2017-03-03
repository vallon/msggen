#include <msggen.h>

#include <sstream>

using namespace std;

string GenerateMessage(const string& greeting, const string& target) {
  ostringstream s;
  s << greeting << ", " << target << ".";
  return s.str();
}

