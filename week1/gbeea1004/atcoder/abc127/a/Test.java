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
        assertThat(solution.solution(30, 100)).isEqualTo(100);
    }

    @Test
    void testCase2() {
        assertThat(solution.solution(12, 100)).isEqualTo(50);
    }

    @Test
    void testCase3() {
        assertThat(solution.solution(0, 100)).isEqualTo(0);
    }

    @Test
    void testCase4() {
        assertThat(solution.solution(5, 100)).isEqualTo(0);
    }

    @Test
    void testCase5() {
        assertThat(solution.solution(13, 40)).isEqualTo(40);
    }

    @Test
    void testCase6() {
        assertThat(solution.solution(6, 40)).isEqualTo(20);
    }
}
