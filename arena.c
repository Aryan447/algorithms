#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *base;
    size_t used;
    size_t cap;
} Arena;

Arena arena_create(size_t cap) {
    Arena a;

    a.base = malloc(cap);
    a.used = 0;
    a.cap = cap;

    return a;
}

void *arena_alloc(Arena *a, size_t size) {
    if (a->used + size > a->cap) {
        return NULL;
    }
    void *ptr = a->base + a->used;
    a->used += size;

    return ptr;
}

void arena_reset(Arena *a) { a->used = 0; }

void arena_free(Arena *a) {
    free(a->base);
    a->base = NULL;
    a->used = 0;
    a->cap = 0;
}

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Arena a = arena_create(200);

    Person *p1 = arena_alloc(&a, sizeof(Person));
    Person *p2 = arena_alloc(&a, sizeof(Person));

    strcpy(p1->name, "Foo");
    strcpy(p2->name, "Bar");

    p1->age = 22;
    p2->age = 40;

    printf("%s %d\n", p1->name, p1->age);
    printf("%s %d\n", p2->name, p2->age);

    arena_reset(&a);

    Person *p3 = arena_alloc(&a, sizeof(Person));
    strcpy(p3->name, "Baz");
    p3->age = 60;
    printf("%s %d\n", p3->name, p3->age);

    printf("After reset\n");
    printf("%s %d\n", p1->name, p1->age);
    printf("%s %d\n", p2->name, p2->age);

    arena_free(&a);
    printf("Arena Freed Successfully\n");

    return 0;
}
