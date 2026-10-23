#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decl.h"
#include "expr.h"
#include "stmt.h"
#include "type.h"


/*
struct decl {
	char *name;
	struct type *type;
	struct expr *value;
	struct stmt *code;
	struct symbol *symbol;
	struct decl *next;
};
*/
void decl_translate(struct decl *d, char* cpp_translations) {
    // *decl is a linked list
    // while loop
    while (d->next) {
        type_translate(d->type, d->name, cpp_translations); // get the type and the id
        if (d->value) {
            expr_translate(d->value, cpp_translations);
        }

        if (d->type->kind == TYPE_FUNCTION) {
            
        }
        // then type, goes before identifier in cpp
        // then identifier name
        // then initial value
    }
}
