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
        assertThat(solution.solution(11, new int[]{1, 4, 1, 2, 4, 2, 4, 2, 3, 4, 4}, 2)).isEqualTo(3);
    }

    @Test
    void testCase2() {
        assertThat(solution.solution(11, new int[]{1, 4, 1, 2, 4, 2, 4, 2, 3, 4, 4}, 5)).isEqualTo(0);
    }
}
