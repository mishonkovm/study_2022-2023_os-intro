---
## Front matter
title: "Индивидуальный проект"
subtitle: "stage 3"
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

Целью данной лабораторной работы является приобретение навыков работы с собственным сайтом (добавление собственных достижений)

# Выполнение лабораторной работы

1. Добавил информацию о навыках. (рис. [@fig:001])

![Добавление информации о навыках](image/Рис.1.png){ #fig:001 width=70% }

2. Добавил информацию об опыте. (рис. [@fig:002])

![Добавление информации о навыках](image/Рис.2.png){ #fig:002 width=70% }

3. Добавил информацию о достижеиях. (рис. [@fig:003])

![Добавление информации о достижениях](image/Рис.3.png){ #fig:003 width=70% }

4. Проверил изменения на сайте. (рис. [@fig:004], [@fig:005],[@fig:006])

![Проверка изменений на сайте](image/Рис.4.png){ #fig:004 width=70% }

![Проверка изменений на сайте](image/Рис.5.png){ #fig:005 width=70% }

![Проверка изменений на сайте](image/Рис.6.png){ #fig:006 width=70% }

5. Создал в терминале папку для поста о прошедшей неделе. (рис. [@fig:007])

![Создание папки](image/Рис.7.png){ #fig:007 width=70% }

6. Написал текст о прошедшей неделе. (рис. [@fig:008])

![Текст о прошедшей неделе](image/Рис.8.png){ #fig:008 width=70% }

7. Проверил изменения на сайте. (рис. [@fig:009])

![Проверка изменений на сайте](image/Рис.9.png){ #fig:009 width=70% }

8. Создал в терминале папку для поста про Markdown. (рис. [@fig:010])

![Создание папки](image/Рис.10.png){ #fig:010 width=70% }

9. Написал текст про Markdown. (рис. [@fig:011])

![Текст про Markdown](image/Рис.11.png){ #fig:011 width=70% }

10. Проверил изменения на сайте. (рис. [@fig:012])

![Проверка изменений на сайте](image/Рис.12.png){ #fig:012 width=70% }

# Выводы

В ходе выполнения данной лабораторной работы я добавил собственные достижения на сайт.
