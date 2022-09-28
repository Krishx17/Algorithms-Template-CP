import java.util.*;
import java.util.stream.Collectors;
public class ConvertA2DArrayIntoListOfLists{
    public static void main(String[] args) {
        int[][] twoDArray = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

        List< List<Integer> > nestedLists =
        Arrays.
        //Convert the 2d array into a stream.
        stream(twoDArray).
        //Map each 1d array (internalArray) in 2d array to a List.
        map(
                //Stream all the elements of each 1d array and put them into a list of Integer.
                internalArray -> Arrays.stream(internalArray).boxed().collect(Collectors.toList()
            )
        //Put all the lists from the previous step into one big list.
        ).collect(Collectors.toList());
        
        nestedLists.forEach(System.out::println);
            // public List<Integer> twoDArrayToList(int[][] twoDArray) {
            //     List<Integer> list = new ArrayList<Integer>();
            //     for (int[] array : twoDArray) {
            //         list.addAll(Arrays.asList(array));
            //     }
            //     return list;
            // }

    }

   
}

