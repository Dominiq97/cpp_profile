#include <iostream>

using namespace std;

char *getDep (char *p){
    char *ps;
    int i = 0;
    while(p[i]!=' '){
        i++;
    }
    i++;
    ps=&p[i];
    return ps;
}

char *commaReplacer (char *p){
    char *ps;
    int len = strlen(p);
    c = p;
    for(int i = 0; i<len;i++){
        if(*p==','){
            *p=' ';
        }
    }
    return ps;
}

int main()
{

    char s[] = "Oltenita, CL"; //array of chars
    //cout<<getDep(s);
    //cout<<s;
    cout<<commaReplacer(s);
}
