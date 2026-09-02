class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> record;
        for(string op : operations)
        {
            if(op == "+")
            {
                int firstElement = record.top();
                record.pop();
                int secondElement = record.top();
                record.push(firstElement);
                record.push(firstElement + secondElement);
            }
            else if(op == "D")
            {
                record.push(record.top() * 2);
            }
            else if(op == "C")
            {
                record.pop();
            }
            else{
                record.push(stoi(op));
            }
        }
        int total = 0;
        while(!record.empty())
        {
            total += record.top();
            record.pop();
        }
        return total;
    }
};