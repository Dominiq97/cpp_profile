#include <iostream>
#include <string.h>
#include <stdbool.h>
#include<iostream>
#include<string>

using namespace std;

bool good(int mp[][5], int r, int c, bool visited[][5]){
    if ((r >= 0) && (r < 5) && (c >= 0) && (c < 5) && (mp[r][c] && !visited[r][c]))
        return true;
    else
        return false;
}

bool letterGood(int letter[][3], int r, int c, bool visited[][3]){
    if ((r >= 0) && (r < 3) && (c >= 0) && (c < 3) && (letter[r][c] && !visited[r][c]))
        return true;
    else
        return false;
}


void dfs(int mp[][5], int r, int c, bool visits[][5]){
    int linie[] = {1,1,1,0,0,-1,-1,-1};
    int coloana[] = {1,0,-1,1,-1,1,0,-1};
    visits[r][c] = true;
    int k = 0;
    while(k < 8){
        if (good(mp, linie[k]+r, coloana[k]+c, visits)){
            dfs(mp, linie[k]+r, c+coloana[k], visits);
        }
        k++;
    }
}

bool isGood(string n){
    if(n.length()==9){
        return true;
    }else{
        return false;
    }
}

/*
string[] islandName(char let[][3]){
    bool visited[3][3];
    memset(visited, 0, sizeof(visited));

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            string c = "";
            if(let[i][j] && (visited[i][j]==false)){
                dfs(let, i, j ,visited);
                c += let[i][j];
            }
        }
    }
    return
}
*/
int counting(int mp[][5]){
    bool visited[5][5];
    memset(visited, 0, sizeof(visited)); //fill block of memory
    int nr = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (mp[i][j] && (visited[i][j]==false)){
                dfs(mp, i, j, visited);
                nr++;
            }
    return nr;
}



int main(){
    cout<<"The map : \n";
    cout<<"----------\n";
    int map[][5]= {
        {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1},
        {1, 0, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 0, 1, 0, 1}
    };

    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cout <<map[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"----------\n";

    cout<<"There are "<< counting(map)<< " islands on the map";
    char paper[3][3]=
    {{'K','A','W'},
     {'L','A','E'},
     {'O','O','H'}};





    return 0;
}
