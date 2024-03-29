class MyCalendar
{
public:
    set<pair<int, int>> events;
    MyCalendar()
    {
    }
    bool book(int start, int end)
    {
        auto next = events.upper_bound({start, start});
        if (next != events.end() && (*next).second < end)
            return false;
        events.insert({end, start});
        return true;
    }
};
