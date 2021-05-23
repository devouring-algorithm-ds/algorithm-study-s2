import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import static org.assertj.core.api.Assertions.assertThat;

class SolutionTest {
    private Solution solution;

    @BeforeEach
    void setUp() {
        solution = new Solution();
    }

    @Test
    void testCase1() {
        final int N = 4;
        String[] inputTexts = new String[N];
        inputTexts[0] = "a a";
        inputTexts[1] = "ab ba";
        inputTexts[2] = "ring gnir";
        inputTexts[3] = "newt twan";

        String[] result = solution.solution(N, inputTexts);
        assertThat(result[0]).isEqualTo("Possible");
        assertThat(result[1]).isEqualTo("Possible");
        assertThat(result[2]).isEqualTo("Possible");
        assertThat(result[3]).isEqualTo("Impossible");
    }

    @Test
    void testCase2() {
        final int N = 3;
        String[] inputTexts = new String[N];
        inputTexts[0] = "ab a";
        inputTexts[1] = "aaa aaa";
        inputTexts[2] = "bb bbb";

        String[] result = solution.solution(N, inputTexts);
        assertThat(result[0]).isEqualTo("Impossible");
        assertThat(result[1]).isEqualTo("Possible");
        assertThat(result[2]).isEqualTo("Impossible");
    }
}
