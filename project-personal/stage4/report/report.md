---
## Front matter
title: "Отчёт по индивидуальному проекту"
subtitle: "stage 4"
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

Целью выполнения данного этапа индивидуального проекта является приобретение навыков по созданию собственного сайта (добавление ссылок и постов)

# Задание

Добавить ссылки и посты на собственном сайте.

# Выполнение лабораторной работы

1. Добавил ссылки на аккаунт youtube, instagram и github. (рис. [@fig:001])

![Добавление ссылок](image/Рис.1.png){#fig:001 width=70%}

2. Добавил пост по прошедшей неделе. (рис. [@fig:002])

![Добавление поста по прошедшей неделе](image/Рис.2.png){#fig:002 width=70%}

3. Проверил добавление поста по прошедшей неделе на сайте. (рис. [@fig:003])

![Пост по прошедшей неделе на сайте](image/Рис.3.png){#fig:003 width=70%}

4. Добавил пост на тему "making presentations in markdown". (рис. [@fig:004])

![Добавление поста "making presentations"](image/Рис.4.png){#fig:004 width=70%}

5. Проверил добавление поста на тему "making presentations in markdown" на сайте. (рис. [@fig:005])

![Пост "making presentations" на сайте](image/Рис.5.png){#fig:005 width=70%}


# Выводы

В ходе выполнения данного этапа индивидуального проекта я приобрёл навыки по созданию собственного сайта (добавление ссылок и постов).
