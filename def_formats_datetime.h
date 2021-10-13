#pragma once

// -----------------------------------------------------------------------------------------------------------------------
// ------------------------------------------ EN - Date and time formats -------------------------------------------------
// ------------------------------------------ RU - Форматы даты и времени ------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Localized names for days of the week
// RU: Локализованные названия для дней недели
#define CONFIG_FORMAT_WDAY1 "пн"
#define CONFIG_FORMAT_WDAY2 "вт"
#define CONFIG_FORMAT_WDAY3 "ср"
#define CONFIG_FORMAT_WDAY4 "чт"
#define CONFIG_FORMAT_WDAY5 "пт"
#define CONFIG_FORMAT_WDAY6 "сб"
#define CONFIG_FORMAT_WDAY7 "вс"
// EN: First day of the week (0-sun, 1-mon, 2-tue, etc.)
// RU: Первый день недели (0-вс, 1-пн, 2-вт и т.д.)
#define CONFIG_FORMAT_FIRST_DAY_OF_WEEK 1
// EN: Date and time formats
// RU: Форматы даты и времени
#define CONFIG_FORMAT_DTS "%d.%m.%Y %H:%M:%S"
#define CONFIG_FORMAT_DTM "%d.%m.%Y %H:%M"
#define CONFIG_FORMAT_TIME "%H:%M"
#define CONFIG_FORMAT_DATE "%d.%m.%y"
// EN: Output sequence: "0" - time + day of the week [%TIME %WDAY]; "1" - day of the week + time [%WDAY %TIME]
// RU: Последовательность вывода: "0" - время + день недели [%TIME %WDAY]; "1" - день недели + время [%WDAY %TIME]
#define CONFIG_FORMAT_WT 0
// EN: Output sequence: "0" - date + time [%DATE %TIME]; "1" - time + date [%TIME %DATE]
// RU: Последовательность вывода:  "0" - дата + время [%DATE %TIME]; "1" - время + дата [%TIME %DATE]
#define CONFIG_FORMAT_TD 1
// EN: Time output format: 1 - wday (CONFIG_FORMAT_WDAYx), 2 - time (CONFIG_FORMAT_TIME)
// RU: Формат вывода времени: 1 - wday (CONFIG_FORMAT_WDAYx), 2 - time (CONFIG_FORMAT_TIME)
#define CONFIG_FORMAT_TIMEDAY "%s %s"
// EN: The format "time + date": 1 - time (CONFIG_FORMAT_TIME), 2 - date (CONFIG_FORMAT_DATE)
// RU: Формат "время + дата": 1 - time (CONFIG_FORMAT_TIME), 2 - date (CONFIG_FORMAT_DATE)
#define CONFIG_FORMAT_DATETIME1 "%s\n%s"
// EN: The format "(time + day of the week) + date": 1 - time + wday (CONFIG_FORMAT_TIMEDAY and CONFIG_FORMAT_WT), 2 - date (CONFIG_FORMAT_DATE)
// RU: Формат "(время + день недели) + дата": 1 - time+wday (CONFIG_FORMAT_TIMEDAY и CONFIG_FORMAT_WT), 2 - date (CONFIG_FORMAT_DATE)
#define CONFIG_FORMAT_DATETIME2 "%s\n%s"

