For compressing the array
rep(i,0,n) b[i]=a[i];
sort(b,b+n);
rep(i,0,n) a[i]=((lower_bound(b,b+n,a[i]))-b)+1;
