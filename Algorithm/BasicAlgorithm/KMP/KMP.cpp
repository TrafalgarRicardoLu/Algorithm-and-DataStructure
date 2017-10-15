int* buildNext(char* pattern) {
	int length = strlen(pattern),j=0;
	int* next = new int[length];
	int t=next[0] = -1;
	while (j < length -1) {
		if (t < 0 || pattern[j] == pattern[t]) {
			j++; t++;
			pattern[j] != pattern[t] ? t : pattern[t];
		}
		else {
			t = next[t];
		}
	}
	return next;
}

int KMP(char* target, char* pattern) {
	int* next = buildNext(pattern);
	int length_t = strlen(target),t=0;
	int length_p = strlen(pattern),p=0;
	while (t < length_t && p < length_p) {
		if (pattern[p] == target[t] || p < 0) {
			p++; t++;
		}
		else {
			p = next[p];
		}
	}
	return t - p;
}                                                                                                                                                       :wq    } 						return t - p; 											} 																} 														p = next[p]; 										else { 														} 												p++; t++; 								if (pattern[p] == target[t] || p < 0) { 					while (t < length_t && p < length_p) { 				int length_p = strlen(pattern),p=0; 			int length_t = strlen(target),t=0; 		int* next = buildNext(pattern); int KMP(char* target, char* pattern) {  } 						return next; 											} 																} 														t = next[t]; 										else { 																	} 															pattern[j] != pattern[t] ? t : pattern[t]; 												j++; t++; 								if (t < 0 || pattern[j] == pattern[t]) { 					while (j < length -1) { 				int t=next[0] = -1; 			int* next = new int[length]; 		int length = strlen(pattern),j=0; nt* buildNext(char* pattern) { 