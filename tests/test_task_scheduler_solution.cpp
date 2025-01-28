
#include <gtest/gtest.h>
#include <include/task_scheduler_solution.hpp>

using namespace medium;

class TaskSchedulerSolutionTest: public ::testing::Test { };

TEST_F(TaskSchedulerSolutionTest, assertIdleCharacterIsIntroducedCorrectly) {
    const std::vector tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    const auto taskScheduler = std::make_shared<TaskSchedulerSolution>();
    ASSERT_EQ(taskScheduler->leastInterval(tasks, 2), 8);
}

TEST_F(TaskSchedulerSolutionTest, assertFourDifferentCharactersAreHandledCorrectly) {
    const std::vector tasks = {'A', 'C', 'A', 'B', 'D', 'B'};
    const auto taskScheduler = std::make_shared<TaskSchedulerSolution>();
    ASSERT_EQ(taskScheduler->leastInterval(tasks, 1), 6);
}

TEST_F(TaskSchedulerSolutionTest, assertIdleCharacterIsHandledCorrectlyWithBigN) {
    const std::vector tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    const auto taskScheduler = std::make_shared<TaskSchedulerSolution>();
    ASSERT_EQ(taskScheduler->leastInterval(tasks, 3), 10);
}
