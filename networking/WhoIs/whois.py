import socket
import sys

query = sys.argv[1]

WHOISSERVERS = '.whois-servers.net'

#trim tld
pos = query.rfind('.')
tld = query[pos+1:]

#connect to tld.whois-servers.net on poet 43
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((tld + WHOISSERVERS, 43))

#send query followed by Carriage Return and Newline
s.send(query + '\r\n')

#Build response
response = ''
while True:
    d = s.recv(4096)
    response += d
    if not d:
        break
s.close()

#output results
print response
