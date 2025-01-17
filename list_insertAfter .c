
listStatus_t list_insertAfter(node_t*head,int prevData,int newData)
{
    node_t *current=head;
    node_t *newnode=createNode(newData);
    node_t *temp;

    // newnode->data=newData;
    if(head==(void*)0)
    {
        return LIST_EMPTY;
    }

    while(current->next!=NULLPTR)
    {
        if(current->data==prevData)
        {
            temp=current->next;
            current->next=newnode;
            newnode->next=temp;

            return LIST_DONE;
        }
        current=current->next;
    }

    return LIST_NOT_FOUND;
}