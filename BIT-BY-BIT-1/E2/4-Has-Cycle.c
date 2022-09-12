bool has_cycle(SinglyLinkedListNode *head)
{
    SinglyLinkedListNode *slow = head;
    SinglyLinkedListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
            return 1;
    }   
    return 0;
}