void swap(int *arr)
{
	int temp=0;
	temp=*arr;
	*arr=*(arr+1);
	*(arr+1)=temp;	
}
