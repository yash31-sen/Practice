import collections

class Solution(object):
    def maximumInvitations(self, favorite):
         n = len(favorite)
         indegree,vis, queue, dp = [0]*n, [False]*n, deque([]), [0]*n
         for person in range(n): indegree[favorite[person]]+=1
         for person in range(n):
            if not indegree[person]:
                vis[person]=True
                queue.append(person)
         while queue:
            person = queue.popleft()
            fav = favorite[person]
            dp[fav], indegree[fav] = max(dp[fav],dp[person]+1), indegree[fav]-1
            if not indegree[fav]:
                vis[fav]=True
                queue.append(fav)
         type1,type2 = 0,0
         for person in range(n):
            if not vis[person]:
                cur,length = person,0
                while not vis[cur]: vis[cur], cur, length = True, favorite[cur], length+1
                if length==2: type1+= (dp[person]+dp[favorite[person]]+2) 
                else: type2= max(type2,length)
         return max(type1,type2)

    def departmentLearningEfficacy(self, learningEfficiency, idE, teamID, employeeSelected, Q):
        # Create a dictionary to store the team IDs and the list of employees in each team
        teamDict = collections.defaultdict(list)
        for i in range(len(idE)):
            teamDict[teamID[i]].append(i)

        # Initialize the department's learning efficiency
        departmentLearningEfficiency = sum(learningEfficiency)

        # Iterate over the Q learning projects
        for i in range(Q):
            # Get the ID of the employee who is selected for the project
            selectedEmployeeID = employeeSelected[i][0]

            # Get the team ID of the selected employee
            teamID = teamID[selectedEmployeeID]

            # Get the list of employees in the selected employee's team
            teamMembers = teamDict[teamID]

            # Remove the selected employee from the team
            teamMembers.remove(selectedEmployeeID)

            # Sort the team members in decreasing order of their learning efficiency
            teamMembers.sort(key=lambda x: learningEfficiency[x], reverse=True)

            # Get the K lowest learning efficiencies in the team
            lowestKLearningEfficiencies = teamMembers[:employeeSelected[i][1]]

            # Reduce the learning efficiency of all employees participating in the project to 0
            for employeeID in lowestKLearningEfficiencies:
                learningEfficiency[employeeID] = 0

            # Update the department's learning efficiency
            departmentLearningEfficiency -= sum(lowestKLearningEfficiencies)

        return departmentLearningEfficiency

