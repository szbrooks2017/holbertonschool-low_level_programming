
int rand()
{

	int range[] = {9, 8, 10, 24, 75, 9};
	static int i = 0;

	while (range[i] < 6)
		i++;

	return (range[i]);
}
