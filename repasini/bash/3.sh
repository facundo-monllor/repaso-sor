# El script pide al usuario una extensión origen y una extensión destino. Renombrar todos los archivos con
# la extensión origen en el directorio actual, cambiandoles la extensión a la destino. Mostrar cuántos
# archivos fueron renombrados.

echo "pasame el origen"
read origen

echo "pasame el destino"
read destino

cont=$(find . -name "*.$origen" | wc -l)

for file in *.$origen
do
    mv $file ${file%.*}.$destino
done

echo "archivos modificados: $cont"

