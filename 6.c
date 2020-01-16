void main()
{
  unsigned int x = -1;                                //in binery this is 11111111111
  int y = ~0;                                         //in binery this is 11111111111
  if (x == y)                                         //they are the same
    printf ("same\n");                               //prints "same"
  else
    printf ( "not same\n");
  int a[][ 3] = {1, 2, 3, 4, 5, 6};
  int ( *ptr)[3] = a;
  printf ("%d %d \n", ( *ptr)[1], (*ptr)[2]);         //Array with 3 collams "2 3" will be printed (ptr[0][1] ptr[0][[2]
  ++ptr;                                              //When skiping one it will jump 3 cells as there 3 colloms when defined
  printf ("%d %d\n",(*ptr)[1], (*ptr)[2]);            // "5 6" will be printed (ptr[1][1] ptr[1][[2]
  ptr--;
}
