import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedList;

public class StrandSort{
    public static <E extends Comparable<? super E>>
    LinkedList<E> strandSort(LinkedList<E> list){
        if(list.size() <= 1) return list;

        LinkedList<E> result = new LinkedList<>();
        while(list.size() > 0){
            LinkedList<E> sorted = new LinkedList<>();
            sorted.add(list.remove());
            for(Iterator<E> iterator = list.iterator(); iterator.hasNext(); ){
                E element = iterator.next();
                if (sorted.peekLast() != null && sorted.peekLast().compareTo(element) <= 0) {
                    sorted.add(element);
                    iterator.remove();
                }
            }
            result = merge(sorted, result);
        }
        return result;
    }

    private static <E extends Comparable<? super E>>
    LinkedList<E> merge(LinkedList<E> left, LinkedList<E> right){
        LinkedList<E> result = new LinkedList<>();
        while(!left.isEmpty() && !right.isEmpty()){
            if(left.peek().compareTo(right.peek()) <= 0)
                result.add(left.remove());
            else
                result.add(right.remove());
        }
        result.addAll(left);
        result.addAll(right);
        return result;
    }

    public static void main(String[] args){
        System.out.println(strandSort(new LinkedList<>(Arrays.asList(5, 3, 1, 2, 4))));
        System.out.println(strandSort(new LinkedList<>(Arrays.asList(4, 4, 1, 5, 2, 3))));
        System.out.println(strandSort(new LinkedList<>(Arrays.asList(7, 5, 8, 9, 1, 0, 3, 6, 2, 4))));
    }
}
