# 2022cce[week06]
(1)
STEP.1畫星星 
STEP.2利用「左手i、右手j」的口訣, 來思考迴圈執行的樣子, 
STEP.3把 i:5 i:4 i:3 i:2 i:1 印出來
```cpp
#include <stdio.h>
int main()
{
    ///for(int i=0; i<5; i++){
    ///     printf("i:%d\n", i);
    ///}
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("i:%d星星\n", i);
    }
}
```

(2)
有了「左手i 當鷹架, 右手j 一直做」的口訣, 畫出等腰三角形。 因為星星的數量是 1 3 5 7 9, 而且空格的數量也很奇怪, 是 4 3 2 1 0, 所以先利用左手i 建出鷹架, 看到很多樓層。接下來, 再試著印出空格有幾個? 星星有幾個? 最後老師改用 for(int k=0; k<space; k++) 的迴圈, 來畫出空格, 利用 for(int k=0; k<star; k++) 的迴圈, 來畫出星星, 收尾時印跳行, 完成任務。請用 CodeBlocks 實作 week06-2.cpp 截圖上傳 week06-2.png
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        ///printf("%d樓 有%d星\n", i, 2*1-1);
        ///printf("%d樓 %d空格\n", i, 5-i);
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}///1樓4空格 1星
///2樓3空格 3星
///3樓2空格 5星
///4樓1空格 7星
///5樓0空格 9星
///          跟2有關係 2*1-1
```



(3)
解釋完畫星星後, 老師想教小學的約分。最直覺的方法, 就是暴力去試,把全部皫數字都試看看能不能整除、能不能約分。使用 1個for迴圈 for(int i=1; i<=a; i++) 去試全部的數, 這個數 i 如果可以兩個都整除 if(a%i==0 && b%i==0) 恭喜你找到答案了 ans = i; 請用 CodeBlocks實作 week06-3.cpp 截圖上傳 week06-3.png
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b);///51 68

    int ans; ///約分的答案 (最大通因數)
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0){
            ans = i;
        }
    }
    printf("ans: %d 可約分", ans);
    ///把答案印出來
}
```



(4) 
「輾轉相除法」可以找最大公因數。不過大家國中、高中應該都忘光了。聽說108課綱的國中生也不用學輾轉相除法, 因為有點難理解, 其他國家的國中生也不教這個內容。但是這真的是很巧妙的方法,可以快速約分哦 口訣老大a、老二b、老三c=a%b 如果是0 則老二b是答案。老二變老大、老三變老二, 繼續做,就成功了。請用 CodeBlocks 實作 week06-4.cpp 裡面有把老大、老二、老三的數值印出來, 速度可以比暴力法快幾億倍。截圖上傳 week06-4.png
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d", &a, &b);
    while(1){
        c = a%b;
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("答案b: %d ", b);
}
```


# 2022cce[week07]
(1)
STEP.1 long long int 
```cpp
#include <stdio.h>
int main()
{
    int n=9876543210;
    printf("int 印出來 %d\n", n);

    long long int a=9876543210;
    printf("long long int 印出來 %lld\n", a);
}
```






(2)
STEP.1 最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int ans;
    for(long long int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("最大公因數是:%lld\n", ans);
}
```


(3)
STEP.1 long long int很長的整數
```cpp
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld", &a, &b);
    while(1){
        c = a % b;
        printf("a:%lld b:lld c:lld\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
    }
    printf("答案是: %lld\n", b);
}
```





(4)
STEP.1 十進位轉二進位
STEP.2 利用 " 剝皮 " 的技巧
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

    printf("現在的個位數:%d\n", n%10);
    n =n / 10;

}
```


#2022cce[week08]
STEP.1質數
```CPP

(1)
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2; i<n; i++){
        if( n%i==0 ) bad=1;
    }
    if(bad==0) printf("%d",n);
    else printf("%d不好,不是質數",n);
}
```


(2)
STEP.1判斷質數
STEP.2利用迴圈
```CPP

#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int n=2; n<=a; n++){

		int bad=0;
		for(int i=2; i<n; i++){
			if(n%i==0) bad=1;
	    }
		if(bad==0) printf("%d ",n);
	}

}
```

(3)
STEP.1 利用 SUM 迴圈
```CPP

#include <stdio.h>
int main()
{
    printf("請輸入 5個數字(要加起來): ");

    int n;
    int sum=0;
    for(int i=0; i<5; i++){
        scanf("%d",&n);
        sum += n;
    }
    printf("總和是:%d",sum);
}
```


(4)
STEP.1 直角三角形
```CPP

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++) printf(" ");
        for(int k=1; k<=i; k++) printf("*");
        printf("\n");
    }
}
```

(5)
```CPP
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
            if(k<=n-i)printf(" ");
            else    printf("*");
        }
        printf("\n");
    }
}
```

(6)
```CPP
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int i=1;
	while(i<=n){
	
		if(k<=n-i) printf(" ");
		else printf("*");
		
		k++;
	}
	
	printf("\n")
	i++;
}
```























