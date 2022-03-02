#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    char * value; //must use dynamic allocation 
    struct node* next;
} node_t;

node_t * construct_3_strs() {

     node_t a,b,c;

     a.value=(char*)malloc(sizeof(char)*10);
     b.value=(char*)malloc(sizeof(char)*10);
     c.value=(char*)malloc(sizeof(char)*10);
  
     a.value="CS232 ";
     b.value="is ";
     c.value="awesome";

     a.next=&b;
     b.next=&c;
     c.next=&a;


     node_t * i;
     i=&a;
    return i;//just to pass compiler, please edit as needed.
}

//You can ignore the following code for testing
int dump_all(node_t*);
int main (int argc, char ** argv) {

    node_t * x = construct_3_strs();
    return dump_all(x);

}

int dump_all(node_t * x) {

    printf("x -> %s", x->value);

    node_t * y = x->next;
    printf(" %s", y->value);

    node_t * z = y->next;
    printf(" %s\n", z->value);
    if(z->next != x) {
    	printf("failed");
	return -1;
    } else {
        return 0;
    }
}
