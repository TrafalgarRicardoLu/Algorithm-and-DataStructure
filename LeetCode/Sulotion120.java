import com.sun.deploy.panel.ITreeNode;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class Sulotion120 {
    public static void main(String[] args) {
        List<List<Integer>> lists = new LinkedList<List<Integer>>();
        minimumTotal(lists);
    }
    public static int minimumTotal(List<List<Integer>> triangle) {
        for(int i = triangle.size() - 2; i >= 0; i--)
            for(int j = 0; j <= i; j++)
                triangle.get(i).set(j, triangle.get(i).get(j) + Math.min(triangle.get(i + 1).get(j), triangle.get(i + 1).get(j + 1)));
        return triangle.get(0).get(0);
    }
}
