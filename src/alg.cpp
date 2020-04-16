int cbinseacrh(int* arr, int size, int value)
{
	int result = 0, i = 0, j = size - 1;
	printf("Enter the desired value: ", value);
	while (i < j)
	{
		int mid = (i + j) / 2;
		if (arr[mid] == value) {
			return result++;
		}
		else if (value <= arr[mid]) {
			j = mid;
		}
		else {
			i = mid + 1;
		}
	}
	return result;
}
