
function Error(){
    echo "Error: debe ejecutar con un parámetro al menos"
}

if test $# -lt 1
then
    Error
    exit 1
fi

cd $HOME

data=$(ls -la)

mkdir tmp
cd tmp
touch listado.txt
echo "$data" > listado.txt

cat listado.txt

read