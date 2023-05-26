---
## Front matter
title: "Отчёт по индивидуальному проекту"
subtitle: "stage 6"
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

Целью выполнения данного этапа индивидуального проекта является приобретение навыков по созданию собственного сайта (создание постов и записей для персональных проектов).

# Задание

Приобрести навыки по созданию собственного сайта.

# Выполнение лабораторной работы

1. Сделал первую запись для персонального проекта. (рис. [@fig:001])

![Запись №1](image/Рис.1.png){ #fig:001 width=70% }

2. Сделал вторую запись для персонального проекта. (рис. [@fig:002])

![Запись №2](image/Рис.2.png){ #fig:002 width=70% }

3. Проверил изменения на сайте. (рис. [@fig:003])

![Проверка изменений на сайте](image/Рис.3.png){ #fig:003 width=70% }

4. Сделал пост по прошедшей неделе. (рис. [@fig:004])

![Пост по прошедшей неделе](image/Рис.4.png){ #fig:004 width=70% }

5. Проверил изменения на сайте. (рис. [@fig:005])

![Проверка изменений на сайте](image/Рис.5.png){ #fig:005 width=70% }

6. Сделал пост на тему "Языки научного программирования". рис. [@fig:006])

![Пост по языкам научного программирования](image/Рис.6.png){ #fig:006 width=70% }

7. Проверил изменения на сайте. (рис. [@fig:007])

![Проверка изменений на сайте](image/Рис.7.png){ #fig:007 width=70% }

# Выводы

В ходе выполения данного этапа индивидуального проекта я приобрёл навыки по созданию собственного сайта (создание постов и записей для персональных проектов).


