class MyHashMap
{
public:
    std::vector<int> a = std::vector<int>(1000001);
    MyHashMap()
    {
        fill(a.begin(), a.end(), -1);
    }

    void put(int key, int val)
    {
        a[key] = val;
    }

    int get(int key)
    {
        return a[key];
    }

    void remove(int key)
    {
        a[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */