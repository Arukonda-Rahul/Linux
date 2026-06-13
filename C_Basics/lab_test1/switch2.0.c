#include <stdio.h>
int main()
{
    int y,m,d;
    printf("enter d-m-y:");
    scanf("%d-%d-%d",&d,&m,&y);
    switch(y>=1900&&y<=2200)
    {
        case 1:switch(m)
        {
            case 1:switch(d<=31)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 2:switch(y%100!=0&&y%4==0||y%400==0)
            {
                case 1:switch(d<=29)
                {
                    case 1:printf("valid");
                    break;
                    case 0:printf("invalid");
                    break;
                }
                break;
                case 0:switch(d<=28)
                {
                    case 1:printf("valid");
                    break;
                    case 0:printf("invalid");
                    break;
                }
                break;
            }
            break;
            case 3:switch(d<=31)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 4:switch(d<=30)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 5:switch(d<=31)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 6:switch(d<=30)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 7:switch(d<=31)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 8:switch(d<=31)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 9:switch(d<=30)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 10:switch(d<=31)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 11:switch(d<=30)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
            case 12:switch(d<=31)
            {
                case 1:printf("valid");
                break;
                case 0:printf("invalid");
                break;
            }
            break;
	    default:printf("invalid");
	    break;
        }
	break;
	default:printf("invalid");
        break;
    }
    

    return 0;
}

