//
// Trial on using function pointer
//

#include <stdio.h>

void func1() {
  printf("func1: Hello world!\n");
}

void func2() {
  printf("func2: Bad world!\n");
}

void func3(int a) {
  printf("func3: %d\n", a);
}

void call_func_ptr(void (*func)()) {
  func();
}

void call_func_ptr1(void (*func)(int), int a) {
  func(a);
}

int main(void) {
  call_func_ptr(func1);
  call_func_ptr(func2);
  call_func_ptr(func3); // Execute with a random integer
//  call_func_ptr(func3(1));
  call_func_ptr1(func3, 1);
}
