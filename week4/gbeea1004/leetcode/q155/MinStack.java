import java.util.ArrayList;
import java.util.EmptyStackException;
import java.util.List;

public class MinStack {
    private static final int DEFAULT_CAPACITY = 10;
    private List<Integer> elementData;

    public MinStack() {
        this.elementData = new ArrayList<>(DEFAULT_CAPACITY);
    }

    public void push(int val) {
        elementData.add(val);
    }

    public void pop() {
        if (elementData.isEmpty()) {
            throw new EmptyStackException();
        }
        elementData.remove(elementData.size() - 1);
    }

    public int top() {
        return elementData.get(elementData.size() - 1);
    }

    public int getMin() {
        return elementData.stream().mapToInt(e -> e).min().orElseThrow(EmptyStackException::new);
    }
}