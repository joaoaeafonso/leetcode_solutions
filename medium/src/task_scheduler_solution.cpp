

#include <queue>
#include <include/task_scheduler_solution.hpp>

namespace medium {

    int TaskSchedulerSolution::leastInterval(const std::vector<char> &tasks, const int n) {
        if(n < 0 || tasks.empty()) {
            return -1;
        }

        std::map<char, int> seqMap{};
        for(const auto& c: tasks) {
            seqMap[c]++;
        }

        std::priority_queue<std::pair<int, char>> maxHeap;
        for(const auto&[c, n]: seqMap) {
            maxHeap.emplace(n, c);
        }

        std::queue<std::pair<int, char>> cooldownQueue;
        std::vector<char> result;

        int index = 0;
        while( !maxHeap.empty() || !cooldownQueue.empty() ) {
            if (!cooldownQueue.empty() && cooldownQueue.front().first == index) {
                maxHeap.emplace(
                    seqMap[cooldownQueue.front().second],
                    cooldownQueue.front().second
                );
                cooldownQueue.pop();
            }

            if(!maxHeap.empty()) {
                auto [freq, c] = maxHeap.top();
                maxHeap.pop();

                result.push_back(c);
                seqMap[c]--;

                if (seqMap[c] > 0) {
                    cooldownQueue.emplace(index + n + 1, c);
                }
            } else {
                result.push_back('_');
            }
            index++;
        }

        return static_cast<int>(result.size());
    }

}
