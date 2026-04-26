# El script debe pedir un directorio al usuario y contar cuantos archivos .txt, .sh y .log existen en ese
# directorio. Mostrar el conteo de cada uno por pantalla.

echo "pasame el directorio"
read directorio
echo "tu directorio es :$directorio"

cd $HOME
cd $directorio

archivostxt=$(find . -name "*.txt" | wc -l)
archivossh=$(find . -name "*.sh" | wc -l)
archivoslog=$(find . -name "*.log" | wc -l)

echo "tus archivos txt son :$archivostxt"
echo "tus archivos sh son :$archivossh"
echo "tus archivos log son :$archivoslog"
