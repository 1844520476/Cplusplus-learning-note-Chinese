void heroinput(hero hArray[N],int N)
{
    srand=((unsigned)time(NULL));
    for(int i=0;i<N;i++)
    {
        hArray[i].age=rand()%(MAX-MIN+1)+MIN;
        string nameseed="ABCDE";
        hArray[i].name="hero_";
        hArray[i].name+=nameseed[i];
        hArray[i].bool=rand()%1;
    }
}