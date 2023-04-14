int gcd(int num1, int num2)
{

    if (num1 < num2)
    {

        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int gcd = 1;


      if (num1 % num2 == 0)
        {

            return num2;
        }

    for (int i = 2; i <= num2; i++)
    {
      
        if (num1 % i == 0 && num2 % i == 0)
        {

            gcd = gcd * i;
            num1 = num1 / i;
            num2 = num2 / i;
            i--;
            continue;
        }
        
    }


return gcd;

}

int main()
{

int n1,n2,n3;

printf("enter n1 and n2:");
scanf("%d %d",&n1,&n2);


n3=gcd(n1,n2);

printf("gcd of %d and %d is %d",n1,n2,n3);






}
