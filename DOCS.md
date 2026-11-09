# vuesp.wemos-d1-mini — документация

Проект на ESP8266 (ESP12E) с локальным веб-интерфейсом Vuesp.

## Обзор

`vuesp.wemos-d1-mini` собирается под ESP8266 и использует стандартный шаблон Vuesp: Wi-Fi,
LittleFS, WebSocket, ScriptRunner и веб-интерфейс на Vue 3.

## Порты

| GPIO | Пин | Режим | Назначение |
| --- | --- | --- | --- |
| 4 | D2 | `INPUT_PULLUP` | кнопка, датчик |
| 5 | D1 | `INPUT_PULLUP` | кнопка, датчик |
| 12 | D6 | `OUTPUT` | реле, светодиод |
| 13 | D7 | `PWM` | диммер |
| 14 | D5 | `PWM` | диммер |
| 17 | A0 | `ADC` | аналоговый вход |

GPIO 0, 1, 2, 3, 15 и 16 не используются по умолчанию: они отвечают за
загрузку, UART и flash. При необходимости их можно добавить в
`src/gpio/gpio.cpp`.

## Веб-интерфейс

- `/` — главная;
- `/dashboard/` — карточки устройств;
- `/device/gpio/` — настройка портов;
- `/device/settings/` — Wi-Fi и авторизация;
- `/device/storage/` — файлы LittleFS;
- `/script/` — ScriptRunner.

## API

HTTP и WebSocket-протокол наследуются от Vuesp. Сообщения описаны в
`src/const/struct.h`.

## Файлы

Конфигурация устройства хранится в LittleFS: `/tmp/device.io`, `/tmp/gpio.io`.
Статические файлы веб-интерфейса собираются в `data/www`.

## Ссылки

- [Vuesp](https://github.com/bondrogeen/vuesp)
- [Документация](https://docs.vuesp.ru)
