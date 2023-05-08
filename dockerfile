FROM gcc:latest

WORKDIR /app

RUN git clone https://github.com/akablimustapha/DV.git --branch main  && \
 ls /app/DV  && \
 cd /app/DV && \
gcc -o index index.c
gcc -o script script.c

ENTRYPOINT ["./DV/script"]

CMD ["./DV/index"]
