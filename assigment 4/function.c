#include <stdio.h>
int fun1 (int a){
	return a;
}
char fun2 (int x,int y,char c){
	return 'a';
}
void fun3(
char c, int a){
	return 'a';
}
void fun3(char c, int a){
	
}
int main() {
int a =10;
int x =fun1(a);
char ch= fun2(x,20, 'c');
fun3 (fun2(3,5,'d'),10);
return 0;
}