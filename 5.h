NODE* del(NODE* start, int k) //Removes Link at point K from head
{
	if (k < 1) //Cheak for unvalid input in K
		return start;
	if (start == NULL) //Check in case K is too big, or start was given to a NULL pointer
		return NULL;
	if (k == 1) //Removes one link in the chain when k = 1
	{
		NODE *temp = start->next;
		free(start);
		return temp;
	}
	start->next = del(start->next, k - 1); //Move to next link
	return start; //Return current location
}
