	
	if (s.empty()) {
		return false;	
	}

	switch (expression[i]) {
		case ')':
			x = s.top();
			s.pop();
			if (x == ')') {
	}