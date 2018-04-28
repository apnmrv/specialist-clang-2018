#include <stdio.h>
#include <stdlib.h>

int main (){

    int a,c;                // обычные int-ы
    int *b;                 // указатель

    printf("##############################################################################\n");
    printf("a = 10;\n");
    printf("From now on a variable \"a\" has a value of %d\n", a=10);
    printf("There\'s also a pointer to the value %d, just has been put into \"a\".\n", a);
    printf("And it looks like this %p\n", &a);

    printf("##############################################################################\n");
    printf("b = &a;\n");
    printf ("I've just put the value of the pointer to the value of \"a\", which is %d, into the variable \"b\" of the type \"pointer\".\n", a);
    printf("Therefore from now on the variable \"b\" of the type \"pointer\" has a value of %p.\n", b = &a);
    printf("But as a pointer the \"b\" variable points to the value of a, which is %d.\n", a);
    printf("And we could get it from b by using \"*\" operator:\n");
    printf("*b returns %d.\n", *b);
    printf("At the same time a pointer to the variable \"b\" also exists.\n");
    printf("And it has a value of %p.\n", &b);
    printf("Thus\n");
    printf(" b=%p\n", b);
    printf("*b=%d\n", *b);
    printf("&b=%p\n", &b);

    printf("##############################################################################\n");
    printf("Beeing a pointer the variable \"b\" could be used to change the value of another variable by using the operator \"*\".\n");
    *b = 5;
    printf("After *b = 5; is done the value of \"a\" has changed to %d.\n", a);

    // сделать так, чтобы b указывало на c
    printf("##############################################################################\n");
    printf("No any doubt our pointer \"b\" could point to a variable of any choice.\n");
    printf("For example, doing b=&c; we try to make it point to the value of \"c\".\n");
    printf("But still \"*b\" points to the value of \"a\". Look, *b returns %d\n", *b);
    printf("Why?\n");
    printf("Because \"c\" hasn't yet been assigned any meaningful value. Look, it returns some strange integer %d.\n", c);
    printf("After \"c\" has acquired a value, like c = 35; and starts to return something useful like %d;\n", c=35);
    b=&c;
    printf("by doing b=&c; we could finally change the value of *b. It returns now %d.\n", *b);

    // можно ли после этого работать через b c a ?
    printf("From now on we can't use \"b\" to manipulate with the value of \"a\",\n");
    printf("while \"b\" has value of %p, ", b); printf ("but &a returns %p.\n", &a);

    // если b указывает на c, написать scanf(%d, ...), изменяющий то, чему равно c, но с в scanf писать нельзя
    printf("As a pointer to the value of \"c\" \"b\" could be used now to change it.\n");
    printf("Input a number : ");
    scanf("%d", &*b);
    printf("Using &*b in scanf we change the value of \"c\" to %d.\n", *b);
    printf("So, that \"c\" returns now %d.\n", c);


    return 0;
}
