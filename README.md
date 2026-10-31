# Репозиторий по основам программирования

Лекции для 1 курса ФИИТ и ПМ

## Инструкции

### Выбор терминала по умолчанию
1. File->Preferences->Settings
2. В поиске ввести "default terminal" или найти по дереву "Terminal › Integrated › Default Profile: Windows"
3. Выбрать Git Bash (у вас должен быть установлен клиент [git-scm](https://git-scm.com/))
<br><br>

### Полезные команды терминала Linux
```
ls  # показать содержимое директории
ls -la  # показать содержимое директории с дополнительной информацией
cd <dir_name>   # сменить директорию
cd ..   # подняться на уровень выше по дереву директорий
rm <file_name>  # удалить файл
rm -r <dir_name>    # удалить директорию
mrdir <dir_name>    # создать директорию
```

### CLI configure and launch

Конфигурация проекта (при условии, что вы находитесь в директории проекта)
```
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
```

Сборка всего проекта
```
cmake --build build --target ALL_BUILD
```

Сборка конкретного подпроекта
```
cmake --build build --target lecture02_types_and_operations
```

Очистка билда проекта
```
rm -r build
```

Запуск программы
```
cd build/<subproject_name>/Debug
./executable_name.exe
```

### Git CLI
Посмотреть незакоммиченные изменения
```
git status
```

Добавить файл(-ы)/директории в staged (помеченные как используемые в текущем коммите)
```
git add .   # добавить все измененные файлы и директории
git add README.md   # добавить конкретный файл
```

Сделать коммит
```
git commit -m "commit message"
```

Отправить изменения на удаленный репозитории
```
git push
```

Стянуть изменения с удаленного репозитория
```
git pull
```

Отменить все незакоммиченные изменения
```
git restore .
```

### Pre-commit tool
Установить в Git Bash
```
pip install pre-commit
```

Создать в корне проекта файл `.pre-commit-config.yaml` с правилами форматирования.

Запустить pre-commit
```
pre-commit run --all
```

### Тесты
```
ctest --test-dir build/test_example/test -C Debug --output-on-failure

ctest --test-dir build/test_example/test -V -R "IsPrimeTest"
```
