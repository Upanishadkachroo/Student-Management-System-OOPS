#include<bits/stdc++.h>
using namespace std;
#include "bird.h"

void birddoessomehting(Bird *bird){
    bird->eat();
    bird->fly();
}

int main(){
    Bird *bird=new sparrow();
    Bird *bird1=new eagle();
    birddoessomehting(bird);
    birddoessomehting(bird1);
}