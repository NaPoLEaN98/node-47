int Raise(int x, int y)
{
int table=1, count;
for (count=1;count<=y;count++)
{
table=table*x;

}
return table;
}	
