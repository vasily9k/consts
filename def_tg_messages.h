#pragma once

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - Messages ----------------------------------------------------------
// ---------------------------------------------- RU - Сообщения ---------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
#define CONFIG_MESSAGE_TG_VERSION "🔸 Устройство запущено\n<code>Версия прошивки: %s</code>\n<code>Причина перезапуска: %s</code>\n<code>CPU0: %s</code>\n<code>CPU1: %s</code>"
#define CONFIG_MESSAGE_TG_MQTT_CONN_OK "🟢 Подключение к MQTT брокеру <b>%s</b>:<b>%d</b> выполнено"
#define CONFIG_MESSAGE_TG_MQTT_CONN_FAILED "🟡 Не удалось подключиться к MQTT брокеру <b>%s</b>:<b>%d</b>"
#define CONFIG_MESSAGE_TG_MQTT_CONN_LOST "🔴 Потеряно подключение к MQTT брокеру <b>%s</b>:<b>%d</b>!"
#define CONFIG_MESSAGE_TG_MQTT_SERVER_CHANGE_PRIMARY "🔀 Выполнено переключение на <b><i>основной</i></b> MQTT брокер"
#define CONFIG_MESSAGE_TG_MQTT_SERVER_CHANGE_RESERVED "🔀 Выполнено переключение на <b><i>резервный</i></b> MQTT брокер"
#define CONFIG_MESSAGE_TG_MQTT_ERROR "🛑 Ошибка MQTT ''<b>%s</b>''!"
#define CONFIG_MESSAGE_TG_OTA "🆕 Загрузка новой версии прошивки по адресу: <b>%s</b>"
#define CONFIG_MESSAGE_TG_CMD "🔤 Получена команда: <b>%s</b>"
#define CONFIG_MESSAGE_TG_MQTT_NOT_PROCESSED "🛑 Не удалось обработать входящее сообщение в топике ''<b>%s</b>''!"
#define CONFIG_MESSAGE_TG_PARAM_GROUP_DELIMITER "%s.%s"
#define CONFIG_MESSAGE_TG_PARAM_FIENDLY_DELIMITER "%s / %s"
#define CONFIG_MESSAGE_TG_PARAM_CHANGE "🛠 Изменение параметра ''<b>%s</b> / <b>%s</b>'':\n\n<code>%s.%s = <b>%s</b></code>"
#define CONFIG_MESSAGE_TG_PARAM_EQUAL "🛠 Изменение параметра ''<b>%s</b> / <b>%s</b>'' (%s.%s) игнорировано - новое значение <b>%s</b> идентично предыдущему"
#define CONFIG_MESSAGE_TG_PARAM_INVALID "🛑 Не удалось выполнить изменение параметра ''<b>%s</b> / <b>%s</b>'' - новое значение <b>%s</b> выходит за допустимые пределы"
#define CONFIG_MESSAGE_TG_PARAM_BAD "🛑 Не удалось выполнить преобразование значения для параметра ''<b>%s</b> / <b>%s</b>'':\n<code>%s.%s = <b>%s</b></code>"
#define CONFIG_MESSAGE_TG_SILENT_MODE_ON "🔕 Активирован <b><i>тихий режим</i></b> (без звуковых и световых оповещений)"
#define CONFIG_MESSAGE_TG_SILENT_MODE_OFF "🔔 <b><i>Тихий режим</i></b> (без звуковых и световых оповещений) отключен"
#define CONFIG_MESSAGE_TG_OTA_OK "🆙 OTA обновление успешно выполнено"
#define CONFIG_MESSAGE_TG_OTA_FAILED "⛔️ OTA обновление завершено с ошибкой %d!"
#define CONFIG_MESSAGE_TG_SENSOR_STATE_OK "🆗 Работоспособность сенсора <b>%s</b> восстановлена"
#define CONFIG_MESSAGE_TG_SENSOR_STATE_TIMEOUT "🆘 Сенсор <b>%s</b> не исправен или не доступен!"
#define CONFIG_MESSAGE_TG_SENSOR_STATE_CALIBRATION "🆑 Ошибка загрузки данных калибровки для сенсора <b>%s</b>!"
#define CONFIG_MESSAGE_TG_SENSOR_STATE_CRC_ERROR "🆘 Ошибка контрольной суммы при получении данных с сенсора <b>%s</b>!"
#define CONFIG_MESSAGE_TG_SENSOR_STATE_ERROR "🆘 Сенсор <b>%s</b> не исправен или не доступен!"
#define CONFIG_MESSAGE_TG_SENSOR_STATE_UNKNOWN_ERROR "🆘 Ошибка сенсора <b>%s</b>!"
#define CONFIG_MESSAGE_TG_HOST_UNAVAILABLE "📴 <b>Сервер</b> ''<b>%s</b>'' <i>не доступен</i>!"
#define CONFIG_MESSAGE_TG_GWAY_UNAVAILABLE "📴 <b>Роутер</b> <i>не доступен</i>!"
#define CONFIG_MESSAGE_TG_INET_UNAVAILABLE "📴 Доступ к <b>сети интернет</b> <i>потерян</i>!"
#define CONFIG_MESSAGE_TG_HOST_AVAILABLE "💠 Доступ к <b>серверу</b> ''<b>%s</b>'' <i>восстановлен</i>\n\n<code>Время начала проблем: </code><b>%s</b>\n<code>Время восстановления: </code><b>%s</b>\n<code>Проблемы наблюдались: </code><b>%d</b> час <b>%d</b> мин <b>%d</b> сек"
#define CONFIG_MESSAGE_TG_GWAY_AVAILABLE "📶 Доступ к <b>роутеру <i>восстановлен</i>\n\n<code>Время начала проблем: </code><b>%s</b>\n<code>Время восстановления: </code><b>%s</b>\n<code>Проблемы наблюдались: </code><b>%d</b> час <b>%d</b> мин <b>%d</b> сек"
#define CONFIG_MESSAGE_TG_INET_AVAILABLE "🌐 Доступ к <b>сети интернет</b> <i>восстановлен</i>\n\n<code>Время начала проблем: </code><b>%s</b>\n<code>Время восстановления: </code><b>%s</b>\n<code>Проблемы наблюдались: </code><b>%d</b> час <b>%d</b> мин <b>%d</b> сек"
#define CONFIG_MESSAGE_TG_WIFI_AVAILABLE "📶 Подключение к <b>точке доступа WiFi</b> <i>восстановлено</i>\n\n<code>Время начала проблем: </code><b>%s</b>\n<code>Время восстановления: </code><b>%s</b>\n<code>Проблемы наблюдались: </code><b>%d</b> час <b>%d</b> мин <b>%d</b> сек"

