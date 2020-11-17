import json

in_file = open('in.json', 'r')
json_ob = json.load(in_file)

users = []

for work in json_ob:
    user = {}
    if work['completed']:
        user['task_completed'] = 0
        user['userId'] = 0
        run = True
        it = 0
        for id in users:
            if id['userId'] == work['userId']:
                run = False
                users[it]['task_completed'] += 1
                break
            it += 1
        if run:
            user['userId'] = work['userId']
            user['task_completed'] += 1
            users.append(user)

out_file = open('out.json', 'w')
out_file.write(json.dumps(users, indent=2))