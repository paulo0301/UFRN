# Questão 2

**2.3) Você pode explicar o que “git reset” faz?**

* **reset padrão ou --mixed**

  O `git reset` pode ser usado para retirar arquivos do Index (Staging area), ou seja, arquivos que não foram "commitados" ainda.
  Exemplo: suponha que temos o arquivo *example.html* em nosso diretório de trabalho local, fizemos algumas alterações nele e exetumaos o seguinte comando: `git add example.html`. Esse arquivo já está no Index, mas não era pra estar, pois ainda falta fazer algumas alterações. Dessa maneira, para retirá-lo, usamos o comando

  ```git
  git reset example.html 
  ```

  que equivalo ao comando com a flag --mixed

  ```git
  git reset --mixed example.html 
  ```

* **reset --soft**

  O comando `git reset --soft` reverte o commit em que o HEAD aponta, mas mantém as alterações no diretório de trabalho em um estado preparado para serem confirmadas novamente.
  Exemplo:Suponha que tenhamos feito várias alterações em um arquivo e confirmamos essas alterações com um commit. No entanto, percebemos que esquecemos de incluir uma alteração importante. Nesse caso, podemos executar um `git reset --soft` para desfazer o commit e manter as alterações no arquivo em um estado preparado para serem confirmadas novamente com o comando:
  
  ```git
  git reset --soft HEAD~1"
  ```

* **reset --hard**

  O comando `git reset --hard` reverte o commit em que o HEAD aponta, remove as alterações no índice e também remove as alterações no diretório de trabalho permanentemente.
  Exemplo: Suponha que tenhamos feito algumas alterações em um arquivo que não desejamos manter e que essas alterações ainda não foram adicionadas ao índice ou confirmadas com um commit. Nesse caso,podemos executar um "hard reset" para descartar todas as alterações no arquivo:
  
  ```git
  git reset --hard HEAD"
  ```
  
---
**2.5) Quando se usa "git rebase" ao invés de "git merge"?**

O "git merge" une as alterações de duas ou mais branches em um novo commit de merge, já o "git rebase" aplica as alterações da branch atual em relação a outra branch diretamente na ponta da outra branch. Ou seja, ele reorganiza a história de commits de uma branch, fazendo com que a branch pareça ter sido desenvolvida em continuação à outra.

O "git rebase" é geralmente preferido ao "git merge" quando se deseja manter a linha do tempo do projeto mais limpa e organizada, pois ele cria uma linha de commits mais linear e direta. Isso é útil quando se trabalha em projetos com muitas branches ou quando várias pessoas estão trabalhando na mesma branch. No entanto, se usado incorretamente, ele pode introduzir conflitos difíceis de resolver ou até mesmo causar a perda de dados.

---
**2.6) Qual é a diferença entre um 'fork' e um 'branch'?**

Um "fork" é uma cópia completa de um repositório Git para outra conta de usuário do Git. Isso pode ser feito quando alguém deseja contribuir para um projeto, mas não possui acesso de gravação ao repositório principal. A partir do "fork", o usuário pode criar um clone local do repositório, fazer alterações e enviar solicitações de pull para o repositório original.

Já um "branch" é uma ramificação dentro do repositório existente. Ele permite que os desenvolvedores trabalhem em diferentes recursos ou correções de bugs, enquanto mantêm a versão principal do projeto intacta. Um "branch" pode ser criado a partir de qualquer ponto do histórico do Git e, depois de desenvolvido, pode ser fundido de volta à versão principal do projeto usando o comando "merge" ou "rebase".

---
**2.10) O que é um "pull request"?**

Um "pull request" é uma solicitação que um desenvolvedor envia para o proprietário de um repositório Git para mesclar as alterações feitas em um "fork" ou "branch" com o repositório principal. É uma forma de colaboração e revisão de código entre membros da equipe ou entre contribuidores externos.

Podemos exemplificar o fluxo de um "pull request" da seguinte maneira:

1. O desenvolvedor faz um "fork" do repositório principal ou cria um novo "branch" a partir dele.
2. O desenvolvedor trabalha em suas alterações e faz "commits" no Git localmente.
3. O desenvolvedor envia as alterações para o repositório remoto, em sua própria conta ou branch.
4. O desenvolvedor cria um "pull request" para solicitar a revisão e fusão de suas alterações no repositório principal.
5. O proprietário ou os revisores do repositório principal analisam as alterações, fazem comentários e sugerem alterações, se necessário.
6. O desenvolvedor faz as alterações solicitadas, se houver, e atualiza o "pull request".
7. Depois que o "pull request" é aprovado, o proprietário ou os revisores do repositório principal mesclam as alterações no repositório principal.
8. O desenvolvedor sincroniza seu "fork" ou "branch" com o repositório principal.
9. O processo é concluído e as alterações são agora parte do repositório principal.

---
**2.12) Os commits quebrados podem ser corrigidos?**

Sim, commits quebrados podem ser corrigidos no Git. Existem várias maneiras de corrigir commits quebrados. Irei mostrar duas maneiras.

A primeira maneira (uma das mais comuns) de corrigir um commit quebrado é criar um novo commit que desfaça as alterações indesejadas do commit anterior. Isso pode ser feito usando o comando "git revert", que cria um novo commit que desfaz as alterações de um commit anterior, mantendo o histórico original do projeto.

A outra maneira de corrigir um commit quebrado é usar o comando "git commit --amend" para editar o commit anterior e corrigir o problema diretamente no próprio commit. Esse comando permite que você faça alterações no último commit sem criar um novo commit separado.
