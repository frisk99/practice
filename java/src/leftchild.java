import java.io.*;
import java.math.*;
import java.util.*;

public class leftchild
{
    static int N = (int) 1e5;
    static ArrayList<Integer> shu[] = new ArrayList[N + 10];

//    存储根节点距离当前节点的最大距离
    static int f[] = new int[N + 10];

    static void dfs(int u)
    {
//        遍历当前所有子节点
        for (int i : shu[u])
        {
//            当前节点距离根节点的距离  =  父节点距离根节点最深的距离  +  当前节点的子节点数(要使该节点最深的话, 也就是这个点在兄年节点中最下面的一个)
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