void oracle_search(
  int *Pre_A, int *A, 
  int Pre_elem, int elem, 
  int pathcrawler__retres__search
)
{

  int f=0;
if(pathcrawler__retres__search==-1)
	{
		for(int i=0; i<7; i++)
		{
			if(A[i]== elem)
			{
			f=1;
			}
		}
	if(f==1)
	{
		pathcrawler_verdict_failure();
	}
	else
	{
	pathcrawler_verdict_success();
	}
	}
else
{
	
if(pathcrawler__retres__search >-1 && pathcrawler__retres__search < 8 )
{

if(elem==A[pathcrawler__retres__search])
	{
	pathcrawler_verdict_success();
	}
	else
    {
	pathcrawler_verdict_failure();
    }
}

else
{
pathcrawler_verdict_failure();
}
}
  return;
}


