void combination(int index, int B, vector<int> &ARR, vector<int> &temp, vector<vector<int>> &answer)
{
    if (index == ARR.size())
    {
        if (B == 0)
        {
            answer.push_back(temp);
        }
        return;
    }

    // picking that number
    if (ARR[index] <= B)
    {
        temp.push_back(ARR[index]);
        combination(index, B - ARR[index], ARR, temp, answer);
        temp.pop_back();
    }

    // not picking that number
    combination(index + 1, B, ARR, temp, answer);
}

vector<vector<int>> combSum(vector<int> &ARR, int B)
{
    // Write your code here
    // Return a vector of sorted vectors/combinations
    vector<vector<int>> answer;
    vector<int> temp;

    combination(0, B, ARR, temp, answer);

    return answer;
}