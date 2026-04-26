# Realizar un script bash que pida al usuario su nombre y muestre en pantalla el mensaje “Hola <nombre
# pasado por el usuario> voy a hacer backup de todos tus archivos del home” y luego del mensaje hace un backup
# (copia de respaldo) de todo el contenido del home. Puede suponer que ya está instalado el compresor de archivos zip y
# que para comprimir un directorio local llamado Pictures y todo su contenido se ejecuta: zip -r backup.zip Pictures/ Dar
# las instrucciones necesarias para ejecutar el script


echo "dame tu nombre"
read nombre
echo "hola $nombre voy a hacer backup de todos tus archivos del home"

zip -r backup.zip $HOME

# Instrucciones
Para ejecutar este script 7.sh primero debe ejecutar este comando
chmod u+x 7.sh
./7.sh