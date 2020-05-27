int cbinseacrh(int* arr, int size, int value)
{
	int result = 0, left = 0, right = size;
	int mid = (left + right) / 2
	while (left <= right)
	{
		if (arr[mid] == value) 
		{
			result++;
			break;
		}
		if (value > arr[mid]) 
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		if (value < arr[mid])
		{
			right = mid -1;
			mid = (left + right) / 2;
		}
	}
	int t = 1;
	while ((mid - t >= 0) && (arr[mid - t] == value))
	{
		result++;
		t++;
	}
	t = 1;
	while ((mid + t >= 0) && (arr[mid + t] == value))
	{
		result++;
		t++;
	}
	return result;
}
