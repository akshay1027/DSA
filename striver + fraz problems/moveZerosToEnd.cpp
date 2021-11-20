void pushZerosAtEnd(vector<int> &arr)
{
    int counter = 0;
    // 0 1 2 0 10
    for (int i = 0; i < arr.size(); i++)
    {
        // if (arr[i] == 0)
        // {
        //     arr.erase(arr.begin() + i);
        //     arr.push_back(0);
        // }
        if (arr[i] != 0)
        {
            arr[counter] = arr[i];
            counter++;
        }
    }
    for (int i = counter; i < arr.size(); i++)
        arr[i] = 0;
}