//cd ~
//git clone git@github.com:M0G-29/libft.git
//cd libft
norminette *.c *.h

cd ~
git clone https://github.com/jtoty/Libftest
cd Libftest/
bash grademe.sh
bash grademe.sh

cd ~
git clone https://github.com/alelievr/libft-unit-test.git
cd libft-unit-test/
make f

cd ~
git clone https://github.com/ska42/libft-war-machine
cd libft-war-machine/
./grademe.sh
sed -i '' "s/PATH_LIBFT=../PATH_LIBFT=..\/libft/" my_config.sh
./grademe.sh

cd ~
cd libft
git clone https://github.com/Tripouille/libftTester.git
cd libftTester/
make

cd ~
rm -rf libft Libftest libft-unit-test libft-war-machine
