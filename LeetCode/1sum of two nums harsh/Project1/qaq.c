#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <uthash.h>

struct hashTable {
	int key;
	int val;
	UT_hash_handle hh;
};

struct hashTable* hashtable;

struct hashTable* find(int ikey) {
	struct hashTable* tmp;
	HASH_FIND_INT(hashtable,&ikey,tmp);
	return tmp;
}

void insert() {
	struct hashTable* it = find(ikey);
	if (it == NULL) {

	}
}