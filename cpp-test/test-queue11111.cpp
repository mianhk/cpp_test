#include <queue>
#include <memory>
#include <mutex>
using namespace std;

struct SensorData
{
    long long timestamp;
};

struct SonarData : public SensorData
{
};
struct IMUData : public SensorData
{
};
struct CameraData : public SensorData
{
};

struct SyncedQueue
{
    SyncedQueue(int size) : size(size)
    {
    }
    SyncedQueue(SyncedQueue const &rhs)
    {
        std::unique_lock<std::mutex> lock(rhs.mut);
        data_queue = rhs.data_queue;
        size = rhs.size;
    }
    bool enqueue(SensorData *data)
    {
        std::unique_lock<std::mutex> lock(mut);
        if (data_queue.size() == size)
            return false;
        data_queue.push(data);
        return true;
    }
    bool dequeue(SensorData *data)
    {
        std::unique_lock<std::mutex> lock(mut);
        if (data_queue.empty())
            return false;
        data = data_queue.front();
        data_queue.pop();
        return true；
    }
    ~SyncedQueue()
    {
        while (!data_queue.empty())
        {
            SensorData *temp = data_queue.front();
            data_queue.pop();
            delete temp;
        }
    }

  private:
    mutable std::mutex mut;
    int size;
    std::queue<SensorData *> data_queue;
};
