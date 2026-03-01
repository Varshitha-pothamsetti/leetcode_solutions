// Last updated: 01/03/2026, 20:21:12
bool escapeGhosts(int** ghosts, int ghostsSize, int* ghostsColSize, int* target, int targetSize) {
    int total=abs(target[0])+abs(target[1]);
    for(int i=0;i<ghostsSize;i++){
        int temp=abs(ghosts[i][0]-target[0])+abs(ghosts[i][1]-target[1]);
            if(temp<=total)
                return false;
    }
    return true;
}