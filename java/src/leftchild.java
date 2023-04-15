import java.io.*;
import java.math.*;
import java.util.*;

public class leftchild
{
    static int N = (int) 1e5;
    static ArrayList<Integer> shu[] = new ArrayList[N + 10];

//    �洢���ڵ���뵱ǰ�ڵ��������
    static int f[] = new int[N + 10];

    static void dfs(int u)
    {
//        ������ǰ�����ӽڵ�
        for (int i : shu[u])
        {
//            ��ǰ�ڵ������ڵ�ľ���  =  ���ڵ������ڵ�����ľ���  +  ��ǰ�ڵ���ӽڵ���(Ҫʹ�ýڵ�����Ļ�, Ҳ���������������ڵ����������һ��)
            f[i] = f[u] + shu[u].size();
            dfs(i);
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++)
            shu[i] = new ArrayList<Integer>();

        for (int i = 2; i <= n; i++)
        {
            int x = sc.nextInt();
            shu[x].add(i);
        }

        dfs(1);
        
        int max = 0;
        for (int i = 1; i <= n; i++)
            max = Math.max(max, f[i]);
        System.out.println(max);
    }
}