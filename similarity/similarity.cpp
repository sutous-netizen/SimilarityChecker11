#include <string>

using std::string;

class LengthChecker {
public:
	int comp(string inStr1, string inStr2) {
		double result = 0;
		if (inStr1.length() >= inStr2.length() * 2
			|| inStr1.length() * 2 <= inStr2.length()) {
			return result;
		}
		else {
			double gap = inStr1.length() >= inStr2.length() ? inStr1.length() - inStr2.length() : inStr2.length() - inStr1.length();
			double minLenth = inStr1.length() >= inStr2.length() ? inStr2.length(): inStr1.length();
			result = (1 - gap / minLenth) * 60;
			return static_cast<int>(result);
		}
		//return 60;
	}
};  