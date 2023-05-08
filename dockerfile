FROM gcc:latest

RUN apt-get update && apt-get install -y git


WORKDIR /app

RUN git clone https://github.com/akablimustapha/DV.git --branch main  && \
 ls /app/DV  && \
 cd /app/DV && \
gcc -o index index.c && \
gcc -o script script.c

ENTRYPOINT ["./DV/script"]

CMD ["./DV/index"]
