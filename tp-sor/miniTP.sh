
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

mkdir $1
cd $1

touch contenido_home.txt
echo "$data" > contenido_home.txt

cat contenido_home.txt

read
