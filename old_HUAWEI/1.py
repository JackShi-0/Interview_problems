import sys
inputs = []
for line in sys.stdin:
    inputs.append(line.strip().split())

dic = {'a':0,'b':0,'c':0,'d':0,'e':0,'f':0,'g':0,
'h':0,'i':0,'j':0,'k':0,'l':0,'m':0,'n':0,'o':0,'p':0,'q':0,'r':0,'s':0,'t':0,'u':0,'v':0,'w':0,'x':0,'y':0,'z':0}
teams = []
for teamscore in inputs:
    if teamscore[1][0] > teamscore[1][2]:
        dic[teamscore[0][0]] += 3
        dic[teamscore[0][2]] += 0
    elif teamscore[1][0] == teamscore[1][2]:
        dic[teamscore[0][0]] += 1
        dic[teamscore[0][2]] += 1
    elif teamscore[1][0] < teamscore[1][2]:
        dic[teamscore[0][0]] += 0
        dic[teamscore[0][2]] += 3
    teams.append(teamscore[0][0])
    teams.append(teamscore[0][2])
res = []

for team in set(teams):
    res.append([team,dic[team]])
results = sorted(res, key=lambda x:x[1], reverse=True)
string = ",".join((" ".join(str(i) for i in result)for result in results))
print(string)