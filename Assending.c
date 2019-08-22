main.c
Earlier this year
5 May

You uploaded an item
C
main.c
main()
{
    int a[10]={0}, i=0 ,b=0 ,a1=0;
    printf("\a\n\n\t\t********** ASSENDING ORDER *************");
    for(i=0 ; i<=9 ; i++)
    {
        b++;
        printf("\n\n\t ENTER %d NUMBER %d",b, a[i]);
        scanf("%d",&a[i]);
    }
    a1=a[0];

    for(i=0 ;i<=9 ; i++)
    {
        if(a1>a[i])
        {
           a1=a[i];
        }
    }
    printf("%d",a1);


    for(i=0 ;i<=9 ; i++)
    {
        if(a1>a[i])
        {
           a1=a[i];
        }
    }







}
