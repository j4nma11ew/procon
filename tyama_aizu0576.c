a,b,c,d,e;main(){scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);b=(b+d-1)/d,c=(c+e-1)/e;printf("%d\n",a-(b>c?b:c));exit(0);}