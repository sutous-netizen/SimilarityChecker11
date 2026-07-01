#include <string>

using std::string;

class LengthChecker {
public:
	int comp(string inStr1, string inStr2) {
		if (inStr1.length() >= inStr2.length() * 2
			|| inStr1.length() * 2 <= inStr2.length()) {
			return 0;
		}
		return 60;
	}
};