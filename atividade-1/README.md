# Atividade 01

#### Nome:

##### Francisco Italo Silva do Nascimento

#### Matricula:

##### 20190000680

## Versão do Compilador

c++11

## SO usado

Mint20

## :checkered_flag: Starting

```bash

# Para compilar

$ cmake -S source -Bbuild
$ cmake --build build

# Executar o projeto

$ ./build/prog

# Lembre-se de executar os comandos no root
```

## Funções

<span >### Arquivo **SistemPlaylist.cpp**</span>

### void deletePlaylist(std::string name)

**_descrição :_** Função remove musica com o mesmo nome do parâmetro **name**.
<br/>
<br/>

**_retorna :_** Se a música existir na lista de Playlist apaga a música, caso contrário, retorna um aviso ao usuário informando que não encontrou a música
<br/>
<br/>

```
    playlists.deletePlaylist("nome_musica")
```

</hr>

### void printPlaylist()

**_descrição :_** Função lista todas as playlists do sistema
<br/>
<br/>

<br/>
<br/>

```
    playlists.printPlaylist()
```

</hr>
<hr>

<span >### Arquivo **Playlist.cpp**</span>

<hr>

### void remove_song(std::string nameSong)

**_descrição :_** Função remove musica com o mesmo nome do parâmetro **nameSong**.
<br/>
<br/>

**_retorna :_** Se a música existir na Playlist apaga a música, caso contrário, retorna um aviso ao usuário informando que não encontrou a música
<br/>
<br/>

```
    playlystExample.remove_song("nome_musica")
```

</hr>

### int getControll()

**_descrição :_** Função auxilizar. retorna a quantidade de vezes que a função getNextSong() foi chamada.
<br/>
<br/>

**_retorna :_** Inteiro indicando quantidade de vezes que a função getNextSong() foi chamada.
<br/>
<br/>

```
    playlystExample.getControll();
```

</hr>

### Song\* getNextSong()

**_descrição :_** Retorna a proxima música que irá ser retornada
<br/>
<br/>

**_retorna :_** Retorna a proxima música que irá ser retornada
<br/>
<br/>

```
    playlystExample.getNextSong();
```

<hr>

### Song\* printSongs()

**_descrição :_** imprime todas as musicas da playlist
<br/>
<br/>

**_retorna :_** Não retorna nada. apenas printa todas as musicas da playlist
<br/>
<br/>

```
    playlystExample.printSongs();
```

<hr>

<span >### Arquivo **ListOfPlaylist.cpp**</span>

<hr>

#### o arquivo ListOfPlaylist.cpp é uma duplicata do aquivo list.cpp. assim, todos os métodos presentes no ListOfPlaylist.cpp tem no list.cpp só estão com o nome alterado.

<hr>

<span >### Arquivo **List.cpp**</span>

<hr>

### Song search_song(std::string name)

**_descrição :_** Função percorre a list em busca de uma musica com o mesmo nome do parâmetro **name**.
<br/>
<br/>
**_retorna :_** Se a música existir na list retorna a música, caso contrário, retorna uma música vázia.
<br/>
<br/>

```
    listaExemple.search_song("nome_musica")
```

</hr>

### int delete_song(std::string title){

**_descrição :_** Função percorre a list em busca de uma musica com o mesmo nome do parâmetro **name**, caso exista, a musica é apagada da list.
<br/>
<br/>

**_retorna :_** Se a música existir na list é apagada, caso contrário, não acontece nada.

```
    listaExemple.delete_song("nome_musica")
```

</hr>

### Song next_song(int controll){

**_descrição :_** Função retorna a próxima musica da lista de acordo com a variavel controll. Controll guarda a quantidade de vezes em que o método foi chamado

<br/>
<br/>

**_retorna :_** Se a a próxima música existir na list
é retornada para o usuário, caso contrário, é retornado o valor NULL.

```
    listaExemple.next_song(0) //irá retornar a segunda música da lista
```

</hr>

### int print_songs(node\* node)

**_descrição :_** Função imprime todas as músicas de uma lista de forma recursiva. Seu parametro irá receber o nó de cada item da lista.

<br/>
<br/>

**_retorna :_** Não retorna nada. Apenas printa o nome da musica

```
    listaExemple.print_songs(getFist());
```

</hr>

### node\* getFist()

**_descrição :_** Função auxiliar. serve apenas para retorna o inicio da lista linkada.

<br/>
<br/>

**_retorna :_** retorna cabeça da lista

```
    listaExemple.print_songs(getFist());
```
