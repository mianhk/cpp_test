

struct CacheNode
{
    int key;
    int value;

    struct Node *next;
    struct Node *prev;
    CacheNode(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
};

class LRUCache
{
  public:
    LRUCache(int capacity) : cap(capacity), head(nullptr) {}
    ~LRUCache() {}
    void moveToHead(CacheNode *node)
    {
        if (node->prev == nullptr)
            return;
        node->prev->next = node->next;
        if (node->next != nullptr)
            node->next->prev = node->prev;
        node->prev = nullptr;
        node->next = head;
        head->prev = node;
        head = node;
    }

    void deleteLastNode()
    {
        CacheNode *node = head;
        while (node->next != nullptr)
            node = node->next;
        nodes.erase(node->key);
        if (node == head)
            head = nullptr;
        else
        {
            node->prev->next = nullptr;
            delete node;
            node = nullptr;
        }
    }
    int get(int key)
    {
        auto it = nodes.find(key);
        if (it != node.end())
        {
            CacheNode *curr = it->second;
            moveToHead(curr);
            return head->val;
        }
        else
            return -1;
    }
    void put(int key, int value)
    {
        CacheNode *node = new CacheNode(key, value);
        if (get(key) == -1)
        {
            if (nodes.size() == 0)
                head = node;
            else
            {
                if (nodes.size() >= cap)
                    deleteLastNode();
                if (head == nullptr)
                    head = node;
                else
                {
                    head->prev = node;
                    node->next = head;
                    head = node;
                }
            }
            nodes.insert(make_pair(key, node));
        }
        else if (nodes[key]->value != value)
            nodes[key]->value = value;
    }

  private:
    int cap;
    // int _real_size;
    CacheNode *head;
    std::unordered_map<int, CacheNode *> nodes;
}
