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
        assertThat(solution.solution(9, new int[]{5, 12, 7, 10, 9, 1, 2, 3, 11}, 13)).isEqualTo(3);
    }

    @Test
    void testCase2() {
        assertThat(solution.solution(4, new int[]{4, 3, 2, 1}, 5)).isEqualTo(2);
    }

    @Test
    void testCase3() {
        assertThat(solution.solution(3, new int[]{3, 2, 1}, 3)).isEqualTo(1);
    }
}
