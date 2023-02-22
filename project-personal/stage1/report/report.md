---
## Front matter
title: "Отчёт по первому этапу индивидуального проекта"
subtitle: "*дисциплина: Операционные системы*"
author: "Максим Александрович Мишонков"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Целью данной работы является размещение на Github pages заготовки для персонального сайта.

# Выполнение работы

1. Скачал исполняемый файл hugo (hugo_extended_0.98.0_Linux-64bit.tar.gz) для генерации страниц сайта. (рис. [-@fig:001])

![Скачивание исполняемого файла hugo](image/Рис.1.png){ #fig:001 width=70% }

2. Перейдём в "Загрузки" и разархивируем файл. (рис. [-@fig:002])

![Разархивация файла](image/Рис.2.png){ #fig:002 width=70% }

3. Создадим папку "bin" с файлом hugo. (рис. [-@fig:003])

![Создание папки bin с файлом hugo](image/Рис.3.png){ #fig:003 width=70% }

4. Создал репозиторий blog на основе шаблона. (рис. [-@fig:004])

![Создание репозитория](image/Рис.4.png){ #fig:004 width=70% }

5. Клонировал созданный репозиторий. (рис. [-@fig:005])

![Клонирование репозитория](image/Рис.5.png){ #fig:005 width=70% }

6. Перешел в каталог "blog" и ввёл в терминале ~/bin/hugo server. (рис. [-@fig:006])

![~/bin/hugo server](image/Рис.6.png){ #fig:006 width=70% }

7. Скопировал ссылку из предыдущего пункта и вставил её в браузер. (рис. [-@fig:007])

![Переход на сайт](image/Рис.7.png){ #fig:007 width=70% }

8. Создал репозиторий mishonkovm.github.io. (рис. [-@fig:008])

![Создание репозитория](image/Рис.8.png){ #fig:008 width=70% }

9. Перешёл в терминал и клонировал созданный репозиторий. (рис. [-@fig:009])

![Клонирование репозитория](image/Рис.9.png){ #fig:009 width=70% }

10. Перешёл в созданный каталог и ввёл в терминале команду git checkout -b main, чтобы создать ветку. (рис. [-@fig:010])

![Создание ветки](image/Рис.10.png){ #fig:010 width=70% }

11. Создал файл, чтобы активировать созданный репозиторий. (рис. [-@fig:011])

![Активация репозитория](image/Рис.11.png){ #fig:011 width=70% }

12. Убедился в том, что файл был создан. (рис. [-@fig:012])

![Созданный файл](image/Рис.12.png){ #fig:012 width=70% }

13. Перешел в каталог "blog" и ввёл в терминале ввёл команду git submodule add -b main git@github.com:mishonkovm/mishonkovm.github.io.git public, чтобы созданный репозиторий подключить к папке "public" внутри каталога "blog". (рис. [-@fig:013])

![Подключение созданного репозитория к папке public](image/Рис.13.png){ #fig:013 width=70% }

14. Открыл в mc файл .gitignore и скомментировал public, сохранил изменения. (рис. [-@fig:014])

![Комментирование public](image/Рис.14.png){ #fig:014 width=70% }

15. Проверил изменение из предыдущего пункта. (рис. [-@fig:015])

![Проверка изменения](image/Рис.15.png){ #fig:015 width=70% }

16. Ввёл в терминал команду git submodule add -b main git@github.com:mishonkovm/mishonkovm.github.io.git public. (рис. [-@fig:016]) 

![Введение нужной команды](image/Рис.16.png){ #fig:016 width=70% }

17. Убедился в том, что появилась папка "public". (рис. [-@fig:017]) 

![Папка "public"](image/Рис.17.png){ #fig:017 width=70% }

18. Ввёл нужную команду, находясь в каталоге "blog", чтобы появились нужные файлы в папке "public". (рис. [-@fig:018], [-@fig:019]) 

![Команда ~/bin/hugo](image/Рис.18.png){ #fig:018 width=70% }

![Появившиеся файлы](image/Рис.19.png){ #fig:019 width=70% }

19. Синхронизировал появившиеся файлы с репозиторием, перейдя в папку "public". (рис. [-@fig:020], [-@fig:021]) 

![Синхронизация файлов с репозиторием](image/Рис.20.png){ #fig:020 width=70% }

![Синхронизация файлов с репозиторием](image/Рис.21.png){ #fig:021 width=70% }

20. Обновил репозиторий и проверил, что все файлы появились. (рис. [-@fig:022])

![Появившиеся файлы](image/Рис.22.png){ #fig:022 width=70% }


# Выводы

В ходе выполнения данной работы я разместил на Github pages заготовки для персонального сайта. Первый этап индивидуального проекта завершён. 


