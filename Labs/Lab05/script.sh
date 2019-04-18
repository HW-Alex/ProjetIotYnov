sudo docker volume create mytb-data
sudo docker volume create mytb-logs
sudo docker run -it -p 9090:9090 -p 1883:1883 -p 5683:5683/udp -v mytb-data:/data -v ~/mytb-logs:/var/log/thingsboard --name mytb --restart always thingsboard/postgres