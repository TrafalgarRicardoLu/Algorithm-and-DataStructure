import org.junit.Test;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public class Sulotion448 {
    @Test
    public void test() {
        System.out.println(findDisappearedNumbers(new int[]{4,3,2,7,8,2,3,1}));
    }

    public List<Integer> findDisappearedNumbers(int[] nums) {
        HashMap<Integer,Integer> hashMap = new HashMap<Integer, Integer>();
        List<Integer> list = new ArrayList<Integer>();
        for(int i:nums){
            hashMap.put(i,1);
        }
        for(int i=1;i<=nums.length;i++){
            if(hashMap.containsKey(i)){
                continue;
            }else {
                list.add(i);
            }
        }
        return list;
    }
}

