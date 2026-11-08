# vuesp.wemos-d1-mini

Проект на **ESP8266 (ESP12E)** с локальным веб-интерфейсом [Vuesp](https://github.com/bondrogeen/vuesp).

## Порты

| GPIO | Пин ESP12E | Режим по умолчанию | Назначение |
| --- | --- | --- | --- |
| 4 | D2 | вход с подтяжкой | кнопка, датчик |
| 5 | D1 | вход с подтяжкой | кнопка, датчик |
| 12 | D6 | выход | реле, светодиод |
| 13 | D7 | PWM | диммер, вентилятор |
| 14 | D5 | PWM | диммер, вентилятор |
| 17 | A0 | ADC | аналоговый датчик |

Список портов задаётся в `src/gpio/gpio.cpp` и отображается на странице **GPIO**
и в карточках дашборда `vue/json/dashboard.json`.

## Сборка

```bash
pio run -e esp8266
pio run -e esp8266 -t buildfs
```

Прошивка: `build/esp8266/firmware.bin`, файловая система:
`build/esp8266/littlefs.bin`.

## Веб-интерфейс

```bash
cd vue
npm install
npm run dev
```

## Версии

- 4.0.0 — начальная версия на ESP8266.

## Ссылки

- [Документация](./DOCS.md)
- [Документация Vuesp](https://docs.vuesp.ru)
- [vuesp-create](https://github.com/bondrogeen/vuesp-create)
