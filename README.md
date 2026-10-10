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
```

### CMake CLI

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

### Запуск программы
```
cd build/<subproject_name>/Debug
./executable_name.exe
```