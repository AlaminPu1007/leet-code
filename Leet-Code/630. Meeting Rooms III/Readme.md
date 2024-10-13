# 2402. Meeting Rooms III

This problem involved about, you are given an integer `n`. There are `n` rooms numbered from `0 to n - 1`.<br/>

You are given a 2D integer array meetings where `meetings[i] = [starti, endi]` means that a meeting will be held during the half-closed time interval `[starti, endi]`. All the values of start `i` are unique.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/meeting-rooms-iii/description/)

**Approach :**<br/>

1. **Sort Meetings**: Sort the list of `meetings` based on their start times.
2. **Initialize Data Structures**:
    - `meetingEndAt`: Vector to store meeting end hours with their room.
    - `countRoomUsed`: Vector to keep track of how many times each room is used.
3. **Assign Meetings to Rooms**: Iterate through each meeting and assign it to an available room or the room that will be free the earliest.
4. **Determine the Most Used Room**: Iterate through `countRoomUsed` to find the room with the maximum usage.

**Algorithm :**<br/>

1. Sort the `meetings` array based on start times.
2. Initialize `meetingEndAt` with zeros and `countRoomUsed` with zeros.
3. Iterate through each meeting:
    - Check each room to find an available one or keep track of the room that will be free the earliest.
    - If an available room is found, assign the meeting to that room.
    - If no room is available, schedule the meeting in the room that will be free the earliest.
4. After processing all meetings, find the room with the highest count in `countRoomUsed`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where `m` is the number of meetings, `n` is the number of rooms.
-   Time-Complexity: `O(n)` - for the `meetingEndAt` and `countRoomUsed` vectors.

<br/>
<br/>

### Optimal approach with priority queue

**Approach :**<br/>

1. **Sort Meetings**: Sort the list of `meetings` based on their start times.
2. **Initialize Priority Queues**:
    - `usedRooms`: Min-heap to store rooms currently in use, ordered by their end times.
    - `availableRooms`: Min-heap to store available room indices.
3. **Initialize Usage Counter**: A vector to count how many times each room is used.
4. **Process Meetings**:
    - For each meeting, release rooms that have finished their meetings before the current meeting starts.
    - If there are available rooms, assign the current meeting to the earliest available room.
    - If no rooms are available, extend the end time of the earliest ending room by the duration of the current meeting.
5. **Determine the Most Used Room**: Iterate through the usage counter to find the room used the most frequently.

**Algorithm :**<br/>

1. Sort the `meetings` array based on start times.
2. Initialize `usedRooms` and `availableRooms` as min-heaps.
3. Initialize `countRoomUsed` vector with zeros.
4. Push all room indices into `availableRooms`.
5. Iterate through each meeting:
    - Release all rooms that have meetings ending before the current meeting starts.
    - If there are available rooms:
        - Assign the current meeting to the earliest available room.
    - If no rooms are available:
        - Extend the meeting time of the earliest ending room.
6. After processing all meetings, find the room with the highest count in `countRoomUsed`.

**Time Complexity :**<br/>

-   Sorting the meetings: `O(m log (m))`, where `m` is the number of meetings.
-   Iterating through meetings and managing priority queues: `O(m log (n))`, where `n` is the number of rooms.
-   Overall time complexity: `O(m log (m) + m log (n))`.

**Space Complexity :**<br/>

-   `O(n)` for the `countRoomUsed` vector.
-   `O(n)` for the priority queues.