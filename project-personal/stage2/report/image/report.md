---
## Front matter
title: "Индивидуальный проект"
subtitle: "stage 2"
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
lofTitle: "Список иллюстраций"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Целью данной лабораторной работы является приобретение навыков работы с собственным сайтом.

# Выполнение лабораторной работы

1. Разместил фотографию владельца сайта. (рис. [@fig:001])

![Фотография владельца](image/Рис.1.png){ #fig:001 width=70% }

2. Разместил краткое описание владельца сайта, информацию об интересах, информацию об образовании. (рис. [@fig:002], [@fig:003], [@fig:004])

![Информация о себе](image/Рис.2.png){ #fig:002 width=70% }

![Информация о себе](image/Рис.3.png){ #fig:003 width=70% }

![Информация о себе](image/Рис.4.png){ #fig:004 width=70% }

3. Создал файл last week. (рис. [@fig:005])

![Создание файла](image/Рис.5.png){ #fig:005 width=70% }

4. Сделал пост по прошедшей неделе. (рис. [@fig:006], [@fig:007])

![Написание поста](image/Рис.6.png){ #fig:006 width=70% }

![Размещение поста](image/Рис.7.png){ #fig:007 width=70% }

5. Создал файл Git. (рис. [@fig:008])

![Создание файла](image/Рис.8.png){ #fig:008 width=70% }

6. Сделал пост про систему контроля версий Git. (рис. [@fig:009], [@fig:010], [@fig:011])

![Написание поста](image/Рис.9.png){ #fig:009 width=70% }

![Написание поста](image/Рис.10.png){ #fig:010 width=70% }

![Размещение поста](image/Рис.11.png){ #fig:011 width=70% }


# Выводы

В ходе выполнения данной лабораторной работы я приобрёл навыки создания собственного сайта.


