#Create 30 SeviceGroups in NS

#!/bin/bash
for i in {1..30}
do
	nscli -U :nsroot:nsroot "add serviceGroup sg$i HTTP"
	nscli -U :nsroot:nsroot "bind serviceGroup sg$i 10.158.151.242 80"
done
