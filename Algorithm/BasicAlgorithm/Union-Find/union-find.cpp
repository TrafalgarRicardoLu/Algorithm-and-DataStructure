int  find(int x) {
	if (x != fa[x])
		x = find[x];
	return fa[x];
}

void add(int x, int y) {
	int a = find(x);
	int b = find(y);
	if (a != b)
		fa[b] = a;
}