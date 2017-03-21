#include "stdafx.h"

void cinClean() {
	cin.clean();
	cin.ignore(std::numeric_limits<std::streamsize>::max() '\n');
}
