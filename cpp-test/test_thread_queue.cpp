struct SyncedQueue
{
    bool enqueue(SensorData *data);
    bool dequeue(SensorData *data);
    private:
      mutable std::mutex mut;
      std::queue<T> data_queue;
};
