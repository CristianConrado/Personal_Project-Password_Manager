#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Python.h>
#include <sqlite3.h>
#include "libpasswordcreator.h"


int connect_to_database();
int checkUser(const char *username, const char *password);
int addUser(const char *username, const char *password);
char* checkSite(const char* site, const char* id);
void free_memory(char* ptr);
PyObject* wrapping_checkSite(const char *username, const char *password);
PyObject* createPasswordPy(const char *site, const char *id);