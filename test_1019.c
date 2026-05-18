int* nextLargerNodes(struct ListNode* head, int* returnSize) {
    int valor = 0, tamanho = 0;
    struct ListNode *ptr = head ;
    struct ListNode *ptr2; 

    while(ptr != NULL){
        ptr = ptr->next;
        tamanho++;
    }
   ptr=head;
    *returnSize = tamanho;
    int *arrey = (int *)malloc(sizeof(int)*tamanho);
    
    tamanho = 0;

     while(ptr != NULL){
        valor=ptr->val;
        ptr2=ptr->next;

        while(ptr2 != NULL){
            if(valor < ptr2->val){
                valor= ptr2->val;
                break;
            }
            ptr2 = ptr2->next;
        }
        if(valor == ptr->val){
            valor = 0;
        }

    arrey[tamanho] = valor;
    tamanho++;
    ptr= ptr->next;
     }

return arrey;
}
