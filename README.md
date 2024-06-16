<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <h1>minitalk</h1>
    <p>Welcome to the <strong>minitalk</strong> repository! This project implements a small data exchange program using UNIX signals to send messages between a client and a server.</p>
    <h2>Features</h2>
    <ul>
        <li><strong>Client-Server Communication</strong>: Enables sending and receiving messages between two processes.</li>
        <li><strong>Signal Handling</strong>: Utilizes UNIX signals (SIGUSR1 and SIGUSR2) for communication.</li>
        <li><strong>Robust Implementation</strong>: Handles various edge cases and errors effectively.</li>
    </ul>
    <h2>Getting Started</h2>
    <p>To use this program, clone the repository and compile the source files.</p>
    <pre>
        <code>
            git clone https://github.com/eryilmaz1337/minitalk.git
            cd minitalk
            make
        </code>
    </pre>
    <h2>Usage</h2>
    <p>Run the server first and note its PID, then run the client with the server PID and the message:</p>
    <pre>
        <code>
            ./server
            ./client [server_pid] "Your message here"
        </code>
    </pre>
    <h1>minitalk</h1>
    <p>Bu projeye hoş geldiniz! Bu proje, bir istemci ve bir sunucu arasında UNIX sinyallerini kullanarak mesaj gönderen küçük bir veri değişim programı uygular.</p>
    <h2>Özellikler</h2>
    <ul>
        <li><strong>İstemci-Sunucu İletişimi</strong>: İki işlem arasında mesaj gönderme ve alma.</li>
        <li><strong>Sinyal İşleme</strong>: İletişim için UNIX sinyallerini (SIGUSR1 ve SIGUSR2) kullanır.</li>
        <li><strong>Sağlam Uygulama</strong>: Çeşitli kenar durumları ve hataları etkili bir şekilde yönetir.</li>
    </ul>
    <h2>Başlarken</h2>
    <p>Bu programı kullanmak için depoyu klonlayın ve kaynak dosyaları derleyin.</p>
    <pre>
        <code>
            git clone https://github.com/eryilmaz1337/minitalk.git
            cd minitalk
            make
        </code>
    </pre>
    <h2>Kullanım</h2>
    <p>Önce sunucuyu çalıştırın ve PID'sini not alın, ardından istemciyi sunucu PID'si ve mesaj ile çalıştırın:</p>
    <pre>
        <code>
            ./server
            ./client [server_pid] "Mesajınız burada"
        </code>
    </pre>
</body>
</html>
