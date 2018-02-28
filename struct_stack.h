struct node {

int one;
int two;
int three;
int four;
node *next;
};

struct stack
{ node *head =  NULL;


void push (int new_one, int new_two, int new_three, int new_four)
{node *temp = new node;
temp->one = new_one;
temp->two = new_two;
temp->three = new_three;
temp->four = new_four;
temp->next = head;
head = temp;
}

int pop()
{node *temp = head;
head = head->next;
int temp_one = temp->one;
int temp_two = temp->two;
int temp_three = temp->three;
int temp_four = temp->four;
delete temp;
return (temp_one, temp_two, temp_three, temp_three);

}

};
