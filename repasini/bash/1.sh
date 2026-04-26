# Pedirle al usuario que ingrese una extensión de archivo (ej: txt, sh, csv). Mostrar todos los archivos con
# esa extensión en el directorio actual y guardar el resultado en /tmp/listado.txt con permisos de lectura solo
# para el propietario. Ejecutar el script en background.

if test $# -lt 1
then
    echo "Error: debe ejecutar con un parámetro al menos"
    exit 1
fi

cd $HOME
cd Downloads

mkdir tmporal
cd tmporal
touch listado.txt
chmod u+w listado.txt

cd $HOME
cd Downloads

data=$(find . -name "*.$1")
echo "$data" > tmporal/listado.txt
chmod 400 tmporal/listado.txt

exit 0

# ./1.sh & 


