contracts = {
    'transaction_ID': 45546,
    'reciever_wallet': 4233,
    'sender_wallet': 68906,
    'data': 9586,
    'reward': 1298084
            }

block = {
    'index': 3424,
    'timestamp': 6987,
    'proof': 3497,
    'previous_proof': 937495,
    'contracts': contracts
}

for i in block:
    if i == 'contracts':
        for a in block['contracts']:
            print(f"{a} = {block['contracts'][a]}")
    else:
        print(f"{i} = {block[i]}")