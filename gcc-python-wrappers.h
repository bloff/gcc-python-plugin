#ifndef INCLUDED__WRAPPERS_H
#define INCLUDED__WRAPPERS_H

#include "tree-pass.h"

PyMODINIT_FUNC initoptpass(void);
PyMODINIT_FUNC inittree(void);

extern PyObject *
gcc_python_make_wrapper_tree(tree t);

extern PyObject *
gcc_python_make_wrapper_opt_pass(struct opt_pass *ptr);

#endif /* INCLUDED__WRAPPERS_H */